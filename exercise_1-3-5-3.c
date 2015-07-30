/**********************************************************************
 * Complete the following partially written program for multiplication
 * in such a way that it will require time of order log y. Within the
 * program, you may use multiplication and division by two but not other
 * numbers. (As noted earlier, this is a natural restriction, since 
 * multiplication and division by two can be implemented by shifting on
 * a computer with binary arithmatic.) The program should preserve x and
 * y.
 **********************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool odd(int x);
bool even(int x);

int main(int argc, char* argv[]){
	
	int k, w, x, y, z;

	puts("Calculates x * y.");
	puts("Enter x: ");
	scanf("%d", &x);
	puts("Enter y: ");
	scanf("%d", &y);

	assert( y>=0 );
	
	// "Acheive invariant:"
	// whileinv: z + w * k = x * y && k >= 0
	w = x; k = y; z = 0;
	while( k != 0 ) {
		// "Decrease k while maintaining invariant"
		// since 2x * y = x * 2y
		if ( odd( k ) ) {
		       k=k-1; z=z+w;
		}	       
		k=k/2; w=w*2;
		}

	// z == x * y
	
	printf("%d times %d equals %d", x, y, z);
	
	return 0;
}	

bool odd(int x) {
	if ( x%2 == 0 ) return false;
	return true;
}

bool even(int x) {
	if ( x%2 == 0) return true;
	return false;
}
