#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=8,w1=0,w2=0;
    string a;
    while(n--){
        cin>>a;
        for(i=0;i<8;i++){
            if(a[i]>='a'){
                if(a[i]=='q') w1=w1+9;
                if(a[i]=='r') w1=w1+5;
                if(a[i]=='b') w1=w1+3;
                if(a[i]=='k') w1=w1+3;
                if(a[i]=='p') w1=w1+1;
                if(a[i]=='k') w1=w1+1;
            }
            else{
                if(a[i]=='Q') w2=w2+9;
                if(a[i]=='R') w2=w2+5;
                if(a[i]=='B') w2=w2+3;
                if(a[i]=='K') w2=w2+3;
                if(a[i]=='P') w2=w2+1;
                if(a[i]=='K') w2=w2+1;
            }
        }
    }
    if(w2>w1)cout<<"White"<<endl;
    else if(w2<w1) cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;
}


