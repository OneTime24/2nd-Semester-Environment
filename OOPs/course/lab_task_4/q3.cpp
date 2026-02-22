// Problem 3: Circle Operations

//Name: Mohsin Ali
//Roll Number: 25P-0545
#include <iostream>
using namespace std;

struct circle{

    float cenx;
    float ceny;
    float r;

    float calc_area(circle obj){

        float area=3.147*obj.r*obj.r;
        return area;
    }

    void grow(circle& obj,float fact){
        obj.r*=fact;
    }

    void translate(circle& obj,float x,float y){
        obj.cenx+=x;
        obj.ceny+=y;
    }

    void outP(circle obj,float area){
        cout<<"Circle Raidus: "<<obj.r<<" With Center ("<<obj.cenx<<" , "<<obj.ceny<<")"<<endl;
        cout<<"Area is: "<<area<<endl;
    }
};


int main(){

    float area;

    circle c1;
    cout<<"ENter intitial X position of cirle: ";
    cin>>c1.cenx;
    cout<<"ENter intitial Y position of cirle: ";
    cin>>c1.ceny;

     cout<<"ENter Radius of the circle ";
    cin>>c1.r;

    area=c1.calc_area(c1);
    c1.outP(c1,area);

    cout<<endl<<"Do you want to translate the circle? (Y/N)";

    char ch;
    cin>>ch;

    if(ch=='Y'||ch=='y'){

        cout<<"Enter new x position: ";
        int t1;
        cin>>t1;

        cout<<"Enter new y position: ";
        int t2;
        cin>>t2;
        c1.translate(c1,t1,t2);
    }

    cout<<endl<<"Do you want to incrrease the radius of the circle? (Y/N)";

    char ch1;
    cin>>ch1;

    if(ch1=='Y'||ch1=='y'){
        cout<<"Enter factor by to increase the radius";
        int f;
        cin>>f;
        c1.grow(c1,f);
    }


    area=c1.calc_area(c1);

    c1.outP(c1,area);

    


}