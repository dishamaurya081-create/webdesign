//WAP to find if a number is even or odd
#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    y=x%2;
    if(y==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}