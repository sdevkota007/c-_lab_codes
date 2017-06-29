#include<iostream>
using namespace std;
class carpart
      {
          private:
                   int car_id;
                   int charge_per_hour;
                   float time;
          public:
                   void set_data(int n)
                       {
                           cout<<"Car no."<<n<<"Details";
                           cout<<endl<<"Car ID:";
                           cin>>car_id;
                           cout<<endl<<"Charge Per Hour:";
                           cin>>charge_per_hour;
                           cout<<endl<<"time";
                           cin>>time;
                       }
                    void show_data(int n)
                       {
                           cout<<endl<<n<<"\t"<<car_id<<"\t"<<time<<"\t"<<time*charge_per_hour;
                       }
      };

int main()
      {
          carpart c[20];
          int i,n;
          cout<<"Enter no.of Cars";
          cin>>n;
          for(i=1;i<=n;i++)
               {
                   c[i].set_data(i);
               }
          cout<<endl<<"Car no.\t"<<"Car ID\t"<<"Parked Hour\t"<<"Charge";
          for(i=1;i<=n;i++)
               {
                   c[i].show_data(i);
               }
      }
