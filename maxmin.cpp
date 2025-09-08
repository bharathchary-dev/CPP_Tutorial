#include <iostream>

using namespace std;

int main()
{
int marks[6];
int i,max,min;
for(i=0;i<6;i++)
{
cout<<"enter marks of students"<<i+1;
cin>>marks[i];
cout<<endl;
}
max=marks[0];
for(i=1;i<6;i++)
{
if(marks[i]>max)
max=marks[i];
}
min=marks[0];
for(i=1;i<6;i++)
{
if(marks[i]<min)
min=marks[i];
}
cout<<"max values is"<<max;
cout<<"min values is"<<min;
}
