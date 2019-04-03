#include<bits/stdc++.h>
using namespace std;

bool priority(char ch1, char ch2)
{
	int op1,op2;

	if(ch1=='^') op1 = 3;
	else if(ch1=='+' || ch1=='-') op1 = 1;
	else  op1 = 2;

	if(ch2=='^') op2 = 3;
	else if(ch2=='+' || ch2=='-') op2 = 1;
	else  op2 = 2;

	if(op1>=op2) return true;
	return false;
}

string infixToPostfix(string str)
{
	stack<char>s;
	string postfix ="";
	for(int i=0; i<str.size();i++)
    {
		if(isalpha(str[i])) postfix += str[i];
		else if(str[i]=='(') s.push(str[i]);
		else if(str[i]==')'){
			while(!s.empty() && s.top()!='('){
				postfix += s.top();
				s.pop();
			}
			s.pop();
		}
		else {
			if(!s.empty() && s.top()!='(' && priority(s.top(), str[i])){
				postfix += s.top();
				s.pop();
			}
			s.push(str[i]);
		}
	}
	while(!s.empty()){
        if(s.top()=='('||s.top()==')');
		else postfix += s.top();
        s.pop();
	}
	return postfix;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;
        str="("+str;
        cout<<infixToPostfix(str)<<endl;
    }
	return 0;
}

