#include<stdio.h>
int main()
{
int x,y;
l:scanf("%d%d",&x,&y);
if(x>0&&y>0){
    printf("primeiro\n");
    goto l;}
else if(x<0&&y>0){
    printf("segundo\n");
    goto l;}
else if(x<0&&y<0){
    printf("terceiro\n");
    goto l;}
else if(x>0&&y<0){
    printf("quarto\n");
    goto l;}
else if(x==0||y==0)
return 0;
}
