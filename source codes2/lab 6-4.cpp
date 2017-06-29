#include<iostream>
using namespace std;
class person
{
    protected:
       string name;
       int age;
    public:
       void getdata()
       {
           cout<<"Enter name: ";
           cin>>name;
           cout<<"Enter age: ";
           cin>>age;
       }
       void showdata()
       {
           cout<<"Name: "<<name<<endl;
           cout<<"Age: "<<age<<endl;
       }
};
class student:public person
{
    protected:
       int level;
    public:
       student(){name='\0';age=0;level=0;}
       void getdata()
       {
           person::getdata();
           cout<<"Enter level: ";
           cin>>level;
       }
       void showdata()
       {
           person::showdata();
           cout<<"Level: "<<level<<endl;
       }
};
class employee:public person
{
    protected:
       string title;
    public:
       employee(){name='\0';age=0;title='\0';}
       void getdata()
       {
           person::getdata();
           cout<<"Enter job title: ";
           cin>>title;
       }
       void showdata()
       {
           person::showdata();
           cout<<"Job Title: "<<title<<endl;
       }
};
class edit:public student,public employee
{
    public:
       void assign(char b)
       {
         if(b==1)student::getdata();
         else employee::getdata();
       }
       void change(char b)
       {
         cout<<"change \n1)Name1 \n2)Age \n3)Level";
         int x;
         cin>>x;
         if(b==1)
         {
               if(x==1)
               {
                   cout<<"Old name: "<<student::name<<"\nNew name: ";
                   cin>>student::name;
               }
               else if(x==2)
               {
                   cout<<"Old age: "<<student::age<<"\nNew age: ";
                   cin>>student::age;
               }
               else if(x==3)
               {
                   cout<<"Old level: "<<level<<"\nNew label: ";
                   cin>>level;
               }
         }
         else
         {
               if(x==1)
               {
                   cout<<"Old name: "<<student::name<<"\nNew name: ";
                   cin>>student::name;
               }
               else if(x==2)
               {
                   cout<<"Old age: "<<student::age<<"\nNew age: ";
                   cin>>student::age;
               }
               else if(x==3)
               {
                   cout<<"Old job title: "<<title<<"\nNew job title: ";
                   cin>>title;
               }
         }
       }
       void del(char b)
       {
              if(b==1)student();
              else employee();
       }
};
int main()
{
    student stu;
    employee emp;
    edit edt;
    cout<<"STUDENT INFORMATION"<<endl;
    stu.getdata();
    cout<<"EMPLOYEE INFORMATION"<<endl;
    emp.getdata();
    stu.showdata();
    emp.showdata();
    int a,b;
    cout<<"Select mode: "<<endl;
    cout<<"1) Assign record\n2) Change record\n3) Delete record\n";
    cin>>a;
    cout<<"1) Student Inormation\n2) Employee Information\n";
    cin>>b;
    if(a==1 && b==1 )edt.assign();
    else if(a==2 )
    {
        edt.change(b);
    }
    else if(a==3)
    {
        edt.del(b);
    }
    stu.showdata();
    emp.showdata();
}

