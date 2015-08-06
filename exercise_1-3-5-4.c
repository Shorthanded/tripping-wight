/**********************************************************************
 * Complete the following partially written program for division in such
 * a way that it will require a time of order log (x div y). Again you
 * may use multiplication and division by two, but not other numbers.
 * The program should preserve x and y.
 *********************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool odd(int x);
bool even(int x);

int main(int argc, char* argv[]){

	int x, y, z, n, q, r;

	puts("Calculates x / y.");
	puts("Enter x: ");
	scanf("%d", &x);
	puts("Enter y: ");
	scanf("%d", &y);

	assert( x>=0 && y>0);

	// "Acheive first invariant:"
	// whileinv: z=y*2^n && n>=0 && x>=0
	z=y; n=0;
	while( z<=x ){
		//"Increase z while maintaing invariant"
		z=z*2;
		n=n+1;
	}
	
	// "Acheive second invariant:"
	// whileinv: x==q*z+r && 0<=r<z && z==y*2^n && n>=0
	q=0; r=x;	
	while( n!=0 ){
		// "Decrease n while maintaining invariant"
		n=n-1;
		z=z/2;
		r=r-z;
		q=q+n; // need to fix
	}

	assert( x==q*y+r && 0<=r<=y);

	printf("%d divided by %d equals %d with a remainder of %d.\n",
			x, y, q, r);

	return 0;
}

bool odd(int x) {
	if( x%2==0 ) return false;
	return true;
}

bool even(int x) {
	if( x%2==0 ) return true;
	return false;
}
