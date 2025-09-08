#include<iostream>
using namespace std;
int main()
{
    void simple_intrest(int p,int n,int r);

int p,n,r;
cout<<"Enter principle";
cin>>n;
cout<<"Enter time";
cin>>r;
cout<<"Enter rate";
cin>>r;
simple_intrest(p,n,r);
}
void simple_intrest(int p,int n,int r)
{
cout<<"simple_intrest in"<<(p*n*r)/100;
}
