//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string d[] = {"Danil","Olya","Slava","Ann","Nikita"} ;
    int ls, ld, i, l, j, k, m, cnt = 0;

    string s;
    cin>>s;

    for(j=0; j<5; j++)
    {
        ld = d[j].size();

        for(i = 0; i<s.size(); i=m)
        {
            l=0;
            m=i;
            for(k = 0; k<ld; k++)
            {
                if(s[m] == d[j][k])
                {
                    l++;
                    m++;
                }
            }
            if(m==i) m++;
            if(l == ld)
                cnt++;
        }
    }
    if(cnt == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

