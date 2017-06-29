#include<iostream>
#include<cstring>
using namespace std;
class publication
{
    public:
        string title;
        void read_title(string s)
        {
            title=s;
        }
        void print()
        {
            cout<<endl<<"Title = "<<title;
        }
};
class book: virtual public publication
{
    public:
        float acc_num;
        void read_acc_num(float a)
        {
            acc_num=a;
        }
        void print()
        {
            cout<<endl<<"Accession number ; "<<acc_num;
        }
};
class magazine:virtual public publication
{
    public:
        int vol_num;
        void read_vol_num(int b)
        {
            vol_num=b;
        }
        void print()
        {
            cout<<endl<<"Volume number ; "<<vol_num;
        }
};
class journal:public book, public magazine
{
    public:
        void read_data(string s,float acc,int vol)
        {
            read_title(s);
            read_acc_num(acc);
            read_vol_num(vol);
        }
        void print()
        {
            publication::print();
            book::print();
            magazine::print();
        }
};

int main()
{
    journal j1;
    j1.read_data("IEEEOOP",681.3,1);
    j1.print();
}


