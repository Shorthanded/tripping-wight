// From 1.3.3 - Assertions as Comments

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[]){

	int n, f, k;

	puts("Computes the factorial of a number.");
	puts("Enter a number: ");

	scanf("%d", &n);

	assert( n >= 0); // precondintion

	k = 0; f = 1;
	// whileinv: f=k! and 0<=k<=n

	while(k != n){
		k=k+1;
		// assert(f=(k-1)! and 0<k<=n)
		f = k * f;
		}

	// assert(f = n!) //postcondition
	
	printf("The factoral of %d is %d.", n, f);

	return 0;
}
