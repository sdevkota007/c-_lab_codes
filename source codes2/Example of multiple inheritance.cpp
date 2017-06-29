#include<iostream>
using namespace std;
class person
{
    protected:
        char name[20];
        int age;
    public:
        void read()
        {
            cout<<"Enter name ; ";
            cin>>name;
            cout<<"Enter age ; ";
            cin>>age;
        }
        void show()
        {
            cout<<"name ; "<<name<<endl;
            cout<<"age ; "<<age<<endl;
        }
};
class job: public person                //here we can use virtual function to remove ambiguity that is "virtual public person"
{
    protected:
        char title[20];
    public:
        void readjob()
        {
            cout<<"Enter job title";
            cin>>title;
        }
        void showjob()
        {
            cout<<"job title ; "<<title<<endl;
        }
};
class qualification: public person      //here we can use virtual function to remove ambiguity that is "virtual public person"
{
    protected:
        char qual[20];
    public:
        void readqual()
        {
            cout<<"Enter qualification ; ";
            cin>>qual;
        }
        void showqual()
        {
            cout<<"Qualification ; "<<qual<<endl;
        }
};
class manager:public job,public qualification
{
    protected:
        int password;
    public:
        void readdata()
        {
            job::read();
            readjob();
            readqual();
            cout<<"Enter password ; ";
            cin>>password;
        }
        void showdata()
        {
            job::show();
            showjob();
            showqual();
            cout<<"password ; "<<password;
        }
};

int main()
{
    manager m;
    m.readdata();
    m.showdata();
    return 0;
}
