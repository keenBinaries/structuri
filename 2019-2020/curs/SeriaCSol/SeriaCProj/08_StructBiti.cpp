#include <stdio.h>

struct Car {
	unsigned far : 1;
	unsigned inchis : 1;
	int kmBord;
	unsigned trMetru : 4;
	unsigned : 4;
	unsigned AC : 1;
	unsigned : 0;
	unsigned flag : 1;
};


void main(int argc, char *argv[]) {

	Car myCar;

	char *pCar = (char*)&myCar;

	for (int i = 0; i<sizeof(Car); i++) { // parsez zona de memorie aferenta lui myCar
		pCar[i] = 0x00; // scriu valoarea 0 pentru fiecare byte din zona lui myCar
	}

	myCar.far = 1;
	myCar.inchis = 1;
	myCar.trMetru = 10;
	myCar.flag = 1;
	myCar.AC = 1;

	printf("Size Car = %d\n", sizeof(Car));
	printf("\nStare far: %d, Maxim turatii/minut: %d\n", myCar.far, myCar.trMetru);

}