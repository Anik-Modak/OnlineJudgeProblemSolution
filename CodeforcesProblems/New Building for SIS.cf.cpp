//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, a, b, k;
    cin>>n>>h>>a>>b>>k;

    while(k--)
    {
        long long fa, fb, ta, tb, x, ans;
        cin>>ta>>fa>>tb>>fb;

        if(ta == tb) ans = abs(fa-fb);
        else
        {
            ans = abs(ta-tb);
            if((fa<a||fa>b)&& (fb<a||fb>b)) ans+=min(abs(fa-a)+abs(fb-a), abs(fa-b)+abs(fb-b));
            else ans+=abs(fa-fb);
        }
        cout<<ans<<endl;
    }
}
