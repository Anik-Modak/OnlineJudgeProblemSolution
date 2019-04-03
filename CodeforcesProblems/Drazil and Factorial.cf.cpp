#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m;
    string a;
    cin>>n;
    cin>>a;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        m=a[i]-'0';
        if(m==2||m==3||m==7||m==5) v.push_back(m);
        else if(m==4){
                v.push_back(3);
                v.push_back(2);
                v.push_back(2);
        }
        else if(m==6){
            v.push_back(5);
            v.push_back(3);
        }
        else if(m==8){
            v.push_back(7);
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
        }
        else if(m==9){
            v.push_back(7);
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
        }
    }
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--) cout<<v[i];
    cout<<endl;
}
