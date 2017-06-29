//example of functions getline() and write()
#include<iostream>
#include<cstring>
using namespace std;
const int MAX=50;
int main()
{
    char str[MAX];
    cout<<"\nEnter the string: ";
    cin.getline(str,40);
    //cin>>str;
    cout.write(str,5);
    cout<<endl;
    cout.write(str,strlen(str));
    return 0;
}
