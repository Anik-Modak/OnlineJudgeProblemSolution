#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d,t,ans=0,i,j,ar[10000],l=0,p=0,mx=0;
    cin>>n>>d;
    for(i=0;i<d;i++ ){
        string s;
        cin>>s;
        t=0;
        for(j=0;j<n;j++) if(s[j]=='1') t++;
        if(n!=t){ ans++; p=1;}
        else if(p&&n==t){
            if(mx<ans)mx=ans;
            ar[l]=ans;
            ans=0;
            l++;
        }
        if(mx< ans)mx=ans;
    }

    cout<< mx <<endl;
    return 0;
}
