//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    int t;
    faster();
    cin>>t;

    while(t--)
    {
        string str, tmp;
        cin>>str;
        tmp = str;

        int len = str.size(), cnt = 0, mid = len/2;;
        for(int i=0; i<mid; i++)
        {
            if(str[i] != str[len-i-1])
                str[len-i-1] = str[i];
            if(tmp[i]=='9' && tmp[len-i-1]=='9')
                cnt += 2;

        }

        if(len%2 && tmp[mid]=='9')
            cnt++;

        if(len==cnt)
        {
            string ans = "1";
            ans.resize(cnt,'0');
            ans += '1';
            cout<<ans<<endl;
            continue;
        }

        if(tmp >= str)
        {
            if(len%2)
            {
                if(str[mid]=='9')
                    str[mid]='0';
                else
                {
                    str[mid] = str[mid] + 1;
                    mid = 0;
                }
            }
            for(int i=mid-1; i>=0; i--)
            {
                if(str[i]=='9' && str[len-i-1]=='9')
                {
                    str[i] = '0';
                    str[len-i-1] = '0';
                }
                else
                {
                    str[i] = str[i] + 1;
                    str[len-i-1] = str[len-i-1] + 1;
                    break;
                }
            }
            cout<<str<<endl;
        }
        else
            cout<<str<<endl;
    }
    return 0;
}
