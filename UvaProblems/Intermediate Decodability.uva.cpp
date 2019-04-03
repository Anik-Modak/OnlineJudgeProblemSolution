//Anik Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[50];
    int i=0,cas=0;
    while(cin>>s[i])
    {
        if(s[i]=="9"){
                int ch=1;
                for(int j=0; j<i&&ch; j++)
                {
                    for(int k=j+1; k<i&&ch; k++)
                    {
                        string tmp;
                        tmp=s[j].substr(0, s[k].size());
                        if(tmp==s[k]) ch=0;
                        tmp=s[k].substr(0, s[j].size());
                        if(tmp==s[j]) ch=0;
                    }
                }
                if(ch) printf("Set %d is immediately decodable\n",++cas);
                else printf("Set %d is not immediately decodable\n",++cas);
                i=0;
        }
        else i++;
    }
}

