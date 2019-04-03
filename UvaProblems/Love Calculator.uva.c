//Anik_Modak
#include<stdio.h>
#include<string.h>

int fn(char c[100])
{
    int n,i,s=0;
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]>='a'&&c[i]<='z') n=c[i]-96;
        else if(c[i]>='A'&&c[i]<='Z') n=c[i]-64;
        else n=0;
        s=s+n;
    }
    return s;
}

int digit(int s)
{
    int i,n=0,a;
    i=10;
    while(s>0)
    {
        a=s%10;
        n=n+a;
        s=s/10;
    }
    if(n>9) digit(n);
    else return n;
}
int main()
{
    char c[100],c1[100];
    int n,m,s1,s2;
    double p;

    while(gets(c))
    {
        gets(c1);

        s1=fn(c);
        s2=fn(c1);

        n=digit(s1);
        m=digit(s2);

        if(n<m) p=((double)n/m)*100;
        else p=((double)m/n)*100;

        printf("%.2lf %%\n",p);
    }
    return 0;
}
