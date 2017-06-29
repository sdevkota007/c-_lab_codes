#include<iostream>
using namespace std;
class vector
{
    private:
       int x,y,z;
    public:
        vector(){}
        vector(int a, int b, int c):x(a),y(b),z(c) {}
        void showdata()
        {
            cout<<x<<" , "<<y<<" , "<<z<<endl;
        }
        friend vector operator+(vector v1, vector v2);
        friend vector operator-(vector v1, vector v2);
};

vector operator+(vector v1, vector v2)
{
    vector temp;
    temp.x= v1.x + v2.x;
    temp.y= v1.y + v2.y;
    temp.z= v1.z + v2.z;
    return temp;
}

vector operator-(vector v1, vector v2)
{
    vector temp;
    temp.x= v1.x - v2.x;
    temp.y= v1.y - v2.y;
    temp.z= v1.z - v2.z;
    return temp;
}

int main()
{
    vector v1(2,3,4);
    vector v2(1,1,1);
    vector v3,v4;
    v3=v1+v2;
    v4=v1-v2;
    v1.showdata();
    v2.showdata();
    v3.showdata();
    v4.showdata();
}
