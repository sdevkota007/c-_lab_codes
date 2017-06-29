#include<iostream>
using namespace std;
class test
{
    public:
        mutable int data;
    public:
        test(){}
        test(int a):data(a){}
        void showdata()const
        {
            cout<<"data = "<<data<<endl;
        }
        void changedata(int x)const
        {
            data=x;
        }
};
int main()
{
    test t1(2);
    const test t2(4);
    t1.showdata();
    t2.showdata();
    t1.changedata(5);
    t2.changedata(6);  //shows error ; constant object cannot call non constant function
    t1.showdata();
    t2.showdata();
}
