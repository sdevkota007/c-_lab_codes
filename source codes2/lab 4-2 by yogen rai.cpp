#include<iostream>
using namespace std;
#include<cstring>
class StrAdd
{
private:
char *str = new char[10]; //allocates memory for char datatype dynamically
public:
StrAdd() //default constructor; constructor with no arguments
{
str[0]='\0';
}
StrAdd(char ss[]) //parameterized constructor; constructor with arguments
{
strcpy(str,ss);
}
void join(StrAdd &str1,StrAdd & str2) //member function with reference arguments
{ //change in here is depicted on main function
int i,j;
for( i=0; ;i++)
{
if(str1.str[i]=='\0')
break;
else
str[i]=str1.str[i];

}
for( j=0; ;j++)
{
if(str2.str[j]=='\0')
break;
else
str[j+i]=str2.str[j];
}
str[i+j]='\0';
}
void showstring()
{
cout<<"\nThe string after joining is:\t"<<str;
}
}; //end of class
int main()
{
StrAdd s; //object 's' of type StrAdd is created and default constructor is invoked
StrAdd s1("Engineers are "); //object 's1' of type StrAdd is created and intialized with string "Engineers are"
StrAdd s2("creatures of logic."); //this calls parameterized constructor
s.join(s1,s2);
s.showstring();
return 0;

}
