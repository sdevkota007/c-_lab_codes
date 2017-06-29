#include<iostream>
using namespace std;
class test
   {
       private:
           int x;
       public:
           void getdata()
              {
                  cout<<"Enter value";
                  cin>>x;
              }

           int operator==(test a)  //operator == overloading defination
              {
                  if(x==a.x)
                     return true;
                  else
                     return false;
              }
           int operator>(test a)  //operator > overloading defination
              {
                  if(x>a.x)
                     return true;
                  else
                     return false;
              }
           int operator<(test a)
              {
                  if(x<a.x)
                     return true;
                  else
                     return false;
              }
           bool operator!=(test a)  //operator != overloading defination
              {
                  if(x!=a.x)
                     return true;
                  else
                     return false;
              }
           bool operator>=(test a)  //operator >= overloading defination
              {
                  if(x>=a.x)
                     return true;
                  else
                     return false;
              }
           bool operator<=(test a)
              {
                  if(x<=a.x)
                     return true;
                  else
                     return false;
              }

   };

int main()
   {
     test t1,t2;
     t1.getdata();
     t2.getdata();
     if(t1==t2)
            cout<<"t1 is equal to t2"<<endl;
     if(t1>t2)
            cout<<"t1 is greater than t2"<<endl;
     if(t1<t2)
            cout<<"t1 is less than t2"<<endl;
     if(t1!=t2)
            cout<<"t1 is not equal to t2"<<endl;
     if(t1>=t2)
            cout<<"t1 is greater than or equal to t2"<<endl;
     if(t1<=t2)
            cout<<"t1 is less than or equal to t2"<<endl;

   }
