#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        int n,p=0;
        n=a.size()-b.size();

        for(i=n,j=0;i<a.size();j++,i++)
        {
            if(b[j]!=a[i]) {
                p=1;break;
            }
        }
        if(p==0&&n>=0) cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;
    }
}
