#include <stdio.h>
#include <string.h>
#include "soma.h"
#include "soma2.h"

int main(void){
	int *vec;
	int value = 15, pos = 5, res = 0;
	//Tendo em conta que a primeira posição é 0
	//Warning ao mudar o value, mudar tambem em baixo (antes da func em assembly)
	vec = &value;
	
	res = activa_bit_c(vec, pos);
	printf("res = %d, colocando 1b na pos %d, o nr apresenta o valor %d\n", res, pos, *vec);

	value = 15, res = 0;
	res = activa_bit_s(vec, pos);
	printf("res = %d, colocando 1b na pos %d, o nr apresenta o valor %d\n", res, pos, *vec);

	return 0;
}
