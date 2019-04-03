#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  string s;
  cin>>s;

  int mx=0,c,id;

  string sub[n];
  for(int i=0; i<n-1; i++)
  {
      char b[3];
      b[0]=s[i];
      b[1]=s[i+1];
      b[2]='\0';
      sub[i]=b;
  }
  for(int i=0; i<n-1; i++)
  {
      c=0;
      for(int j=i; j<n-1; j++) if(sub[i]==sub[j]) c++;
      if(mx<c){
        mx=c;
        id=i;
      }
  }
  cout<<sub[id]<<endl;
  return 0;
}



