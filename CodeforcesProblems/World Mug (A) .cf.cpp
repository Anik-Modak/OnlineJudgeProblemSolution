//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    queue<int>q;
    long long a[n],id1,id2, ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        q.push(i);
    }

    while(q.size()!=1)
    {
        id1=q.front(), q.pop();
        id2=q.front(), q.pop();

        ans+=abs(a[id1]-a[id2]);
        if(a[id1]>a[id2]) q.push(id1);
        else q.push(id2);
    }
    cout<<ans<<endl;
}
