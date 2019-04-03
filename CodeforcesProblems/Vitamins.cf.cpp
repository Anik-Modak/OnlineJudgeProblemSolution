//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cost;
    cin>>n;

    string s;
    int a, b, c, ab, bc, ca, abc;
    a = b = c = ab = bc = ca = abc = 300005;

    while(n--)
    {
        cin>>cost>>s;
        if(s == "A") a = min(a,cost);
        else if(s == "B") b = min(b,cost);
        else if(s == "C") c = min(c,cost);
        else if(s == "AB" || s == "BA") ab = min(ab,cost);
        else if(s == "BC" || s == "CB") bc = min(bc,cost);
        else if(s == "CA" || s == "AC") ca = min(ca,cost);
        else abc = min(abc,cost);
    }

    int ans[8] ={a+b+c, a+bc, b+ca, c+ab, ab+ca, ab+bc, bc+ca, abc};
    sort(ans,ans+8);

    if(ans[0] == 300005) cout<<-1<<endl;
    else cout<<ans[0]<<endl;
}

