#include<stdio.h>
#include<string.h>
int main()
{
    char s,c[1000];
    int i,n;
        scanf("%c",&s);
        getchar();
        gets(c);
        n=strlen(c);
        if(s=='R'){
            for(i=0;i<n;i++){
            if(c[i]==',') printf("m");
            else if(c[i]=='m') printf("n");
            else if(c[i]=='n') printf("b");
            else if(c[i]=='b') printf("v");
            else if(c[i]=='v') printf("c");
            else if(c[i]=='c') printf("x");
            else if(c[i]=='/') printf(".");
            else if(c[i]=='.') printf(",");
            else if(c[i]==';') printf("l");
            else if(c[i]=='\'') printf(";");
            else if(c[i]=='l') printf("k");
            else if(c[i]=='k') printf("j");
            else if(c[i]=='j') printf("h");
            else if(c[i]=='h') printf("g");
            else if(c[i]=='g') printf("f");
            else if(c[i]=='f') printf("d");
            else if(c[i]=='d') printf("s");
            else if(c[i]=='[') printf("p");
            else if(c[i]=='\\') printf("]");
            else if(c[i]==']') printf("[");
            else if(c[i]=='p') printf("o");
            else if(c[i]=='o') printf("i");
            else if(c[i]=='i') printf("u");
            else if(c[i]=='u') printf("y");
            else if(c[i]=='y') printf("t");
            else if(c[i]=='t') printf("r");
            else if(c[i]=='r') printf("e");
            else if(c[i]=='e') printf("w");
            else if(c[i]=='w') printf("q");
            else if(c[i]=='s') printf("a");
            else if(c[i]=='x') printf("z");
            else if(c[i]=='1') printf("`");
            else if(c[i]=='2') printf("1");
            else if(c[i]=='3') printf("2");
            else if(c[i]=='4') printf("3");
            else if(c[i]=='5') printf("4");
            else if(c[i]=='6') printf("5");
            else if(c[i]=='7') printf("6");
            else if(c[i]=='8') printf("7");
            else if(c[i]=='9') printf("8");
            else if(c[i]=='0') printf("9");
            else if(c[i]=='-') printf("0");
            else if(c[i]=='=') printf("-");
            else printf("%c",c[i]);
        }
    }
        if(s=='L'){
            for(i=0;i<n;i++){
            if(c[i]==',') printf(".");
            else if(c[i]=='m') printf(",");
            else if(c[i]=='n') printf("m");
            else if(c[i]=='b') printf("n");
            else if(c[i]=='v') printf("b");
            else if(c[i]=='c') printf("v");
            else if(c[i]=='x') printf("c");
            else if(c[i]=='z') printf("x");
            else if(c[i]=='.') printf("/");
            else if(c[i]==';') printf("'");
            else if(c[i]=='l') printf(";");
            else if(c[i]=='k') printf("l");
            else if(c[i]=='j') printf("k");
            else if(c[i]=='h') printf("j");
            else if(c[i]=='g') printf("h");
            else if(c[i]=='f') printf("g");
            else if(c[i]=='d') printf("f");
            else if(c[i]=='s') printf("d");
            else if(c[i]=='a') printf("s");
            else if(c[i]=='p') printf("[");
            else if(c[i]=='o') printf("p");
            else if(c[i]=='i') printf("o");
            else if(c[i]=='u') printf("i");
            else if(c[i]=='y') printf("u");
            else if(c[i]=='t') printf("y");
            else if(c[i]=='r') printf("t");
            else if(c[i]=='e') printf("r");
            else if(c[i]=='w') printf("e");
            else if(c[i]=='q') printf("w");
            else if(c[i]=='[') printf("]");
            else if(c[i]==']') printf("\\");
            else if(c[i]=='`') printf("1");
            else if(c[i]=='1') printf("2");
            else if(c[i]=='2') printf("3");
            else if(c[i]=='3') printf("4");
            else if(c[i]=='4') printf("5");
            else if(c[i]=='5') printf("6");
            else if(c[i]=='6') printf("7");
            else if(c[i]=='7') printf("8");
            else if(c[i]=='8') printf("9");
            else if(c[i]=='9') printf("0");
            else if(c[i]=='0') printf("-");
            else if(c[i]=='-') printf("=");
            else printf("%c",c[i]);
        }
    }
    printf("\n");
    return 0;
}


