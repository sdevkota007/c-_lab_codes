#include<iostream>
#include<cmath>
using namespace std;
//class cartesian;

class polar
{
    private:
        float r,angle;
    public:
        polar(){}
        polar(float p,float q):r(p),angle(q){}
        float getr() { return r; }
        float getangle() { return angle; }
};
class cartesian
{
    private:
        float x,y;
    public:
        cartesian(){}
        cartesian(float p, float q):x(p),y(q){}
        void showdata()
        {
            cout<<"x= "<<x<<endl<<"y= "<<y;
        }
        cartesian(polar p)
        {
            x=p.getr()*cos(p.getangle());
            y=p.getr()*sin(p.getangle());
        }
};

int main()
{
    polar p1(2,1.4);
    cartesian c1;
    c1=p1;      //c1=cartesian(p1)
    c1.showdata();
    polar p2(2,1.4);
    cartesian c2;
    c2=p2;      //c1=cartesian(p1)
    c2.showdata();
}

