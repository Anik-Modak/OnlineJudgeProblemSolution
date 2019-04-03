#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    int n,m,i,x;
    for(ca=1;ca<=t;ca++)
    {
        cin>>n>>m;
        string a;
        deque<int>q;
        cout<<"Case "<<ca<<":"<<endl;
        for(i=1;i<=m;i++)
        {
            cin>>a;
            if(a=="pushRight"){
                cin>>x;
                if((q.size())==n) cout<<"The queue is full"<<endl;
                else{
                    cout<<"Pushed in right: "<<x<<endl;
                    q.push_back(x);
                }
            }
            if(a=="pushLeft"){
                cin>>x;
                if(q.size()==n) cout<<"The queue is full"<<endl;
                else{
                    cout<<"Pushed in left: "<<x<<endl;
                    q.push_front(x);
                }
            }
            if(a=="popLeft"){
                if(q.size()==0) cout<<"The queue is empty"<<endl;
                else{
                    cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }
            }
            if(a=="popRight"){
                if(q.size()==0) cout<<"The queue is empty"<<endl;
                else{
                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
            }
        }
    }
}
