//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string a;
        cin>>a;

        int c=0, m = a.size();
        if(m%2)
            printf("NO\n");
        else
        {
            stack<char>s;
            for(int i=0; i<m; i++)
            {
                if(a[i]=='(' || a[i]=='[' || a[i]=='{')
                    s.push(a[i]);
                else if(a[i]==')')
                {
                    if(!s.empty() && s.top()== '(')
                        s.pop();
                    else
                        c=1;
                }
                else if(a[i]=='}')
                {
                    if(!s.empty() && s.top()== '{')
                        s.pop();
                    else
                        c=1;
                }
                else if(a[i]==']')
                {
                    if(!s.empty() && s.top()== '[')
                        s.pop();
                    else
                        c=1;
                }
            }
            if(c==1 || !s.empty())
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}
