/* From section 1.3.4
 * consider a statement that, given two positive integersx and y, will set
 * q and r to the quotient and remainder of x divided by y. Specicifically, 
 * the statement should satisfy the speceification:
 *
 * 	{x>=0 && y>0}
 * 	"Compute Quotient"
 * 	{x=q*y+r && 0<=r<y}
 *
 * without changing x or y.						
 * ***************************************************************************/

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	
	puts("This program divides x by y and outputs the quotient and "
			"remainder.\nDivision by 0 and negatives is not allowed.");
	int x, y;
	puts("Enter x: ");
	scanf("%d", &x);
	puts("Enter y: ");
	scanf("%d", &y);

	assert(x>=0 && y>0);

	// compute quotient and remainder
	int r=x, q=0;

	//whileinv: x=q*y+r && 0<=r
	while(r>=y){
		{
			// x=q*y+r && y<=r
			// since:
			// x=q*y+r
			// x+y=q*y+r+y
			// x=q*y+y+r-y
			// x=(qy+y)+(r-y)
			// x=(q+1)y+(r-y)
			// so:
			// increasing q by 1 and
			// decreasing r by y
			// will maintain x=q*y+r
			// Decrease r while maintaining invariant
			r-=y;
			q+=1;
			// x=q*y+r && 0<=r
		}
	}

	assert(x==q*y+r && 0<=r<y);

	printf("The quotent is %d, the remainder is %d", q, r);
	

	return 0;
}

