//example for defining namespace
#include<iostream>
using namespace std;
namespace exspace
{
    int num;
    void display(int n)
       {
           cout<<n;
       }
}
int main()
{
    exspace:: num=100;
    exspace:: display(exspace::num);
}
