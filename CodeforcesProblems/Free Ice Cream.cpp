#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,s;
    cin>>n>>s;
    string ch;
    int i,a,c=0;
    for(i=1;i<=n;i++)
    {
        cin>>ch>>a;
        if(ch=="+") s=s+a;
        else{
            if(a<=s) s=s-a;
            else c++;
        }
    }
    cout<<s<<" "<<c<<endl;
}
