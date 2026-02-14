
//Name: Mohsin Ali
//Roll Number: 25P-0545


#include <iostream>
using namespace std;

int* rev(int* ptr, int sz){
    for(int i=0;i<sz/2;i++){
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+(sz-1-i));
        *(ptr+(sz-i-1))=temp;
    }
    return ptr;
}


int main(){

    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value: ";
        cin>>*(arr+i);
    }

    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    int *reved=rev(arr,n);

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(reved+i)<<" ";
    }


}