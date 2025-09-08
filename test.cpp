#include <iostream>
using namespace std;
class Test{
private:
int Rno;
int marks;
public:
void add(){
Rno=10;
marks=30;
}
void display();
};


void Test::display(){
cout << Rno << endl;
cout << marks << endl;
}
int main(){
Test t;
t.add();
t.display();
}
