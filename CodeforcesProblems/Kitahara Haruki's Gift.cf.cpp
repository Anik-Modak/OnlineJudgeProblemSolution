//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    int s1 = 0, s2 = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==100) s1++;
        else s2++;
    }

    if(s1%2==0)
    {
        if(s2%2==0 || (s2%2 && s1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}

