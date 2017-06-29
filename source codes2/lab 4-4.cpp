#include<iostream>
using namespace std;
class detail
   {
       private:
           int num_vehicle;
           int hour;
           int rate;
           int charge;
       public:
           detail()                       //default constructor
               { }
           detail(int n,int h,int r)      //parameterized constructor
               {
                   num_vehicle=n;
                   hour=h;
                   rate=r;
               }
           void get_charge()
               {
                   charge=hour*rate;
                   if(num_vehicle>10)
                        {
                            charge=charge-(0.1*charge);
                        }
               }
           detail( detail & a)               //copy constructor defined
               {
                   num_vehicle=a.num_vehicle;
                   hour=a.hour;
                   rate=a.rate;
               }
           void show_data()
               {
                   cout<<"Num of Vehicle : "<<num_vehicle<<endl;
                   cout<<"Hour : "<<hour<<endl;
                   cout<<"Rate : "<<rate<<endl;
                   if(num_vehicle>10)
                        cout<<"Discount allowed 10%"<<endl;
                   cout<<"Total charge : "<<charge<<endl;
               }
   };

   int main()
      {
          detail d1;                 //object d1 is created and default constructor is called
          int n,h,r;
          cout<<"Enter no. of vehicle, hour and rate : "<<endl;
          cin>>n>>h>>r;
          d1=detail(n,h,r);          //parameterized constructor called
          d1.get_charge();
          detail d2(d1);             //copy constructor called
          d1.show_data();
          d2.get_charge();
          d2.show_data();
      }
