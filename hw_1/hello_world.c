/*
 * hello_world.c

 *
 *  Created on: Oct 11, 2014
 *      Author: sohanir
 */

/* Problem Definition
Suppose we are given the task of generating code to multiply integer variable x
by various different constant factors K. To be efficient, we want to use only the
operations +, -, <<. For the following values of K, write C expressions to perform
the multiplication using at most three operations per expression.
Example:
K = 17:
K = -7:
K = 60:
K = -112:
*/
#include "stdio.h"
int simple_multiply(int, int);
int main()
{
	int product = 0;
	int x = 10, K=17;
	char string[10];
	product = simple_multiply(x,K);
	printf("Product = %d, input x = %d, K = %d/n",product, x,K);
	scanf("%s", string);
	return 0;
}
int simple_multiply(int x, int K)
{
	int sum = 0, i = 1;
	if (K > 0) {
		while (i < K) {
			sum = sum + x;
			i++;
		}
	} else {
		while (i > K) {
			sum = sum - x;
		    i--;
		}
	}
	return sum;
}


