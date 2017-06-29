#include<iostream>
using namespace std;
class time
   {
       private:
           int hr,min,sec;
       public:
           void getdata()
              {
                  cout<<"Hour";   cin>>hr;
                  cout<<"Min";    cin>>min;
                  cout<<"Sec";    cin>>sec;
              }

           int operator==(time a)
              {
                  if(hr==a.hr && min==a.min && sec==a.sec)
                     return true;
                  else
                     return false;
              }
           int operator>(time a)
              {
                  if(hr>a.hr)
                     return true;
                  else if(hr==a.hr && min>a.min)
                     return true;
                  else if(hr==a.hr && min==a.min && sec>a.sec)
                     return true;
                  else
                     return false;
              }
           int operator<(time a)
              {
                  if(hr<a.hr)
                     return true;
                  else if(hr==a.hr && min<a.min)
                     return true;
                  else if(hr==a.hr && min==a.min && sec<a.sec)
                     return true;
                  else
                     return false;
              }
           bool operator!=(time a)
              {
                  if(hr!=a.hr || min!=a.min || sec!=a.sec)
                     return true;
                  else
                     return false;
              }
           bool operator>=(time a)
              {
                  if(hr>a.hr || (hr==a.hr && min>a.min) || (hr==a.hr && min==a.min && sec>=a.sec))
                     return true;
                  else
                     return false;
              }
           bool operator<=(time b)
              {
                  if(hr<b.hr || (hr==b.hr && min<b.min) || (hr==b.hr && min==b.min && sec<=b.sec))
                     return true;
                  else
                     return false;
              }

   };

int main()
   {
     time t1,t2;
     cout<<"Enter time t1:"<<endl;
     t1.getdata();
     cout<<"Enter time t2:"<<endl;
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
