#include<stdio.h>
int main()
{
    long long int i,n,m,x,s1,s2,s;
    scanf("%lld",&n);
	if(n%2==0)
		m=n/2;
	else
		m=(-1*((n+1)/2));
	printf("%lld\n",m);
    return 0;
}
