#include<iostream>
using namespace std;

class calculation{
        int a,b;
    public:
        calculation(){};
        calculation(int i,int j){
            a=i;
            b=j;
        };
        friend calculation operator+(calculation ob1, calculation ob2);
        friend calculation operator-(calculation ob1, calculation ob2);
        friend calculation operator*(calculation ob1, calculation ob2);
        friend calculation operator/(calculation ob1, calculation ob2);
        friend calculation operator++(calculation &ob);
        friend calculation operator--(calculation &ob);
        void show(){
            cout<<a<<" "<<b<<endl;
        };
};
calculation operator+(calculation ob1, calculation ob2)
{
    calculation tm;
    tm.a=ob1.a+ob2.a;
    tm.b=ob1.b+ob2.b;
    return tm;
}
calculation operator-(calculation ob1, calculation ob2)
{
    calculation tm;
    tm.a=ob1.a-ob2.a;
    tm.b=ob1.b-ob2.b;
    return tm;
}
calculation operator*(calculation ob1, calculation ob2)
{
    calculation tm;
    tm.a=ob1.a*ob2.a;
    tm.b=ob1.b*ob2.b;
    return tm;
}
calculation operator/(calculation ob1, calculation ob2)
{
    calculation tm;
    tm.a=ob1.a/ob2.a;
    tm.b=ob1.b/ob2.b;
    return tm;
}
calculation operator++(calculation &ob)
{
    ob.a++;
    ob.b++;
}
calculation operator--(calculation &ob)
{
    ob.a--;
    ob.b--;
}
int main()
{
    calculation ob1(40,50),ob2(10,20),ans;
    ans=ob1+ob2;
    ans.show();
    ans=ob1-ob2;
    ans.show();
    ans=ob1*ob2;
    ans.show();
    ans=ob1/ob2;
    ans.show();
    ++ob1;
    ans=ob1;
    ans.show();
    --ob2;
    ans=ob2;
    ans.show();
}
