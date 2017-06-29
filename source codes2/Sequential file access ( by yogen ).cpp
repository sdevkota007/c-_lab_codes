#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
class student
{
    private:
    char name[25];
    int roll_no;
    public:
    void read_data()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter roll no. ";
        cin>>roll_no;
    }
    void show_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll NO. "<<roll_no<<endl;
    }
};
void write2file()
{
    student stu;
    ofstream outfile("record.dat",ios::binary|ios::app);
    stu.read_data();
    outfile.write(reinterpret_cast<char*>(&stu),sizeof(stu));
}
void readfromfile()
{
    student stu;
    cout<<"\n****Data from file****"<<endl;
    ifstream infile("record.dat",ios::binary);
    while(!infile.eof())
    {
        if(infile.read(reinterpret_cast<char*>(&stu),sizeof(stu))>0)
        stu.show_data();
    }
}

int main()
{
    int choice;
    cout<<"****Student record system****";
    cout<<"\nSelect one option below";
    cout<<"\n\t1-->Write Records to file";
    cout<<"\n\t2-->Read From File";
    cout<<"\n\t3-->Exit From Program";
    while(true)
    {
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                write2file();
                break;
            case 2:
                readfromfile();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"\nChoice not available";
                exit(0);
        }
    }
    return 0;
}
