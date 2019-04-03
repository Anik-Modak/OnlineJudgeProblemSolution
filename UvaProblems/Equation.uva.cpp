//Anik_Modak
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n, i = 1 ;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n) ;
    getchar() ;

    char s[100000] ;
    char c ;

    scanf("%c",&c) ;
    getchar() ;
    if(c!='('&&c!=')')s[0] = c ;

    while(c!=10)
    {
        if(c!='('&&c!=')')
        {
            s[i] = c ;
            printf("%c %d\n",s[i], i) ;
            i++ ;
        }
        scanf("%c",&c) ;
        getchar() ;
    }
    s[i] = '\0' ;

    for(i=1 ; i<strlen(s) ; i+=2)
    {
        char temp ;
        temp = s[i] ;
        s[i] = s[i+1] ;
        s[i+1] = temp ;
    }
    printf("%s\n",s) ;
}
