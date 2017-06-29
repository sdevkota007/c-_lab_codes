#include<iostream>
using namespace std;
class dist
{
    private:
       int meter;
       int centim;
    public:
       dist()  {}
       dist(int m,int cm)
           {
               meter=m;
               centim=cm;
           }
       operator float()
           {
               float fmeter;
               fmeter=meter+(static_cast<float>(centim)/100);
               return fmeter;
           }
       dist(float fmeter)
           {
               float temp=fmeter*100;
               meter=temp/100;
               centim=static_cast<int>(temp)%100;
           }
       void showdata()
           {
               cout<<"equals "<<meter<<"m "<<centim<<"cm"<<endl;
           }
};
int main()
{
   dist d1;
   int a,m,cm;
   float fmeter;
   cout<<"Choose Conversion:"<<endl;
   cout<<"1) meter,centi-meter to meter(float)"<<endl;
   cout<<"2) Meter(float) to meter,centi-meter"<<endl;
   cin>>a;
   if(a==1)
      {
        cout<<"Enter distance in meter and centimeter"<<endl;
        cin>>m>>cm;
        d1=dist(m,cm);
        fmeter=d1;
        cout<<"equals "<<fmeter<<" meters"<<endl;
      }
   else
      {
        cout<<"Enter distance in decimal value"<<endl;
        cin>>fmeter;
        d1=fmeter;
        d1.showdata();
      }
}
