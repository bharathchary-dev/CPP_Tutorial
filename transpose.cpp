#include<iostream>
using namespace std;
int main (){
int a[2][2],transpose[2][2],i,j;
cout<<"Enter elements in to a matrix A";
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
  {
   cin>>a[i][j];
   }
}
for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
  {
  transpose[i][j]=a[i][j];
  }
}
  cout<<"The transpose of the matrix A"<<endl;
  for(i=0;i<=1;i++)
  {
    for(j=0;j<=1;j++)
    {
    cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
    }

