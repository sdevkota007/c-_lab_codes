#include<iostream>
using namespace std;
int count=0;
class department
     {
       private:
           int dep_id;
           string dep_name;
       public:
           department()                       //default constructor
              {
                  count++;
                  cout<<"no.of objects created "<<count<<endl;
              }
           department(int id,string name)     //parameterized constructor to initialize class members
              {
                  dep_id=id;
                  dep_name=name;
              }
          ~department()                       //destructor
              {
                  cout<<"object "<<count<<" goes out of scope";
                  count--;
              }

     };

int main()
  {
      int id1; string name1;
      department d1;                          //object d1 created and default constructor called
      cout<<"Department id: ";
      cin>>id1;
      cout<<"Department name: ";
      cin>>name1;
      d1=department(id1,name1);               //parameterized constructor called
  }
