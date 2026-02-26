

#include <iostream>

using namespace std;


int* meow(int *ptr, int *ptr2,int m,int n){

    int *arr=new int[m];
    for(int i=0;i<m;i++){

        *(arr+i)=*(ptr+i)+*(ptr2+i);

    }
    return arr;
    

}

int main(){

    int m;
    cout<<"ARRAY SIZE MUST BE SAME";
    cout<<"Enter size of array1"<<endl;
    cin>>m;
    int n;
    cout<<"Enter size of array2"<<endl;
    cin>>n;
    
    
    int *ptr1 =new int[m];
    int *ptr2=new int[n];

    for(int i=0;i<m;i++){
        cout<<"Enter array1: element "<<i+1;
        cin>>*(ptr1+i);
    }

    for(int i=0;i<n;i++){
        cout<<"Enter array2: element "<<i+1;
        cin>>*(ptr2+i);
    }
    int* arr=meow(ptr1,ptr2,m,n);

    for(int i=0;i<m;i++){
        cout<<*(arr+i)<<" ";
    }


}