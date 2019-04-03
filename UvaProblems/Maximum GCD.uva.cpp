#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int n,m;
    cin>>n;
    getchar();
    while(n--){
        string word;
        getline(cin, word);
        stringstream s(word);
        int c,j,i=1,mx=0,a[105];
        while(s>>word)
        {
            if(!(istringstream(word)>>c)) c=0;
            a[i++]=c;
        }
        m=i-1;
        i=1;
        while(i<=m){
            for(j=i+1;j<=m;j++){
                c=gcd(a[i],a[j]);
                if(mx<c) mx=c;
            }
            i++;
        }
        cout<<mx<<endl;
    }
}
