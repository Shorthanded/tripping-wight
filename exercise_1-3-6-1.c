/**********************************************************************
 * A more elegant solution to the problem discussed above arises from 
 * the fact that the function fib() can be consistently extended to -1
 * In particular, we can define fib(-1)=1. and still have
 *
 * 	fib(n)=fib(n-1)+fib(n-2)
 *
 * Show that this extension permits one to write a program satisfying
 *
 * 	{n>=0}"Compute Fibonacci"{f=fib(n)}
 *
 * without including a special branch for 0.
 *********************************************************************/

#include <stdio.h>
#include <assert.h>

int main(int argc, char* argv[]){

	int n, f, g, k, t;

	// n>=0
	n=23;
	// acheive invariant
	k=0; g=1; f=0;
	// whileinv: f=fib(k) and g=fib(k-1) and k<=n
	while( k!=n ){
		// f=fib(k) and g=fib(k-1) and k<n
		k=k+1;
		// f=fib(k-1) and g=fib(k-2) and k<=n
		// change f and g to reestablish invariant
		t=f+g; g=f; f=t;
		// f=fib(k) and g=fib(k-1) and k<=n
	}
	// f=fib(n)
	
	return 0;
}	
