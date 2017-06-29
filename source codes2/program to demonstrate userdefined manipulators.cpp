//progam to demonstrate user defined manipulator
#include<iostream>
using namespace std;
ostream& tb(ostream& os)
{
    os<<"\t"<<flush;
    return os;
}
int main()
{
    int a=1, b=2, c=3, d=4;
    cout<<a<<tb<<b<<tb<<c<<tb<<d<<endl;
    return 0;
}
