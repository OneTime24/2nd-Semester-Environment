

//Name: Mohsin Ali
//ROll Number: 25P-0545

#include <iostream>
using namespace std;
int main(){

    int arr[5]={0};

    for(int i=0;i<5;i++){
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>arr[i];
    }

    int mx=arr[0];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j+1]>mx){
                mx=arr[j+1];
            }
        }
    }

    int tmp=arr[0];

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j+1]>tmp && arr[j+1]<mx){
                tmp=arr[j+1];
            }
        }
    }


    cout<<"Max is: "<<mx<<endl;
    cout<<"Second Largest: "<<tmp<<endl;

}