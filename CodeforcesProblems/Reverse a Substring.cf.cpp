//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int id = 0, x = 0, y = 0;
    for(int i=1; i<n; i++)
    {
        if(s[id] > s[i])
        {
            x = id+1;
            y = i+1;
            break;
        }
        else
            id = i;
    }

    if(x && y)
        cout<<"YES\n"<<x<<" "<<y<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

