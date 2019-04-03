//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;
map<string,int>level;

int bfs(string source, string stop)
{
    queue <string> vc;
    vc.push(source);
    level[source]=0;

    while(!vc.empty())
    {
        string s=vc.front();
        vc.pop();

        for(int i=0; i<s.size(); i++)
        {
            for(char j='a'; j<='z'; j++)
            {
                string str = s;
                str[i]=j;

                if(mp.find(str)!=mp.end()&&level.count(str)==0)
                {
                    vc.push(str);
                    level[str]=level[s]+1;
                    if(str==stop) return level[str];
                }
            }
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cas=0;
    cin>>n;

    while(n--)
    {
        if(cas) cout<<endl;

        string s;
        while(cin>>s)
        {
            if(s=="*") break;
            mp[s]=1;
        }

        string str;
        cin.ignore();

        while(getline(cin,str))
        {
            if(str == "\0") break;

            stringstream ss(str);
            string start, ends;
            ss>>start;
            ss>>ends;

            level.clear();
            cout<<start<<" "<<ends<<" "<<bfs(start,ends)<<endl;
        }

        cas++;
        mp.clear();
    }
}
