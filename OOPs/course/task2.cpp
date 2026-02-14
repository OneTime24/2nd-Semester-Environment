
//Task2:



//Name: Mohsin Ali
//Roll Number: 25P-0545

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[100];
    char s2[100];
    cout<<"Enter String: ";
    cin.getline(s1,100);
    cout<<"Enter Subsequent String: ";
    cin.getline(s2,100);
    int i=0,j=0;
    while(s1[i]!='\0' && s2[j]!='\0'){
        if(s1[i]==s2[j]){
            j++;
        }
        i++;
    }
    if(s2[j]=='\0'){
        cout<<"Return 1";
    }else{
        cout<<"Return 0";
    }
    return 0;
}
