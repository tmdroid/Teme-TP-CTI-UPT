#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	unsigned int picioare:10;
	unsigned int periculos:1;
	unsigned int varsta:11;
	char denumire[9];
	float masa;
} animal;

int main() {
	animal a;
	int i;
	
	printf("Abreviere stiintifica (8 chars): ");
	fgets(a.denumire, 9, stdin);
	a.denumire[strlen(a.denumire) - 1] = 0;
	
	printf("Numar de picioare: ");
	scanf("%d", &i);
	a.picioare = i;
	
	printf("Este periculos?(1 - da, 0 - nu) ");
	scanf("%d", &i);
	a.periculos = i;
	
	printf("Varsta: ");
	scanf("%d", &i);
	a.varsta = i;
	
	printf("Masa animalului: ");
	scanf("%f", &a.masa);
	
	printf("\n\n\n\n");
	printf("Abreviere: %s\n", a.denumire);
	printf("Picioare: %d\n", a.picioare);
	printf("Periculos: %d\n", a.periculos);
	printf("Varsta: %d\n", a.varsta);
	printf("Masa: %f\n", a.masa);
	
	
	return 0;
}
