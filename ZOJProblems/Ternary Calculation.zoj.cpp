//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int pre(char ch)
{
    if(ch=='*' || ch=='/' || ch=='%')
        return 2;
    return 1;
}

int calculation(int a, int b,char ch)
{
    if(ch == '%')
        return a%b;
    if(ch == '+')
        return a+b;
    if(ch=='-')
        return a-b;
    if(ch=='*')
        return a*b;
    if(ch=='/')
        return a/b;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n1, n2, n3, ans;
        char o1, o2;
        cin>>n1>>o1>>n2>>o2>>n3;

        int d1 = pre(o1), d2 = pre(o2);
        if(d1>=d2)
        {
            ans = calculation(n1,n2,o1);
            ans = calculation(ans,n3,o2);
        }
        else
        {
            ans = calculation(n2,n3,o2);
            ans = calculation(n1,ans,o1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
