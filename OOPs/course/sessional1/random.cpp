#include <iostream>
using namespace std;

int main(){

    bool** ptr=new bool*[10];

    for(int i=0;i<10;i++){
        *(ptr+i)=new bool[5];
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            ptr[i][j]=true;
        }
    }


    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            cout<<*(*(ptr+i)+j)<<" ";
        }
        cout<<endl;
    }
}