#include <stdio.h>
int f(int n)
{
	int jc;
	if(n==1)
		jc=1;
	if(n>1)
		jc=n*f(n-1);
	return jc;
} 

main()
{
	int k;
	k=f(4);
	printf("%d",k);
}
