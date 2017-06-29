#include<iostream>
using namespace std;
class testb;
class testa
    {
        private:
           int x,y,z;

        public:
           testa(int a=0,int b=0,int c=0)   //parameterized constructor
               {
                   x=a;  y=b;  z=c;
               }
           void getdata()
               {
                   cout<<"Enter the values of x,y,z coordinates";
                   cin>>x>>y>>z;
               }
           void showdata()
               {
                   cout<<x<<","<<y<<","<<z<<endl;
               }
           testa operator+(testa a)   //operator overloading defination
               {
                  return testa( x+a.x , y+a.y ,z+a.z );        //invokes parameterized constructor
               }
           friend testa operator-(testa m, testb n);       //friend function defination
    };
class testb
    {
        private:
            int p,q,r;
        public:
            testb(int a,int b,int c)  //parameterizrd constructor
               {
                   p=a;  q=b;  r=c;
               }
            friend testa operator-(testa m, testb n);       //friend function defination
    };

testa operator-(testa m,testb n)                 //defination of friend function
    {
       return testa( m.x-n.p , m.y-n.q , m.z-n.r );          //invokes parameterized constructor
    }

int main()
    {
        testa ta1,ta2,ta3,ta4;
        ta1.getdata();
        ta2.getdata();
        ta3=ta1+ta2;                      //equivalent to ta3=ta1.operator+(ta2);
        cout<<"Sum of the two cordinates is";
        ta3.showdata();
        testb tb1(2,3,4);
        ta4=ta1-tb1;                      // equivalent to ta4=operator-(ta1,tb1);
        cout<<"Difference of the two cordinates ta1 and tb1(2,3,4) is";
        ta4.showdata();
    }
