#include<iostream>
using namespace std;
class time
{
    private:
        int hr,min,sec;
    public:
        time():hr(0),min(0),sec(0){}
        friend istream& operator>>(istream& iis, time& t);
        friend ostream& operator<<(ostream& oos, time& t);
};
istream& operator>>(istream& iis, time& t)
{
    iis>>t.hr>>t.min>>t.sec;
    return iis;
}
ostream& operator<<(ostream& oos, time& t)
{
    oos<<t.hr<<" ; "<<t.min<<" ; "<<t.sec;
    return oos;
}
int main()
{
    time t1;
    cout<<"Enter current time";
    cin>>t1;
    cout<<t1;
}
