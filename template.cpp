#include <iostream>
using namespace std;

template <class t>
t add(t a, t b){
return a+b;
}

int main(){
cout << add(10, 20) << endl;
cout << add(15.2, 13.3) << endl;
}
