#include <stdio.h>
#include <stdlib.h>
#include "media.h"


int main(){
	int i;
	char str[255] = "O ma va d CI";
	int vec[4];
	
	ex13(str, 'a', vec);
	for (i = 0; i<4; i++){
		printf("%d ", vec[i]);
	}
	return 0;
}


