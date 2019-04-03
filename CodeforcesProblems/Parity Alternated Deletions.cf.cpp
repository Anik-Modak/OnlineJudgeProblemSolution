//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    vector<int>v1, v2;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a%2)
            v1.push_back(a);
        else
            v2.push_back(a);
    }

    int len1 = v1.size(), len2 = v2.size();
    if(abs(v1.size()-v2.size())>1)
    {
        long long sum = 0;
        if(len1>len2)
        {
            sort(v1.begin(),v1.end());
            for(int i=0; i<len1-len2-1; i++)
                sum += v1[i];
        }
        else
        {
            sort(v2.begin(),v2.end());
            for(int i=0; i<len2-len1-1; i++)
                sum += v2[i];
        }
        cout<<sum<<endl;
    }
    else
        cout<<0<<endl;
}
