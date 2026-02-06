
//Name: Mohsin Ali
//Roll number: 25P-0545

#include <iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int d=0;
    cout<<"Enter the number of elements to rotate the array to left: ";
    cin>>d;
    cout<<"Intital Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<n-1;j++){
            int tmp=0;
            tmp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=tmp;
        }
    }
    cout<<endl;

    cout<<"FInal Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}