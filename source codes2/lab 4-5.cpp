#include<iostream>
using namespace std;
class example
    {
        private:
            int data;
        public:
            example(int n)
                {
                   data=n;
                }
            void setdata(int n)
                {
                    data=n;
                    cout<<"data ="<<data<<endl;
                }
            void getdata() const           //constant function
                {
                    cout<<"data ="<<data<<endl;
                }
    };
int main()
    {
        example e1(1);
        const example e2(2);               //constant object created
        e1.setdata(5);        //OK ; non-constant object can call non-constant function
        e1.getdata();         //OK ; non-constant object can call constant function
        e2.setdata(10);       //error; constant object cannot call non constant function
        e2.getdata();         //OK ; constant object can call constant function

    }
