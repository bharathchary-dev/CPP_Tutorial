#include <iostream>
using namespace std;

int main(){
int a[2][2], transpose[2][2],i,j;
cout << "Enter elements into matrix A: " << endl;;
for(i=0;i<2;i++){
for(j=0;j<2;j++){
cin >> a[i][j];
}
}

for(i=0;i<2;i++){
for(j=0;j<2;j++){
transpose[i][j]=a[i][j];
}
}

cout << "The transpose of the matrix A: " << endl;
for(i=0;i<2;i++){
for(j=0;j<2;j++){
cout << transpose[j][i] << " ";
}
cout << endl;
}
return 0;
}
