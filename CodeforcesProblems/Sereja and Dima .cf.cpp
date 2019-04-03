#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,n;
    cin>>n;
    int a,m;
    vector<int>v;
    for(i=1;i<=n;i++){
        cin>>a;
        v.push_back(a);
    }
    long long s1=0,s2=0;
    i=1;
    while(v.size()){
        m=v.size()-1;
        if(i%2){
            if(v[m]>v[0]) {
                s1+=v[m];
                v.erase(v.begin()+m);
            }
            else{
                s1+=v[0];
                v.erase(v.begin()+0);
            }
        }
        else{
            if(v[m]>v[0]) {
                s2+=v[m];
                v.erase(v.begin()+m);
            }
            else{
                s2+=v[0];
                v.erase(v.begin()+0);
            }
        }
        i++;
    }
    cout<<s1<<" "<<s2<<endl;
}






