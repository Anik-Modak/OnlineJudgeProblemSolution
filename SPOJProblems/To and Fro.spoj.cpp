//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n)
    {
        string str;
        cin>>str;

        int len = str.size();
        char tmp[len/n][n];

        for(int i=0; i<len; i++)
        {
            int id, m = i/n;

            if(i%n==0)
                id = 0;
            if(m%2==0)
            {
                tmp[m][id]=str[i];
                id++;
            }
            else
            {
                tmp[m][n-id-1]=str[i];
                //cout<<m<<n-id-1<<" "<<tmp[m][n-id-1]<<endl;
                id++;
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<len/n; j++)
                cout<<tmp[j][i];
        }
        cout<<endl;
    }
    return 0;
}
