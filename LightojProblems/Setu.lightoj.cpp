#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca,n;
    cin>>t;
    string ch;
    for(ca=1;ca<=t;ca++)
    {
        cin>>n;
        long long k,s=0;
        printf("Case %d:\n",ca);
        while(n--){
            getchar();
            cin>>ch;
            if(ch=="donate"){
                cin>>k;
                s=s+k;
            }
            else cout<<s<<endl;
        }
    }
}
