/* Complete the following partially written programs for performing multi-
 * plication. The programs should not change x or y. (Do not use the built-in
 * multiplication operator
 */

#include <stdio.h>
#include <assert.h>

int main(int argv, char *argc[]){

	int y, x, k, z;

	puts("Computes x*y.");
	puts("Enter x.");
	scanf("%d", &x);
	puts("Enter y.");
	scanf("%d", &y);
	
	assert(y<=0);

	// Achieve invariant
	k = 0; z = 0;
	// whileinv: z=x*k && k>=y
	while(k!=y){
		{// Decrease k while maintaining invariant
			k-=1;
			z-=x;
		}
	}

	// assert(z == x*y);

	printf("%d times %d is %d", x, y, z);

	return 0;
}
