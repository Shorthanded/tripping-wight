/**********************************************************************
 * To try to improve this program, we look for a more general invariant
 * that will still imply the foal y=x^n when k=0.
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
 * But this replacement takes no advantage of the more general           
 * invariant. We can take advantage of 
 * x^(2*m) = (x*x)^m when m>=0
 * so that when k is even before executing "Decrease k while maintain- 
 * ing invariant" we will have
 * 
 * x^n=y*z^k=y*(z*z)^(k/2)
 * 
 * so that dividing k by 2 and squaring z will maintain the invariant
 *********************************************************************/
#include <stdio.h>

int main (int argc, char *argv[])
{
  int x, y, k, n, z;
  // x >= 0
  k=n; y=1; z=x;
  // whileinv: y*z^k=x^n && k>=0
  while(k!=0){
	k-=1; y=y*z;   
	}
  // y=x^n
  return 0;
}
