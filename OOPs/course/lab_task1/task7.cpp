
//Name: Mohsin ALi
//ROll Number: 25P-0545


#include <iostream>

using namespace std;
void reverse(int*, int);
int main(){

    int sz;
    cout<<"Enter Size: ";
    cin>>sz;

    int *ptr= new int[sz];

    for(int i=0;i<sz;i++){
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>*(ptr+i);
    }

    cout<<"ARRAY BEFORE REVERSING: ";
    for(int i=0;i<sz;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    reverse(ptr,sz);

    cout<<"ARRAY After REVERSING: ";
    for(int i=0;i<sz;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;

    delete[] ptr;
}

void reverse(int *ptr,int sz){
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz-i-1;j++){
            int tmp=*(ptr+j);
            *(ptr+j)=*(ptr+(j+1));
            *(ptr+(j+1))=tmp;
        }
    }
}