
//Task 5:

//Name: Mohsin Ali
//Roll Number: 25P-0545



#include <iostream>
using namespace std;

int *resize(int* ptr, int &sz){

    int newsize = sz * 2;
    int *newarr = new int[newsize];

    for(int i = 0; i < sz; i++){
        *(newarr + i) = *(ptr + i);
    }

    delete[] ptr;

    sz = newsize;

    return newarr;
}

int main(){

    int size = 5;
    int *arr = new int[size];
    int cnt = 0;

    while(true){
        cout << "Enter number: -1 to stop ";
        int n;
        cin >> n;

        if(n == -1){
            break;
        }

        if(cnt == size){
            arr = resize(arr, size);  
        }

        arr[cnt] = n; 
        cnt++;
    }

    cout << "You Entered: ";
    for(int i = 0; i < cnt; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}
