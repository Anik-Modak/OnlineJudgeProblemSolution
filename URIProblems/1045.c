#include<stdio.h>
int main()
{
double A,B,C,a,b,c;
scanf("%lf%lf%lf",&A,&B,&C);
if(A>B&&B>=C){
    a=A;
    b=B;
    c=C;}
else if(B>C){
    a=B;
    b=A;
    c=C;}
else{
    a=C;
    b=B;
    c=A;}
if(a>=b+c)
    printf("NAO FORMA TRIANGULO\n");
else{
    if(a*a==b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
    if(a*a>b*b+c*c)
        printf("TRIANGULO OBTUSANGULO\n");
    if(a*a<b*b+c*c)
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b&&b==c)
        printf("TRIANGULO EQUILATERO\n");
    if((a==b&&b!=c)||(c==b&&b!=a)||(a==c&&b!=c))
        printf("TRIANGULO ISOSCELES\n");
    }
return 0;
}
