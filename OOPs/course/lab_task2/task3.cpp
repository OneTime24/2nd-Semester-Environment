//Task3:



//Name: Mohsin Ali
//Roll Number: 25P-0545

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){

    char *s1=new char[100];
    char *s2=new char[100];
    cout<<"Enter String: ";
    cin.getline(s1,100);
    cout<<"Enter SUbsequent String: ";
    cin.getline(s2,100);

   
    int i=0,j=0;

    while(s1[i]!='\0' && s2[j]!='\0'){

        if(s1[i]==s2[j]){
            j++;

        }
        i++;
    }

    if(s2[j]=='\0'){
        cout<<"Return 1 ";

    }else{
        cout<<"Return 0";
    }

    delete[] s1;
    delete[] s2;
    return 0;


}