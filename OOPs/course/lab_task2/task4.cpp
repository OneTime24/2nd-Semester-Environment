
//Name: Mohsin Ali
//Roll Number: 25P-0545



#include <iostream>
using namespace std;

void sort(int* ptr, int sz){
    int tmp=*ptr;
    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-1-i;j++){
            tmp=*(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=tmp;
        }
    }

    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-1;j++){

            if((*(ptr+j)%2==0) && (*(ptr+j+1)%2!=0) ){

                tmp=*(ptr+j);

                *(ptr+j)=*(ptr+j+1);

                *(ptr+j+1)=tmp;

            }

        }
    }

}

int main(){

    int sz;
    cout<<"ENter size of the array: ";
    cin>>sz;

    int *arr=new int[sz];


    for(int i=0;i<sz;i++){
        cout<<"Enter values: ";
        cin>>*(arr+i);
    }
    sort(arr,sz);

    for(int i=0;i<sz;i++){
        cout<<*(arr+i)<<" ";
    }
}