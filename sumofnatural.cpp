#include <iostream>
using namespace std;

int sum(int n){
    if(n<=1){
    return 1 ;
    }
    else{
        return n+sum(n-1);
    }
}
int main (){
    int n;
    cout<<"Enter the value for n :";
    cin>>n;

    cout<<"Sum of n natural numbers is"<<n+sum(n-1);
}
