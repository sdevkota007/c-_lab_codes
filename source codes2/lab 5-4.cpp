#include<iostream>
using namespace std;
class date
{
    private:
        int day, month, year;
    public:
        date(int a=0,int b=0, int c=0)
           {
               day=a;month=b;year=c;
           }
        void getdata()
           {
               cout<<"Enter date"<<endl;
               cout<<"Day: ";    cin>>day;
               cout<<"Month: ";  cin>>month;
               cout<<"Year: ";   cin>>year;
           }
        void display()
           {
               cout<<day<<"/"<<month<<"/"<<year<<endl;
           }
        date operator++()
           {
               ++day;
                 if(day==32 && (month ==1||month==3||month==5||month==7||month==8||month==10) )
                    {  day=1; month++;  }
                 else if(day==32 && month==12)
                    {  day=1; year++;   }
                 else if(day==31 && (month==4||month==6||month==9||month==11))
                    {  day=1; month++;  }
                 else if(day==29 && month==2 && year/4!=0)
                    {  day=1; month++;  }
                 else if (year/4==0 && day==30 && month==2)
                    {  day=1; month++;  }
                 return date(day,month,year);
            }
        date operator++(int)
           {
               date temp(day,month,year);
               day++;
                 if(day==32 && (month ==1||month==3||month==5||month==7||month==8||month==10) )
                    {  day=1; month++;  }
                 else if(day==32 && month==12)
                    {  day=1; year++;   }
                 else if(day==31 && (month==4||month==6||month==9||month==11))
                    {  day=1; month++;  }
                 else if(day==29 && month==2 && year/4!=0)
                    {  day=1; month++;  }
                 else if (year/4==0 && day==30 && month==2)
                    {  day=1; month++;  }
                 return temp;

           }
};
int main()
{
      date  d1,d2,d3,d4;
      d1.getdata();
      d2.getdata();
      d3=++d1;
      cout<<"Prefix increment"<<endl;
      d1.display();
      d3.display();
      d4=d2++;
      cout<<"Postfix increment"<<endl;
      d2.display();
      d4.display();
 }
