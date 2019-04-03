#include<bits/stdc++.h>
using namespace std;

long long power(long long a,long long n)
{
    if(n==0) return 1;
    long long ret=power(a*a,n/2);
    if(n%2==1) ret=ret*a;
    return ret;
}

int main()
{
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int a[n],b;
    vector<int>sub;

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++)
    {
        cin>>b;
        sub.push_back(abs(a[i]-b));
    }

    sort(sub.begin(),sub.end());
    for(int i = 0; i < k1+k2; ++i)
	{
		if (sub[sub.size()-1])
			sub[sub.size()-1]--;
		else
			sub[sub.size()-1]++;

		sort(sub.begin(), sub.end());
	}

    long long s=0;


    for(int i=0; i<n; i++)
        s+=power(sub[i],2);

    cout<<s<<endl;
}
