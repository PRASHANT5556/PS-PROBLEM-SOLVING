#include<iostream>
using namespace std;
int main()
{
 char alphabet='a';
 cout<<"enter the nuber of rows ";
 int n;
 cin>>n;

  for( int i=1;i<=n;i++)
   {
     for(int j=1;j<=i;j++)
      {
       cout<<alphabet<<" ";
        
      }
       alphabet++;
      cout<<endl;
   }
 return 0;

}