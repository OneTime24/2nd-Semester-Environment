
//Name: Mohsin Ali
//Roll Number: 25P-0545

#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter number of fibbonaci numbers to find: "<<endl;
    cin>>n;
    int a=0,b=1;
    int tmp=0;

    try{
        if(n<0){
            throw "Negative Number Error: ";
        }
        for(int i=0;i<n;i++){
        
        cout<<a<<" ";
        tmp=a+b;
        a=b;
        b=tmp;


    }
        
    }
    catch(const char* msg){
        cout<<"Error: "<<msg;
    }

    return 0;
    

}