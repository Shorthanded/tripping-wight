/**********************************************************************
 * Complete the following partially written program for computing 
 * square roots. You may use multiplication by two but not by other
 * numbers. (This is a reasonable restriction, since multiplication by 
 * two can be implemented by shifting on a computer with binary
 * arithmatic.) The program should preserve the value of x.
 *
 * Note: (y+1)^2 = y^2+2y+1
 *********************************************************************/
#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	int x, y, r;
	//x>=0
	
	// acheive invariant
	r=x , y=0 ;
	// whileinv: x=y^2+r && r>=0 && y>=0
	while( r>=2*y+1 ) {
		// x=y^2+r && r>=2y+1
		// x=(y+1)y+(r-y)
		// Decrease r while maintaining invariant
		r= ;
		y=;
		// x=y^2+r && r>=0 && y>=0
	}

	//y^2 <= x < (y+1)^2
	
	return 0;
}
	
