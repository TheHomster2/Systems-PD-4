#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

srand( time(NULL) );

int array[10]; // array to store 10 values
int i; // iterator for the for loop
// insert a random value in each slot
for (i = 0; i < 10; i++){
	array[i] = rand();
}
array[9] = 0; // last value is 0
for (i = 0; i < 10; i++){
	printf("array[%d] = %d\n", i, array[i]);
}

int array2[10]; // another array to store 10 values
int * p;
for (i = 0; i < 10; i++){
	p = &array[i];
	array2[9-i] = * p;
}
for (i = 0; i < 10; i++){
	printf("array2[%d] = %d\n", i, array2[i]);
}

return 0;
}

