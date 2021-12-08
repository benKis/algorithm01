#include <iostream>
using namespace std;

int number;
int sum;

int main(){
int i ;
cout<<"Enter a number ";
cin>>number;
for (i= 2; i<=number ; i++){
    sum += i*i*i;
}
cout << sum <<"\n";
}
