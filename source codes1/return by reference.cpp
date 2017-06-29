#include<iostream>
using namespace std;
int &max(int &a,int &b);
int main()
{
    int x=2;
    int y=5;
    max(x,y)=100;
    cout<<x<<endl<<y;

}
int &max(int &a,int &b)
  {
      if(a>b)
        return a;
       else
       return b;
  }
