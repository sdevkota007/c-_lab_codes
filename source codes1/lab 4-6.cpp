#include<iostream>
using namespace std;
class example
     {
         private:
             static int num;       //Static Data Declaration
             int snum;
         public:
             example()
                {
                    num++;
                    snum=num;
                }
             int getnum()
                {
                    return num;
                }
             int getsnum()
                {
                    return snum;
                }
             void show()
                {
                    cout<<"Static data (num) = "<<num<<endl;
                    cout<<"serial number (snum) = "<<snum<<endl;
                }
     };
int example::num=0;                 //Static Data Defination
int main()
     {
         example e1;                //Default constructor is called once
         e1.show();
         example e2,e3;             //Default constructor is called twice
         e2.show();
         e3.show();
         cout<<"Static data (num) for e1= "<<e1.getnum()<<endl;
         cout<<"Static data (num) for e2= "<<e2.getnum()<<endl;
         cout<<"Static data (num) for e3= "<<e3.getnum()<<endl;
         cout<<"Serial number (snum) for e1= "<<e1.getsnum()<<endl;
         cout<<"Serial number (snum) for e2= "<<e2.getsnum()<<endl;
         cout<<"Serial number (snum) for e2= "<<e3.getsnum()<<endl;
     }
