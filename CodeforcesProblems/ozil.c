#include <stdio.h>

int main(){
int n1,n2,t=0,temp;
scanf("%d%d",&n1,&n2);

if(n1<n2)
temp=1;
else temp=0;

while (n1>0&&n2>0){
if(n1==1&&n2==1)
break;

if (temp==1){
n1+=1;
n2-=2;

if (n2<3)
temp=0;
}

else{
n2+=1;
n1-=2;

if(n1<3)
temp=1;
}
t++;
}

	printf("%d\n",t);
	return 0;
}
