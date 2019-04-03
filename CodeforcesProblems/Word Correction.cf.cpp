#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string a;
    cin>>n>>a;
    for(i=1;i<a.size();i++){
        while((a[i-1]=='a'||a[i-1]=='e'||a[i-1]=='i'||a[i-1]=='o'||a[i-1]=='u'||a[i-1]=='y')&&(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')){
            a.erase(i,1);
        }
    }
    cout<<a<<endl;
}

