// Dynamically create an array of employees.

// Write function to:

// Sort employees by salary using pointers.

// Find employee with earliest joining date.

// Increase salary by 10% for employees hired before 2020.

// Free memory properly.

#include <iostream>
using namespace std;

struct date{


    int day, month, year;
};
struct employee{

    int id;
    string name;
    date joining;
    float salary;   

};

employee *sort(employee* ptr,int n){

    for(int i=0;i<n-1;i++){
        // int tmp=(ptr+0)->salary;
        for(int j=0;j<n-1-i;j++){
            if((ptr+j)->salary>(ptr+j+1)->salary){
                employee tmp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=tmp;
            }
        }
    }
    return ptr;
};
employee *join(employee* ptr,int n){
    employee* earliest=ptr;
    for(int i=1;i<n;i++){
        if(ptr[i].joining.year<earliest->joining.year){
            earliest=(ptr+i);
        }
        else if(ptr[i].joining.year == earliest->joining.year &&
                ptr[i].joining.month < earliest->joining.month){
            earliest = ptr + i;
        }
        else if(ptr[i].joining.year == earliest->joining.year &&
                ptr[i].joining.month == earliest->joining.month &&
                ptr[i].joining.day < earliest->joining.day){
            earliest = ptr + i;
        }
    }
    return earliest;
};

employee *inc(employee* ptr, int n){

    for(int i=0;i<n;i++){
        if((ptr+i)->joining.year<2020){
            (ptr+i)->salary+=((ptr+i)->salary*(10.0/100));
        }
    }
    return ptr;


}
int main(){

    int n;
    cout<<"Enter number of employee: ";
    cin>>n;

    employee* ptr=new employee[n];

    for(int i=0;i<n;i++){
        cout<<"Enter Employee "<<i+1<<" Name: ";
        getline(cin>>ws,(ptr+i)->name);
        cout<<"Enter Employee "<<i+1<<" id: ";
        cin>>(ptr+i)->id;
        cout<<"Enter Employee "<<i+1<<" Salary: ";
        cin>>(ptr+i)->salary;
        cout<<"Enter Employee "<<i+1<<" Date of Joining (day, month, year): ";
        cin>>(ptr+i)->joining.day;
        cin>>(ptr+i)->joining.month;
        cin>>(ptr+i)->joining.year;

    }


    employee* sorted=sort(ptr, n);
    cout<<endl<<"Sorted Salary: ";
    for(int i=0;i<n;i++){
        cout<<(ptr+i)->salary<<" ";
    }

    employee *joined=join(ptr, n);
        cout<<joined->name<<endl;
        cout<<joined->id<<endl;
        cout<<joined->salary<<endl;
    employee *in=inc(ptr,n);

    for(int i=0;i<n;i++){
        cout<<"Salary: "<<in[i].salary<<endl;
    }

    delete[] ptr;

}