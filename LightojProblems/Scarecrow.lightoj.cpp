#include<bits/stdc++.h>
#define mx 1000005
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        cin>>n;
        string s;
        cin>>s;
        int i,c=0,m,ans=0;

        for(i=0; i<n; i++)
        {
            if(s[i]=='.') c++;
            else{
                m=c/3;
                if(c&&c%3){
                    m++;
                    i+=(2-c%3);
                }
                ans+=m;
                c=0;
            }
        }
        if(c){
            m=c/3;
            if(c%3) m++;
            ans+=m;
        }
        printf("Case %d: %d\n",ca,ans);
    }
}





