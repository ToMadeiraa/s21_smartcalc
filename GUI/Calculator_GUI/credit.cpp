#include "calculator.h"


void Annuitet_Count(double summa, float stavka, int srok, double *month_min, double *month_max, double *pereplata, double *vsego) {
    float rate = stavka/100/12;
    *month_min = summa * rate*pow(rate+1, srok)/(pow(rate+1, srok) - 1);
    *month_max = *month_min;
    *vsego = *month_min * srok;
    *pereplata=  *vsego - summa;
}

void Different_Count(double summa, float stavka, int srok, double *month_min, double *month_max, double *pereplata, double *vsego) {
    /*double ostatok = summa;
    double month_payment = 0;
    std::vector<double> payments;
    int count_srok = srok;
    while (count_srok > 0) {
        month_payment = summa/srok+ostatok*stavka/100/12;
        count_srok--;
        ostatok-=month_payment;
        payments.push_back(month_payment);
    }
    for (size_t i = 0; i < payments.size(); i++) {
      *vsego += payments[i];
    }
    *month_min = payments[payments.size()-1];
    *month_max = payments[0];
    *pereplata = *vsego - summa;*/

    double rate = summa/srok;
    *month_max = rate + summa*stavka*30.42/36524.25;
    *month_min = rate + rate*stavka*30.42/36524.25;
    double payment = (*month_max+ *month_min)/2;
    *vsego = payment*srok;
    *pereplata = *vsego - summa;


}
