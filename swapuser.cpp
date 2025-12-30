//WAP to swap two numbers
#include <iostream>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a;
    cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<"after swap a is"<<a<<"\n";
    cout<<"after swap b is"<<b<<"\n";

}
//WAP to swap two numbers without using third variable
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap a is"<<a<<"\n";
    cout<<"after swap b is"<<b<<"\n";
}