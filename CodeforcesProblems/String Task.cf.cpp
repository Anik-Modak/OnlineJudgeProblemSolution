//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;

    transform(s1.begin(), s1.end(), s1.begin(),::tolower);

    for(int i=0; i<s1.size(); i++)
        if (!(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='y')) s2+=s1[i];

    for(int i=0; i<s2.size(); i++)
        cout<<"."<<s2[i];
    cout<<endl;
}
