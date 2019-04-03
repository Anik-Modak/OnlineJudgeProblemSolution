#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        int p=1;
        if(a.size()!=b.size()) cout<<"No"<<endl;
        else{
            for(i=0;i<a.size();i++)
            {
                if(a[i]==b[i]) continue;
                else{
                    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
                        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u') continue;
                        else p=0;
                    }
                    else p=0;
                }
            }
            if(p==0) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
}
