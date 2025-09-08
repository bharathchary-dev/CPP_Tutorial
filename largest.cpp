#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter a value";
cin>>a;
cout<<"Enter b value";
cin>>b;
cout<<"Enter c value";
cin>>c;
if (a>b&&a>c){
cout<<"a is largest among";}
else if(b>a&&b>c){
cout<<"b is largest among";}
else
cout<<"c is largest among";
return 0;
}
