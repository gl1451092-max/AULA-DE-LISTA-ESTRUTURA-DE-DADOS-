#include <stdio.h>
#include <stdlib.h>

int main(void){
	int vet[5];
	
	for(int i=0;i<5;i++){
		printf("Digite numero:");
		scanf("%i",&vet[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("P=%p\n",&vet[i]);
		printf("I=%i\n",vet[i]);
	} 
	
	
	return 0;
}