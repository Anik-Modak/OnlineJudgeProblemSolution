#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    for(c=1;c<=t;c++)
    {
        int i=1,p;
        string a;
        map<int,string>mp;
        mp[1]=("http://www.lightoj.com/");

        printf("Case %d:\n",c);
        while(cin>>a)
        {
            if(a=="QUIT") break;
            else if(a=="VISIT") continue;
            else if(a=="BACK"){
                i--;
                if(i==0){
                    cout<<"Ignored"<<endl;
                    i=1;
                }
                else cout<<mp[i]<<endl;
                p=0;
            }
            else if(a=="FORWARD"){
                i++;
                if(i>mp.size()||p==1){
                    cout<<"Ignored"<<endl;
                    i=mp.size();
                }
                else cout<<mp[i]<<endl;
            }
            else{
                i++;
                mp[i]=a;
                cout<<a<<endl;
                p=1;
            }
        }
    }
}

