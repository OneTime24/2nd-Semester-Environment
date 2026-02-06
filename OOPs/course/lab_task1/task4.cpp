
//Name: Mohsin ALi
//Roll number: 25P-0545

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sm=0;

    while(n>0){

        sm+=n%10;

        n/=10;
    }
    cout<<"Sum = "<<sm<<endl;

}