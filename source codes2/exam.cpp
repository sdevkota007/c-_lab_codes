#include<iostream>
using namespace std;
class test
{
    private:
        string str1;
        string str2;
        string str3;
    public:
        test(){}
        test(string a,string b)
        {
            str1=a;
            str2=b;
            str3=str1+str2;
        }
        void showdata()
        {
            cout<<str3;
        }
};
int main()
{
    test* t1= new test("Hello"," World");
    t1->showdata();
}
