//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int len = s.size(), cnt = 0;
    int arr[len] = {0}, n;

    for(int i=1; i<len; i++)
    {
        if(s[i]==s[i-1]) cnt++;
        arr[i] = cnt;
    }

    cin>>n;
    while(n--)
    {
        int a, b;
        cin>>a>>b;
        cout<<arr[b-1]-arr[a-1]<<endl;
    }
    return 0;
}
