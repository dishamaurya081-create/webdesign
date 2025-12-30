//WAP to enter marks of three subjects find percntage if percentgae is greater than 60 print pass else fail
#include <iostream>
using namespace std;
int main()
{
    int x,y,z,percentage;
    cin>>x;
    cin>>y;
    cin>>z;
    percentage=((x+y+z)*100)/300;
    if(percentage>=60)
    {
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }
}