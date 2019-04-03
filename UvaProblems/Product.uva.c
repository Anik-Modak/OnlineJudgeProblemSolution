#include<stdio.h>
#include<string.h>
void multiply(char s1[],char s2[],char ans[]){
	int c1,c2;
	int i,j,temp,carry;
	c1=strlen(s1);
	c2=strlen(s2);
	for(i=0;i<c1+c2;i++)
		ans[i]='0';
	ans[i]='\0';
	for(i=c1-1;i>=0;i--){
        carry=0;
		for(j=c2-1;j>=0;j--){
			temp=(s1[i]-'0')*(s2[j]-'0')+ans[i+j+1]-'0'+carry;
			carry=temp/10;
			ans[i+j+1]=(temp%10)+'0';
		}
		ans[i]=carry+'0';
	}
    if(ans[0]==0)
        for(i=0;ans[i]!='\0';i++)
            ans[i]=ans[i+1];
}
int main(){
	char s1[100000],s2[100000],ans[100000];
	while(gets(s1)&&gets(s2)!=EOF){
		multiply(s1,s2,ans);
		printf("%s\n",ans);
	}
	return 0;
}
