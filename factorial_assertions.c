// From 1.3.2 - Specification by Asserions

/* Assertions are a way of systemetizing the top-down 
 * programming process.
 *
 * Assertions are by definition precise and complete specifications.
 */

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[]){

	int n, f, k;

	puts("Computes the factorial of a number.");
	puts("Enter a number: ");

	scanf("%d", &n);

	assert( n >= 0); // precondintion

	{//Compute Factorial
		// acheive invariant
		k = 0; f = 1;
		// whileinv: f=k! and 0<=k<=n

		while(k != n){
			// f=k! and 0<=k<n
			{// increase k while maintaining invariant
				
				k=k+1;
				// f=(k-1)! and 0<k<=n
				{// set f to reestablish f=k!
					f = k * f;
				}
				// f=k! and 0<=k<=n
			}
			// f=k! and 0<=k<=n
		}

	}


	// assert(f = n!) //postcondition
	
	printf("The factoral of %d is %d.", n, f);

	return 0;
}
