#include<iostream>
using namespace std;
class test
{
    int a;int b;
    public:
       test()
         {
             cout<<"constructor"<<endl;
         }
       test(int x,int y)
         {
             a=x;
             b=y;
         }

       void showdata()
         {
             cout<<endl<<a<<endl<<b;
         }
      ~test()
         {
             cout<<endl<<"destructor"<<endl;
         }
};
int main()
{
    test t1(1,2),t2;
    cout<<"enter two values";
    int p,q;
    cin>>p>>q;
    t2=test(p,q);
    t1.showdata();
    t2.showdata();
    test t3(t2);
    t3.showdata();
    cout<<"terminating";
    test *t5;
    test t6;
    t5=&t6;
    t6=test(6,7);
    t5->showdata();
}
