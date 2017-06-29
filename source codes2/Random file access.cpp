#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
using namespace std;
class student
{
    private:
        char name[20];
        int age;
    public:
        void getdata()
        {
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter age : ";
            cin>>age;
        }
        void showdata()
        {
            cout<<endl<<"Name : "<<name;
            cout<<endl<<"Age : "<<age;
        }
};

void writetofile()
{
    student st;
    ofstream outfile;
    outfile.open("myfile2.dat", ios::binary | ios::app);
    st.getdata();
    outfile.write(reinterpret_cast<char*>(&st) , sizeof(st));
}
void readfromfile()
{
    student st;
    ifstream infile;
    infile.open("myfile2.dat", ios::binary);
    while(!infile.eof())
    {
        if(infile.read(reinterpret_cast<char*>(&st),sizeof(st))>0)
             st.showdata();
    }
}
void readonerecord()
{
    int n;
    student stu;
    cout<<"Enter the record number to read";
    cin>>n;
    ifstream infile;
    infile.open("myfile2.dat", ios::binary);
    infile.seekg( (n-1)*sizeof(stu) );
    infile.read( reinterpret_cast<char*>(&stu),sizeof(stu));
    stu.showdata();
}
int main()
{
    cout<<"***STUDENT INFORMATION***";
    cout<<"\n1 ) Write to file.";
    cout<<"\n2 ) Read from file.";
    cout<<"\n3 ) Read one record.";
    cout<<"\n4 ) Exit Program";
    int choice;
    while(true)
    {
        cout<<"\nEnter choice";
        cin>>choice;
        switch(choice)
        {
            case 1:
                writetofile();
                break;
            case 2:
                readfromfile();
                break;
            case 3:
                readonerecord();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<endl<<"not available";
                exit(0);
        }
    }
}
