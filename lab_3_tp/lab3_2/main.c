#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float sum = 0;
	int i = 0;
	for(; i < argc; i++) {
		sum += atof(argv[i]);
	}
	
	printf("Suma este: %.3f\n", sum);
	
	printf("Cel de-al doilea argument este %s\n\n", argv[2]);
	
	return 0;
}
