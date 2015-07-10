/* Combine the two programs in Exercise 2 to obtain a program satisfying
 *
 * {true}
 * "Compute product"
 * {z=x*y}
 *
 * Note that the assertion true describes the set of all possible states of 
 * computation.
 */

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	int x, y, z, k;
	puts("Calculates x * y.");
	puts("Enter x: ");
	scanf("%d", &x);
	puts("Enter y: ");
	scanf("%d", &y);

	if( y>=0 ) {
		// y >= 0
		// acheive invariant
		k=0, z=0;
		// whileinv: z=x*k && k<=y
		while( k!= y) {
			{// increase k while maintaining invariant
				k+=1;
				z+=x;
			}
		}
	} else {
		// y < 0
		// acheive invariant
		k=0, z=0;
		// whileinv: z=k*x && k>=y
		while( k!=y ) {
			{// decrease k while maintaining invariant
				k-=1;
				z-=x;
			}
		}
	}

	//z=x*y
	
	printf("%d times %d equals %d", x, y, z);

	return 0;
}
