#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int>myset = {10, 20, 30, 40};


    cout << "The set before deletion: ";
    for(int i : myset){
        cout << i << " ";
        }


    myset.erase(10);
    myset.erase(20);


    cout << "\nThe set after deletion: ";
    for(int i : myset){

        cout << i << " ";
        }


    myset.clear();

    cout << "\nThe set after clearing all elements: ";
    for(int i : myset){

        cout << i << " ";
        }

    return 0;
    }
