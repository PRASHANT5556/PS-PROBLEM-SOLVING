#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of rows ";
    cin>>n;

  for(int i=1;i<=n;i++)
   { char alphabet='a';
     for(int j=1;i>=j;j++)
     {
       cout<<alphabet<<" ";
         alphabet++;
     }

     cout<<endl;

   }
  return 0;


}