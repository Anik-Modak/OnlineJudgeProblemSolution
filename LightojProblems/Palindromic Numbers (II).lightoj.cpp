#include<bits/stdc++.h>
using namespace std;

int rev(char c[]){
    int i,j,n=strlen(c);
    char c1[n];
    for(i=n-1,j=0;i>=0; j++,i--) c1[j]=c[i];
    c1[j]='\0';
    if(strcmp(c,c1)==0) return 1;
    else return 0;
}
int main()
{
    int t,i;
    cin>>t;
    char c[1000];
    for(i=1;i<=t;i++)
    {
        scanf("%s",c);
        if(rev(c)) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
}
