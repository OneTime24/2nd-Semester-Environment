//Task1:



//Name: Mohsin Ali
//Roll Number: 25P-0545

#include <iostream>
#include <cstring>
using namespace std;

int repeat_c(char* word){

    int fre[26]={0};
    int most=0;

    for(int i=0;word[i] != '\0' ;i++){

        if(word[i]>='a' && word[i]<='z'){
            fre[word[i]-'a']++;

        }else if(word[i]>='A' && word[i]<='Z'){
            fre[word[i]-'A']++;

        } 

    }

    for(int i=0;i<26;i++){
        if(fre[i]>most){
            most=fre[i];
        }
    }
    return most;
}

int main(){

    cout<<"Enter sentence: ";

    char *str= new char[200];
    cin.getline(str,200);

    int ln=strlen(str);

    char *tmp= new char[ln+1];

    strcpy(tmp,str);


    int high=0;
    char repWord[200]="";

    char *token=strtok(tmp," ");

    while(token!=NULL){

        int repeats=repeat_c(token);


        if(repeats>high){
            high=repeats;
            strcpy(repWord,token);
        }

        token=strtok(NULL," ");
    }

    cout<<"Word with most repeated word is: "<<repWord<<endl;

    delete[] str;
    delete[] tmp;




}



