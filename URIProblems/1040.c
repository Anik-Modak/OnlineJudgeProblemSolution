#include<stdio.h>
int main()
{
double a,b,c,d,e,s,avg;
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
avg=(2*a+3*b+4*c+1*d)/10;
printf("Media: %.1lf\n",avg);
if(avg>=7)
    printf("Aluno aprovado.\n");
else if(avg<5)
    printf("Aluno reprovado.\n");
else if(5<=avg&&avg<=6.9){
    printf("Aluno em exame.\n");
    scanf("%lf",&e);
    printf("Nota do exame: %.1lf\n",e);
    s=(avg+e)/2;
    if(s>=5)
        printf("Aluno aprovado.\n");
    else if(s<=4.9)
        printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n",s);
    }
 return 0;
}
