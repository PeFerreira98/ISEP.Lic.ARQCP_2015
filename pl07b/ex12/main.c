#include <stdio.h>
#include <string.h>
#include "soma.h"

long long int *ptrvec1;
int num = 10;
int count;

int main(void){
	long long int vec1[10] = {0,2,999,3,5,1000,7,1,65539,8};
	int i = 0;	

	ptrvec1 = vec1;

	for(i=0; i<num; i++){
		printf("%llu ", vec1[i]);
	}
	
	printf("\n");
	count = vec_corta();
	
	for(i=0; i<num; i++){
		printf("%llu ", vec1[i]);
	}
	
	printf("\nModificações: %d\n", count);
	
	return 0;
}
