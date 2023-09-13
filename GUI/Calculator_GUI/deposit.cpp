#include "calculator.h"

double check_popolnenie_snyatie(int date, std::map<int, double> *popolnenie, std::map<int, double> *snyatie) {
    double res = 0;
    for (const auto x : *popolnenie) {
        if (x.first <= date) {
            res+=x.second;
            (*popolnenie).erase(x.first);
        }
    }
    for (const auto x : *snyatie) {
        if (x.first <= date) {
            res-=x.second;
            (*snyatie).erase(x.first);
        }
    }
    return res;
}

void Dep_Count(double sum_vklada, int srok_vklada, int nachalo_sroka,
               float proc_stavka, float nalog_stavka, double period,
               int capitalization, std::map<int, double> popolnenie,
               std::map<int, double> snyatie, double *nachislennie_proc,
               double *ptr_nalog, double *summa_k_koncu) {
    float cikl_rate = proc_stavka/100/365.25*period; //0,016657
    int kolichestvo_ciklov = srok_vklada/period; //12
    float kluchevaya_stavka = 0.12;
    double neoblag_dohod_za_cikl = kluchevaya_stavka*1000000/(365.25/period); //9994.25

    std::map<int, double> *ptr_popolnenie = &popolnenie;
    std::map<int, double> *ptr_snyatie = &snyatie;

    for (int i = 0; i <= kolichestvo_ciklov; i++) { //0..12
        int current_date = nachalo_sroka + i*period;


        //проверка на снятие/пополнение
        double snyatie_ili_popolnenie_v_cikle = check_popolnenie_snyatie(current_date, ptr_popolnenie, ptr_snyatie);
        sum_vklada+=snyatie_ili_popolnenie_v_cikle;


        //считаем гойские процентики
        double cikl_pribil = sum_vklada*cikl_rate; // 166,57
        *nachislennie_proc+=cikl_pribil; // 166,57
        //считаем вычет налога
        if (cikl_pribil > neoblag_dohod_za_cikl) {
            cikl_pribil-=nalog_stavka/100*(cikl_pribil-neoblag_dohod_za_cikl); //157,908
            *ptr_nalog+=nalog_stavka/100*(cikl_pribil-neoblag_dohod_za_cikl); //8,661575
        } else {
            ;
        }
        //условие капитализации процентов
        if (capitalization == 1) {
            sum_vklada+=cikl_pribil; //10166,57
        } else {
            *summa_k_koncu+=cikl_pribil;
        }
    }
    *summa_k_koncu+=sum_vklada;
}



