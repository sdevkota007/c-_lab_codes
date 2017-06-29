#include<iostream>
using namespace std;
class counter
{
    private:
        int count;
    public:
        counter():count(0){}
        void showcount()
        {
            cout<<endl<<"count = "<<count;
        }
        counter operator++()
        {
            ++count;
            return *this;
        }
        counter operator++(int)
        {
            counter temp=*this;
            count++;
            return temp;
        }
};
int main()
{
    counter c1;
    c1++;
    c1.showcount();
    ++c1;
    c1.showcount();
    counter c2;
    c2=++c1;
    c1.showcount();
    c2.showcount();
    c2=c1++;
    c1.showcount();
    c2.showcount();
}
