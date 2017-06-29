#include<iostream>
#include<cstring>
using namespace std;
class musicians           //defination of base class
{
    private:
       string str1[5],str2[5],str3[5];
    public:
       void strings()   //initialization of string
       {
           str1[0]="veena";
           str1[1]="guitar";
           str1[2]="sitar";
           str1[3]="sarod";
           str1[4]="mandolin";
           for(int i=0;i<5;i++)   //display of string contents
           {
               cout<<str1[i]<<endl;
           }
       }
       void wind()
       {
           str2[0]="flute";
           str2[1]="clarinet";
           str2[2]="saxophone";
           str2[3]="nadaswaram";
           str2[4]="piccolo";
           for(int i=0;i<5;i++)
           {
               cout<<str2[i]<<endl;
           }
       }
       void perc()
       {
           str3[0]="tabla";
           str3[1]="mridangam";
           str3[2]="bangos";
           str3[3]="drums";
           str3[4]="tambour";
           for(int i=0;i<5;i++)
           {
               cout<<str3[i]<<endl;
           }
       }
};
class typelns:public musicians    //defenation of derived class
{
    public:
    void get()
    {
        cout<<"Type of instruments to be displayed"<<endl;
        cout<<"a) String instruments"<<endl;
        cout<<"b) Wind instruments"<<endl;
        cout<<"c) Percussion instruments"<<endl;
    }
    void show(char ch)
    {
        if(ch=='a')   strings();
        else if(ch=='b')  wind();
        else if(ch=='c')  perc();
    }
};
int main()
{
    typelns t;
    t.get();
    char ch;
    cin>>ch;
    t.show(ch);
    return 0;
}
