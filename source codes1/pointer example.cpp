//example of pass by reference
#include<iostream>
using namespace std;
int swap(int &x, int &y);

int main()
{
    int a=5;
    int b=6;
    swap(a,b);
    cout<<a<<endl<<b;
}
int swap(int &x, int &y)
  {
      int temp;
      temp=x;
      x=y;
      y=temp;
  }
