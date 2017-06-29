#include<iostream>
using namespace std;

class FPS
   {
       private:
         int feet,inch;
       public:
         FPS():feet(0),inch(0) {}
         FPS(int f,int i)
           {
               feet=f;
               inch=i;
           }
        void getdata()
           {
               cout<<endl<<"Enter distance in feets and inches"<<endl;
               cin>>feet>>inch;
           }
         int get_feet()
           {return feet;}
         int get_inch()
           {return inch;}
         void showdata()
           {
               cout<<"equals "<<feet<<"ft. "<<inch<<"in.";
           }
   };
class SI
   {
       private:
         int meter,centim;
       public:
         SI():meter(0),centim(0) {}
         void getdata()
           {
               cout<<endl<<"Enter distance in meter and centimeter"<<endl;
               cin>>meter>>centim;
           }
         operator FPS()
           {
               float temp=(meter*100+centim)*0.3937;
               int feet=temp/12;
               int inch=static_cast<int>(temp)%12;
               return FPS(feet,inch);
           }
         SI(FPS f1)
           {
               float temp=(f1.get_feet()*12+f1.get_inch())*2.54;
               meter=temp/100;
               centim=static_cast<int>(temp)%100;
           }
         void showdata()
           {
               cout<<"equals "<<meter<<"m. "<<centim<<"cm.";
           }
   };
int main()
{
    SI s1;
    FPS f1;
    s1.getdata();
    f1=s1;
    f1.showdata();
    f1.getdata();
    s1=f1;
    s1.showdata();
    return 0;
}
