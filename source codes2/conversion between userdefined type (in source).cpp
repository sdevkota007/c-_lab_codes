#include<iostream>
#include<cmath>
using namespace std;
class polar;
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
};
class polar
{
    private:
        float r,angle;
    public:
        polar(){}
        polar(float p,float q):r(p),angle(q){}
        operator cartesian()
        {
            float x=r*(cos(angle));
            float y=r*(sin(angle));
            return cartesian(x,y);
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

