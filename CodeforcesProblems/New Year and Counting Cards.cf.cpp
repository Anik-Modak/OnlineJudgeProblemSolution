#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0;
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]>96&&a[i]<123){
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') c++;
        }
        else{
            n=a[i]-'0';
            if(n%2==1) c++;
        }
    }
    cout<<c<<endl;
}

