#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class vector2;
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
        friend vector operator+(vector v1, vector2 v2);
        friend vector operator-(vector v1, vector2 v2);
};

class vector2
{
    private:
       int p,q,r;
    public:
        vector2(){}
        vector2(int a, int b, int c):p(a),q(b),r(c) {}
        void showdata()
        {
            cout<<p<<" , "<<q<<" , "<<r<<endl;
        }
        friend vector operator+(vector v1, vector2 v2);
        friend vector operator-(vector v1, vector2 v2);
};


vector operator+(vector v1, vector2 v2)
{
      vector temp;
      temp.x= v1.x + v2.p;
      temp.y= v1.y + v2.q;
      temp.z= v1.z + v2.r;
      return temp;
}

vector operator-(vector v1, vector2 v2)
{
    vector temp;
    temp.x= v1.x - v2.p;
    temp.y= v1.y - v2.q;
    temp.z= v1.z - v2.r;
    return temp;
}

int main()
{
    vector v1(2,3,4);
    vector2 v2(1,1,1);
    vector v3,v4;
    v3=v1+v2;
    v4=v1-v2;
    v1.showdata();
    v2.showdata();
    v3.showdata();
    v4.showdata();
}
