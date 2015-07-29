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

int main(int argc; char * argv[]){
	
	int k, w, x, y, z;

	// y >= 0
	
	// "Acheive invariant:"
	// whileinv: z + w * k = x * y && k >= 0
	w = x; k = y; z = 0;
	while( k != 0 ) {
		// "Decrease k while maintaining invariant"
		k-=1;
		}

	// z == x * y
	
	return 0;
}	
