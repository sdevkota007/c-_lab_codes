#include<iostream>
using namespace std;
class complex3;         //forward declaration
class complex1          //defination of base class
{
    protected:
       float real,imag;
    public:
       void getnumber()
       {
           cout<<"For complex 1"<<endl;
           cout<<"Real part: "; cin>>real;
           cout<<"Imaginary part: "; cin>>imag;
       }
};
class complex2:public complex1  //defination of derived class
{
    private:
       float real,imag;
    public:
       void getnumber()
       {
           cout<<"For complex 2"<<endl;
           cout<<"Real part: "; cin>>real;
           cout<<"Imaginary part: "; cin>>imag;
       }
       void add()
       {
           cout<<"complex1 + complex2 = "
               <<real+complex1::real<<"+i"<<imag+complex1::imag<<endl;
       }
       friend void subtract(complex2 c2,complex3 c3);     //friend function declaration
};
class complex3
{
    private:
       float real3,imag3;
    public:
       void getnumber()
       {
           cout<<"For c3"<<endl;
           cout<<"Real part: "; cin>>real3;
           cout<<"Imaginary part: "; cin>>imag3;
       }
       friend void subtract(complex2 c2,complex3 c3);      //friend function declaration
};
//friend function defination begin
void subtract(complex2 c2,complex3 c3)
{
    cout<<"complex1-complex3 = "
        <<c2.complex1::real-c3.real3<<"+i"<<c2.complex1::imag-c3.imag3<<endl;
}
int main()
{
    complex2 c2;
    complex3 c3;
    c2.complex1::getnumber();
    c2.getnumber();
    c2.add();
    c3.getnumber();
    subtract(c2,c3);
    return 0;
}
