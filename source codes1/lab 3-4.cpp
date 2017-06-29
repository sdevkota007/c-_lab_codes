#include<iostream>
using namespace std;
class rectangle
   {
       private:
           int l,b;
           float peri,area;
       public:
           void read()
               {
                   cout<<"ENter Length and breadth";
                   cin>>l>>b;
               }
           void show()
               {
                   cout<<"Length= "<<l<<endl<<"Breadth= "<<b<<endl<<"perimeter= "<<peri<<endl<<"Area= "<<area<<endl;
               }
           void perimeter()
               {
                   peri=2*(l+b);
               }
           float area()
               {
                   area=l*b;
               }

   };

int main()
    {
     rectangle r;
     r.read();
     r.perimeter();
     r.show();
     r.area();
    }
