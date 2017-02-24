/*
  * Name : Novalina Hutabarat
  * NPM  : 1606954924
  * Class : Ekstensi
  * Comment : Program multiplication using loop
*/

#define LOOP 4

#include <stdio.h>

void main(){
	int input = 5;
	int i;
	int product =0;
        for(i=0; i<LOOP; i++){
		product += input;
	}
	printf("%d times %d equals %d\n", input, LOOP, product);
}
