#include<iostream>
using namespace std;
class test
{
    private:
        static int count;
        int objnum;
    public:
        test()
        {
            count++;
            objnum=count;
        }
        static void getcount()
        {
            cout<<"count = "<<count<<endl;
        }
        void showdata()
        {
            cout<<"total number of objects created = "<<count<<endl;
            cout<<"Object number = "<<objnum<<endl;
        }
        ~test()
        {
            count--;
            cout<<"object remaining = "<<count<<endl;
        }

};
int test::count;
int main()
{
    test t1,t2;
    test::getcount();
    test::getcount();
    t1.showdata();
    t2.showdata();
    test t3;
    t3.showdata();
    t3.getcount();
}
