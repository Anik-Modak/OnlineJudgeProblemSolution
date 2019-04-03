//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

bool a[5000005]={0};
vector<int>v;

void sive(int n)
{
    int i, j;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
    v.push_back(2);
    for(i=3; i<n; i+=2) if(a[i/2]==0) v.push_back(i);
}

int main()
{
    int n;
    cin>>n;

    sive(5000000);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
