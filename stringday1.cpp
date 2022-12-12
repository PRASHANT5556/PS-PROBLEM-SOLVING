#include <iostream>
using namespace std;
int main()
{
   char s[20];
   char s2[20];

   cout<<"enter the name ";
   cin.getline (s,20);
   cout<<"wellcome "<<s<<endl;

   cout<<"enter the name again ";
   cin.getline (s2,20);
   cout<<"wellcome "<<s2<<endl;


    return 0;
}