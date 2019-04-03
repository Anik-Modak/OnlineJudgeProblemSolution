//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    vector<int> v = {a,b,c};
    sort(v.begin(),v.end());

    if(v[0]+v[1]<v[2])
        cout<<"Impossible"<<endl;
    else
    {
        int i = 0;
        while(i<=a)
        {
            v[0] = i;
            v[1] = b-i;
            v[2] = a-i;
            if(v[1]>=0 && v[1]+v[2] == c) break;
            i++;
        }
        if(i>a) cout<<"Impossible"<<endl;
        else cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    }
    return 0;
}
