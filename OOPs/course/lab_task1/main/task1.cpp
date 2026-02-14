
//Name: Mohsin Ali
//Roll Number: 25P-0545


#include <iostream>
using namespace std;

int sum(int *ptr,int sz){
    int sm=0;
    for(int i=0;i<sz;i++){
        sm+=*(ptr+i);
    }

    return sm;
}



int main(){

    int n;
    cout<<"Enter Size of the array: ";
    cin>>n;

    int *arr=new int[n];


    for(int i=0;i<n;i++){
        cout<<"Enter value: ";
        cin>>*(arr+i);
    }
    int sm=sum(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl<<"Sum of the array is: "<<sm<<endl;
}