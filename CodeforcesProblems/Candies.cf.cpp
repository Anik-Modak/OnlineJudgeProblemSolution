//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

inline bool ok(long long k)
{
	long long lef=n,p1=0,p2=0;
	while(lef>0)
	{
		if(lef>=k)
		{
			p1+=k;
			lef-=k;
		}
		else p1+=lef,lef=0;
		p2+=(lef>=10) ? lef/10 : 0;
		lef-=lef/10;
	}
	return p1>=p2;
}

int main()
{
	cin>>n;
	if(n==1)
	{
		printf("1");
		return 0;
	}
	long long l=0,r=n+1;
	while(l+1<r)
	{
		long long mid=(l+r)>>1;
		if(ok(mid)) r=mid;
		else l=mid;
	}
	cout<<r;
	return 0;
}
