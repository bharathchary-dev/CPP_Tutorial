#include <iostream>
using namespace std;

template <class t>
void swaps(t &a, t&b){
t temp;
temp=a;
a=b;
b=temp;
}

int main(){
int x=10, y=20;
cout << "Before swapping, x is: " << x << " ,and y is: " << y << endl;
swaps(x, y);
cout << "After swapping, x is: " << x << " ,and y is: " << y << endl;
float a=3.5, b=2.5;
cout << "Before swapping, a i : " << a << " ,and b is: " << b << endl;
swaps(a, b);
cout << "After swapping, a is: " << a << " ,and b is: " << b << endl;
}
