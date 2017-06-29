#include<iostream>
#include<cstring>
using namespace std;
class eng
    {
     private:

          char *str=new char[50];
     public:
          eng(){}
          eng(string str1)
             {
                 str=str1;
             }

          void join(eng a,eng b)
             {
                int i,j;
                for (i=0; ;i++)
                  {
                      if(str[i]=='\0')
                         break;
                      else
                          str[i]=a.str[i];
                  }
                for (j=0; ;j++)
                  {
                      if(str[i+j]=='\0')
                         break;
                      else
                          str[i+j]=b.str[j];
                  }
                str[i+j]='\0';

             }
          void display()
             {
                 cout<<str<<endl;
             }
    };

int main()
  {
      strin("Engineers are");
      string s2(" Creatures of Logic.");
      eng e1(s1),e2(s2);
      eng e3;
      e3.join(e1,e2);
      e1.display();
      e2.display();
      cout<<"After concatenation : "<<endl;
      e3.display();
  }
