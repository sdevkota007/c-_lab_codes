#include<iostream>
using namespace std;

class cart2;
class cart3;

class cart1
    {
       friend class cart3;
       private:
          int a,b,c;
       public:
          void getdata()
             {
                 cin>>a>>b>>c;
             }
          friend void add(cart1,cart2);     //friend functions declarations
          friend void sub(cart1,cart2);
          friend void mul(cart1,cart2);
          friend void div(cart1,cart2);
    };
class cart2
    {
       friend class cart3;
       private:
          int p,q,r;
       public:
          void getdata()
             {
                 cin>>p>>q>>r;
             }
          friend void add(cart1,cart2);     //friend function declarations
          friend void sub(cart1,cart2);
          friend void mul(cart1,cart2);
          friend void div(cart1,cart2);
    };

//friend functions definations
void add(cart1 c1, cart2 c2)
    {
     cout<<c1.a+c2.p<<","<<c1.b+c2.q<<","<<c1.c+c2.r<<endl;
    }
void sub(cart1 c1, cart2 c2)
    {
     cout<<c1.a-c2.p<<","<<c1.b-c2.q<<","<<c1.c-c2.r<<endl;
    }
void mul(cart1 c1, cart2 c2)
    {
     cout<<c1.a*c2.p<<","<<c1.b*c2.q<<","<<c1.c*c2.r<<endl;
    }
void div(cart1 c1, cart2 c2)
    {
     cout<<c1.a/c2.p<<","<<c1.b/c2.q<<","<<c1.c/c2.r<<endl;
    }

class cart3
    {
      public:
         void disp(cart1 m)    //displays coordinates of cart1
            {
                cout<<m.a<<","<<m.b<<","<<m.c<<endl;
            }
         void disp(cart2 n)    //displays coordinates of cart2
            {
                cout<<n.p<<","<<n.q<<","<<n.r<<endl;
            }
    };

int main()
    {
        cart1 c1;
        cart2 c2;
        cart3 c3;
        cout<<"Enter coordinates for cart1"<<endl;
        c1.getdata();
        cout<<"Enter coordinates for cart2"<<endl;
        c2.getdata();
        cout<<"Addition ";
        add(c1,c2);
        cout<<"Subtraction ";
        sub(c1,c2);
        cout<<"Multiplication ";
        mul(c1,c2);
        cout<<"Division ";
        div(c1,c2);
        c3.disp(c1);
        c3.disp(c2);
    }
