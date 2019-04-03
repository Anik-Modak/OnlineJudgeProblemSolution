//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int c=0;
    if(k<=n-2||k%2==0)
    {
        cout<<"YES"<<endl;
        for(int i=1; i<=4; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==1||i==4||j==1||j==n){
                    cout<<'.'; continue;
                }
                else{
                    if(k%2){
                        if(c<k){
                            cout<<'#';
                            c++;
                        }
                        else cout<<'.';
                    }
                    else{
                        if(i==2&&c<k)
                        {
                            cout<<'#';
                            c++;
                        }
                        else cout<<'.';
                    }
                }
            }
            cout<<endl;
        }
    }
    else cout<<"NO"<<endl;
}

