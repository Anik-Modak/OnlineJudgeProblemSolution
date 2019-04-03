#include<stdio.h>
int main(){
   int p2,p3,p5,a,b,c,i;
   int ugly[1500];
   ugly[1]=p2=p3=p5=1;

   for(i=2;i<=1500;i++)
    {
        a=2*(ugly[p2]);
        b=3*(ugly[p3]);
        c=5*(ugly[p5]);
        if(a<b&&a<c){
            ugly[i]=a;
            p2++;
        }
        else if(b<a && b<c){
            ugly[i]=b;
            p3++;
        }
        else if(c<a && c<b){
            ugly[i]=c;
            p5++;
        }
        else if(a==b){
            p3++;
            i--;
        }
        else if(a==c){
            p5++;
            i--;
        }
        else if(b==c){
            p5++;
            i--;
        }
  }
  printf("The 1500'th ugly number is %d.\n",ugly[1500]);
  return 0;
}
