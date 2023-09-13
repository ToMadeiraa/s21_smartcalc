CC				= gcc
CFLAGS			= -Wall -Werror -Wextra -std=c11
LIBRARY			= calculator.a
APP_NAME		= ../SmartCalculator
SRC_PROJECT		= $(wildcard logic/s21_smartcalc.c)
OBJ_PROJECT		= s21_smartcalc.o

all: install launch_app

install: $(LIBRARY)
	mv $(LIBRARY) ../GUI/Calculator_GUI/lib$(LIBRARY)
	cmake -S ../GUI/Calculator_GUI -B build
	make -C build
	cp build/Calculator_GUI ../SmartCalculator

launch_app:
	./$(APP_NAME)

$(LIBRARY): $(SRC_PROJECT)
	$(CC) $(CFLAGS) -c $(SRC_PROJECT)
	ar rc $(LIBRARY) $(OBJ_PROJECT)
	ranlib $(LIBRARY)


clean:
	rm -rf test
	rm -rf *.o
	rm -rf *.a
	rm -rf *.gcda
	rm -rf report
	rm -rf *.gcno
	rm -rf *.info
	rm -rf valgrind.txt


