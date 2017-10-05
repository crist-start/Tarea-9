#include <stdio.h>

int main() {
	int num;
	printf("introduce un numero mayor a 0:\n");
	scanf("%i",&num);
	if(num>0){
		for(int s=1; s<=num; s++){
			printf("*\n");
		}
	}else{
		printf("numero invalido\n");
	}
	printf("fin del programa");
}

