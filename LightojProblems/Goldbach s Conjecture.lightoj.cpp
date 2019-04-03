//Anik_Modak
#include<bits/stdc++.h>
#define S 10000005
using namespace std;

bool a[S]={0};
vector<int>p;

void sive()
{
    int i,j;
    a[0]=true;
    a[1]=true;

    p.push_back(2);
    for(int i=4; i<S; i+=2) a[i]=1;

    for(i=3; i<S; i+=2)
    {
		if(a[i] == false){
            p.push_back(i);
			for (j=2*i; j<S; j=j+i) a[j] = true;
		}
	}
}

int main()
{
    sive();
    int t,ca,i,n;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int x,y,c=0;
        i=0;
        while(1)
        {
			x=p[i];
			y=n-x;
			if(x>y) break;
			if(a[y]==false) c++;
            i++;
		}
        printf("Case %d: %d\n",ca,c);
    }
}


