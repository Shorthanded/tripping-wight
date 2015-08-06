/**********************************************************************
 * So far the programs have had all had the form
 * 	
 * 	"Initialize"; while L do "Change"
 *
 * This will not always work. Consider:
 *
 * 	{n>=0}"Compute Fibonacci"{f==fib(n)}
 *
 * where fib satisfies:
 * 	
 * 	fib(0)=0
 * 	fib(1)=1
 * 	fib(n)=fib(n-1)+fib(n-2)
 *
 * Since we need to keep track of two adjacent previous values and the
 * final value, we start with three variables f, g, k where:
 *
 * 	f=fib(k) and g=fib(k-1)
 *
 * since we would be increasing k until it is equal to n, we add k<=n to
 * the invariant:
 * 	
 * 	{n>=0}
 * 	"Acheive invariant";
 * 	{whileinv: f=fib(k) and g=fib(k-1) and k<=n}
 * 	while( k!=n ){
 * 		"Increase k while maintaining invariant"
 * 	}
 * 	{f=fib(n)}
 *
 * Now consider the expansion of the while statement body. if we change
 * first k first, we have
 *
 * 	{f=fib(k) and g=fig(k-1) and k<n}
 * 	k=k+1;
 * 	{f=fib(k-1) and g=fib(k-2) and k<=n}
 * 	"change f and g to reestablish invariant"
 * 	{f=fib(k) and g=fib(k-1) and k<=n}
 *
 * to complete the specification, we must make the new value of f be
 * the sum of the old values f and g, and make the new value of g be
 * the old value of f. But to do this we will need a temporary variable:
 *
 * 	t=f+g; g=f; f=t;
 *
 * or
 *
 * 	t=f; f=f+g; g=t;
 *
 * There is also a problem with "acheive invariant", since the obvious
 *
 * 	k=1; g=0; f=1;
 *
 * will run forever if n=0. The most obvious solution to this problem is
 * to handle the 0 case seperately:
 *
 *********************************************************************/

#include <stdio.h>
#include <assert.h>

int main(int argc, char* argv[]){

	int n, f, g, k, t;

	assert( n>=0 );
	if( n == 0 ){
		f=0;
	} else {
		assert( n>=1 );
		k=1, g=0, f=1;
		//whileinv: f=fib(k) and g=fib(k-1) and k<=n
		while( k!=n ){
			k=k+1;
			t=f+g;
			g=f;
			f=t;
		}
	}
	
	//f=fib(n)

	return 0;
}
