#include<iostream>
using namespace std;
int main(){
int option;
cout<<"enter any number(1-7)";
cin>>option;
switch(option)
{
case 1:
    cout<<"monday";
    break;
case 2:
    cout<<"tuesday";
    break;
case 3:
    cout<<"wednesday";
    break;
case 4:
    cout<<"thursday";
    break;
case 5:
    cout<<"friday";
    break;
case 6:
    cout<<"saturday";
    break;
case 7:
    cout<<"sunday";
    break;
default:
    cout<<"enter a valid number";
}
return 0;
}
