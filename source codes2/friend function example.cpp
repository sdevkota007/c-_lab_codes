#include<iostream>
using namespace std;
class B;
class A
{
    private:
       char passA[20];
    public:
        void getpass()
        {
            cout<<"Enter password of A";
            cin>>passA;
        }
        void showpassA(B b);
        //{
        //    cout<<"password of B is"<<b.passB;
        //}
        //friend class B;
};
class B
{
    private:
        char passB[20];
    public:
        void getpass()
        {
            cout<<"Enter password of B";
            cin>>passB;
        }
        friend class A;
        //void showpassB()
};
void A::showpassA(B b)
        {
            cout<<"password of B is"<<b.passB;
        }
int main()
{
    A a;
    B b;
    a.getpass();
    b.getpass();
    a.showpassA(b);

}
