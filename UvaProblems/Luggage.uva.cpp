//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
int ans, half;

void subset(int i, int sum)
{
    if(sum==half)
    {
        ans = 1;
        return;
    }
    if(i==arr.size())
        return;

    subset(i+1, sum);
    subset(i+1, sum+arr[i]);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    scanf("%d ",&n);

    while(n--)
    {
        char ch;
        int b, total = 0;

        while(scanf("%d%c",&b,&ch)==2)
        {
            total += b;
            arr.push_back(b);
            if(ch != ' ') break;
        }

        if(total%2)
            cout<<"NO"<<endl;
        else
        {
            ans = 0;
            half = total/2;
            subset(0,0);

            if(ans)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        arr.clear();
    }
    return 0;
}
