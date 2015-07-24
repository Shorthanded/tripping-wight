/**********************************************************************
 * To try to improve this program, we look for a more general invariant
 * that will still imply the goal y=x^n when k=0.
 *
 * One possibility is is to introduce an additional variable z, and use
 * y*z^k=x^n instead of y*x^k=x^n.
 *
 * The new invariant is almost as easy to acheive as the old one
 * (if we set x to z)
 * 
 * The body of the while statement must satisfy     
 *      
 * {y*z^k=x^n && k > 0}
 * "Decrease k while maintaining invariant"
 * {y*z^k=x^n && k >=0}
 *
 * since z^k = z*z(k-1) when k>0 the precedent here implies:
 * x^n=y*z^k=(y*z)*z^k-1
 * 
 * Thus decreasing k by one and multiplying y*z maintains the invariant 
 * 
 * k=k-1; y = y*z (S_)
 *
 * But this replacement takes no advantage of the more general           
 * invariant. We can take advantage of 
 * x^(2*m) = (x*x)^m when m>=0
 * so that when k is even before executing "Decrease k while maintain- 
 * ing invariant" we will have
 * 
 * x^n=y*z^k=y*(z*z)^(k/2)
 * 
 * so that dividing k by 2 and squaring z will maintain the invariant
 * 
 * This suggests a version of "Decrease k while maintaining invariant"
 * 
 * k=k/2; z=z*z; (Sdiv)
 *
 * But this only works when k is even. The first solution you might
 * consider is 
 * 	
 * 	if (odd(k)) {
 * 		k=k-1; y=y*z;
 * 	} else {
 *		k=k/2; z=z*z;
 *	}
 *	(Sbranch)
 *
 * A more subtle approach devised by E Djikstra is instead of branching,
 * to make k even:
 *
 * 	"make k even while maintaining invariant";
 *	{y*z^k=x^n && k>=0 && even(k)}
 *	k=k/2; z=z*z;
 *
 * S_ provides a way to satisfy "make k even while maintaining invariant"
 * If k is odd, do S_ else do nothing, So:
 *
 * 	if ( (odd(k) ) { k=k-1; y=y*z; }
 *	{y*z^k=x^n && k>=0 && even(k)}
 *	k=k/2; z=z*z;
 *	(Smakeeven) 		
 *
 * Considering the running time of each of these options you will have:
 * 
 * a + b * n 
 *
 * a : the maximum time time for the linear initialization
 * 	 portion of the program
 * b : the maximum time for the execution of the loop
 * n : the number of times the loop executes
 *
 * 
 *
 *********************************************************************/
#include <stdio.h>

int main (int argc, char *argv[])
{
  
  int x, y, k, n, z;
  // x >= 0
  k=n; y=1; z=x;
  // whileinv: y*z^k=x^n && k>=0
  while(k!=0){
  	if ( (odd(k) ) { k=k-1; y=y*z; }
        //y*z^k=x^n && k>=0 && even(k)
 	k=k/2; z=z*z;
	}
  // y=x^n
  return 0;
}
