#include<iostream>
using namespace std;
template<class T>
class base
{
    private:
       T data;
    public:
        base(){}
        base(T a){data=a;}
        void display()
        {
            cout<<"data = "<<data<<endl;
        }
};
class derived1:public base<int>
{
    public:
        derived1(int a):base<int>(a){}
};
template<class T>
class derived2:public base<int>
{
    private:
       T data;
    public:
      derived2(int a,T b):base<int>(a),data(b){}
      void display()
      {
          base<int>::display();
          cout<<endl<<"data derived = "<<data;
      }

};
int main()
{
    derived1 d11(23);
    d11.display();
    derived2<float>d22(2,3.12);
    d22.display();
}
