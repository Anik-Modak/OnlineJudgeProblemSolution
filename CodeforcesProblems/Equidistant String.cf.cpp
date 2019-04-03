#include<bits/stdc++.h>
#define mn -1000000000000000005
using namespace std;

int main()
{
   string s,t;
   cin>>s>>t;
   int i,c=0;

   for(i=0; i<s.size(); i++) if(s[i]!=t[i]) c++;

   if(c%2) cout<<"impossible"<<endl;
   else{
        c/=2;
        for(i=0; i<s.size(); i++){
            if(s[i]==t[i]) printf("%c",s[i]);
            else{
                if(c){
                    printf("%c",s[i]);
                    c--;
                }
                else printf("%c",t[i]);
            }
        }
   }
   cout<<endl;
}




