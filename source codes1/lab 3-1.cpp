//conversion between Celsius and farenheit
#include<iostream>
using namespace std;
class celsius
   {
       private:
          float cel, faren;

       public:
          void tofarenheit()
               {
                 cout<<"Enter Temperature in celsius";
                 cin>>cel;
                 faren= (1.8*cel)+32;
                 cout<<endl<<"="<<faren<<" F";
                }
   };
class farenheit
   {
       private:
          float cel,faren;

       public:
          void tocelsius()
                {
                   cout<<"Enter temperature in farenheit";
                   cin>>faren;
                   cel=(faren-32)/1.8;
                   cout<<endl<<"="<<cel<<" c";
                 }
   };

int main()
    {
        celsius c1;
        farenheit f1;
        int a;
        cout<<"Choose conversion type"<<endl<<"1) Celsius to Farenheit"<<endl<<"2) Farenheit to Celsius"<<endl;
        cin>>a;
        if(a==1)
            c1.tofarenheit();
        else if(a==2)
            f1.tocelsius();
        else
            cout<<"Error!!! Run the program again..You idiot!"<<endl;
     }
