/* From 1.3.2 - Specification by Asserions
 * Exercise 1:
 * Replace "Increase k while maintaining invariant" by
 * 	begin k:= k+2; f:=k*(k-1)*f end
 * and find out where the program construction argument breaks down.
 * See if you can save the situation by adding even(n) to the precedent
 * of the programand even(k) and even(n) to the invariant
 */

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[]){

	int n, f, k;

	puts("Computes the factorial of a number.");
	puts("Enter a number: ");

	scanf("%d", &n);

	assert(n>=0 && (n % 2 == 0)); // precondintion

	{//Compute Factorial
		// acheive invariant
		k = 0; f = 1;
		// whileinv: f=k! and 0<=k<=n and even(n) and even(k)

		while(k != n){
			// f=k! and 0<=k<n
			{// increase k while maintaining invariant
				k=k+2;
				f=k*(k-1)*f;	
			}
			// f=k! and 0<=k<=n
		}

	}


	// assert(f = n!) //postcondition
	
	printf("The factoral of %d is %d.", n, f);

	return 0;
}
