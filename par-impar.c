#include <stdio.h>

int main() {
	int num;
	int div;
	printf("ingresa un numero:\n");
	scanf("%i",&num);
	div=num/2;
	if(num==div*2+1){
		printf("el numero es impar");
	}else{
		if(num==div*2){
			printf("el numero es par");
		}
	}
	return 0;
}

