
#include <iostream>
using namespace std;

struct laptop{

    int sczsize;
    int ramsize;
    int battery;
    string brand;


    void printData(laptop* ptr){

        for(int i=0;i<10;i++){
            if((ptr+i)->sczsize>=14){
                cout<<"Laptop Brand: "<<(ptr+i)->brand<<endl;
                cout<<"Laptop RamSize: "<<(ptr+i)->ramsize<<endl;
                cout<<"Laptop Battery: "<<(ptr+i)->battery<<endl;
                cout<<"Laptop ScreenSize: "<<(ptr+i)->sczsize<<endl;
            }
        }

    }

    void printComp(laptop* ptr){
        for(int i=0;i<10;i++){
            if((ptr+i)->brand=="HP"){
                cout<<"Laptop Brand: "<<(ptr+i)->brand<<endl;
                cout<<"Laptop RamSize: "<<(ptr+i)->ramsize<<endl;
                cout<<"Laptop Battery: "<<(ptr+i)->battery<<endl;
                cout<<"Laptop ScreenSize: "<<(ptr+i)->sczsize<<endl;
        }
        }
    }

};

laptop *create(){
    laptop *ptr=new laptop[10];
    return ptr;
}

int main(){

    laptop *ptr=create();


    for(int i=0;i<10;i++){

        cout<<"Enter Laptop Brand: ";
        getline(cin>>ws,(ptr+i)->brand);
        cout<<"Enter Laptop Screenzie: in inches ";
        cin>>(ptr+i)->sczsize;

        int tmp=0;
        while(tmp==0){
            cout<<"Enter Laptop Ram Size: ";
            int x;
            cin>>x;
            if(x>=2 && x<=16){
                (ptr+i)->ramsize=x;
                tmp=1;
            }else{
                cout<<"Ram size must be in between 2 - 16";

            }
        }
        cout<<"Enter Battery Size: (mAH)";
        cin>>(ptr+i)->battery;

    }


    ptr->printData(ptr);


    ptr->printComp(ptr);




}