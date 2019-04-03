//Anik_<<Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a,ans1=0,ans2=0;
    vector<int> odd;
    vector<int> even;
    vector<int> temp;

    for(int i=1; i<=n/2; i++)
    {
        cin>>a;
        if(a%2) odd.push_back(a);
        else even.push_back(a);
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());

    temp=even;
    for(int i=1; i<n; i+=2)
    {
        int ch=1;
        for(int j=0; j<odd.size(); j++) if(odd[j]==i) ch=0;
        if(ch){
            ans1+=abs(i-even[0]);
            even.erase(even.begin());
        }
    }
    even=temp;
    for(int i=2; i<=n; i+=2)
    {
        int ch=1;
        for(int j=0; j<even.size(); j++) if(even[j]==i) ch=0;
        if(ch){
            ans2+=abs(i-odd[0]);
            odd.erase(odd.begin());
        }
    }
    cout<<min(ans1,ans2)<<endl;
}
