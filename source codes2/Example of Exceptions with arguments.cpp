#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class number
{
    private:
        float num;
    public:
        class NEG
        {
            public:
                float value;
                char description[20];
                NEG(int v,char *desc)
                {
                    value=v;
                    strcpy(description,desc);
                }
        };
        void readnum()
        {
            cout<<"ENter number"<<endl;
            cin>>num;
        }
        double squareroot()
        {
            if(num<0)
            {
                throw NEG(num,"Negative number");
            }
            else return (sqrt(num));
        }
};
int main()
{
    number n1;
    double res;
    n1.readnum();
    try
    {
            cout<<"Trying to find sqrt.."<<endl;
            res=n1.squareroot();
            cout<<"Success ...square root is "<<res;
    }
    catch(number::NEG n)
    {
        cout<<endl<<"cannot find square root of"<<n.value;
        cout<<"Description ; "<<n.description;
    }
}
