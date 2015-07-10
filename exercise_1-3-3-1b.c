/* complete the following partially written programs
 * for performing exponentiation. The programs should
 * not change n or x. (Assume x^0=1, even when x=0.)
 */

#include <stdio.h>
#include <assert.h>

int main(int argv, char *argc[]){

	int y, x, k, n;

	puts("Computes x^n.");
	puts("Enter a base.");
	scanf("%d", &x);
	puts("Enter a power.");
	scanf("%d", &n);

	assert(n >=0 );

	// Achieve invariant
	k=0; y = 1;
	// whileinv: y=x^k && 0<=k<=n
	while(k!=n){
		{// Increase k while maintaining invariant
			k += 1;
			y *= x;
		}
	}

	// assert(y == x^n);

	printf("%d to the %d is %d", x, n, y);

	return 0;
}
