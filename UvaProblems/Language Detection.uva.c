#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int c=1,i,j;
    while(1){
        scanf("%s",s);
        if(strcmp(s,"#")==0) break;
        else if(strcmp(s,"HELLO")==0) printf("Case %d: ENGLISH\n",c);
        else if(strcmp(s,"HOLA")==0) printf("Case %d: SPANISH\n",c);
        else if(strcmp(s,"HALLO")==0) printf("Case %d: GERMAN\n",c);
        else if(strcmp(s,"BONJOUR")==0) printf("Case %d: FRENCH\n",c);
        else if(strcmp(s,"CIAO")==0) printf("Case %d: ITALIAN\n",c);
        else if(strcmp(s,"ZDRAVSTVUJTE")==0) printf("Case %d: RUSSIAN\n",c);
        else printf("Case %d: UNKNOWN\n",c);
        c++;
    }
    return 0;
}
