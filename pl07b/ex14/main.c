#include <stdio.h>
#include <string.h>
#include "soma.h"

short int num, aux;
short int *ptrvec1, *ptrvec2;
int *ptrvec3;

int main(void){
	short int vec1[11] = {10,10,4,3,5,10,7,1,22,8,1};
	short int vec2[11] = {8,10,5,0,0,0,7,0,8,10,99};
	int vec3[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int res = 0, i = 0;	

	ptrvec1 = vec1;
	ptrvec2 = vec2;
	ptrvec3 = vec3;
	
	num = 11;
	aux = num;

	res = diferentes();

	printf("res  = %d\n", res);
	printf("vec1 = ");
	
	for(i=0; i<num; i++){
		printf("%hi ", vec1[i]);
	}
	printf("\n");
	printf("vec2 = ");
	for(i=0; i<num; i++){
		printf("%hi ", vec2[i]);
	}
	printf("\n");
	printf("vec3 = ");
	for(i=0; i<res; i++){
		printf("%d ", vec3[i]);
	}
	printf("\n");

	return 0;
}
