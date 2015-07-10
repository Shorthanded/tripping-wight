/* In the program constructed in 1.3.4, the relationship x=q*y+r would
 * be preserved by a while statement body of the form
 *
 * 	while(r>=y){
 * 		r=r-(a*y);
 * 		q=q+a;
 * 	}
 *
 * where a might be any integer. Show that a=1 i the only choice of a
 * that gives a correct program.
 *********************************************************************/

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	int x, y, q, r, a;

	r=x, q=0;

	while( r>= y) {

		a=1;
		// a should equal 1 because otherwise the equation
		// x=(q+1)y+(r-y) ceases to be true
		// x=(q+1)y+(r-(1*y)) is ok because nothing has changed
		// but
		// x=(q+2)y=(r-(2*y)) is not so good
		r=r-(a*y);
		q=q+a;
	}

	return 0;
}
