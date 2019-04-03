//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  cin>>a;

  int val = -3, pre = 0;
  while((val = a.find("WUB",val+3))!=-1)
  {
      if(val-pre) cout<<a.substr(pre,val-pre)<<" ";
      pre = val+3;
  }
  if(val-pre) cout<<a.substr(pre,val-pre)<<" ";
  cout<<endl;
}



