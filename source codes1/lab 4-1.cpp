//solution of lab report 4...no.1)
#include<iostream>
using namespace std;
class time
     {
        private:
           int hour,min,sec,day;
        public:
           time():hour(0),min(0),sec(0),day(0)  //default constructor
               {  }
           time(int x,int y,int z)       //parameterized constructor
              {
                  hour=x;
                  min=y;
                  sec=z;
              }
           time add(time t2)             //add function is created of return type 'time'
              {
                  time temp;
                  temp.hour=hour+t2.hour;
                  //here hour represents the hour data of object t1 because
                  //this function is called using code t1.add(t2)
                  temp.min=min+t2.min;
                  temp.sec=sec+t2.sec;
                  return temp;
              }
           void display()
              {
                  if(sec>59)
                     {
                       min=min+sec/60;
                       sec=sec%60;
                     }
                  if(min>59)
                     {
                       hour=hour+min/60;
                       min=min%60;
                     }
                  if(hour>23)
                     {
                       day=day+hour/24;
                       hour=hour%24;
                     }
                  cout<<endl<<"Time Format"<<endl<<"day:hour:min:secs"<<endl;
                  cout<<day<<":"<<hour<<":"<<min<<":"<<sec;
              }

     };
int main()
  {
      time t3;
      int h1,m1,s1;
      int h2,m2,s2;
      cout<<"Enter time1 in hr min and sec";
      cin>>h1>>m1>>s1;
      time t1(h1,m1,s1);
      cout<<"Enter time2 in hr min and sec";
      cin>>h2>>m2>>s2;
      time t2(h2,m2,s2);
      t3=t1.add(t2);
      t3.display();
  }
