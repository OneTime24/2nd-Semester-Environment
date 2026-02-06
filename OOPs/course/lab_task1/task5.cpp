//Name: Mohsin ALi
//Roll Number: 25P-0545

#include <iostream>
using namespace std;
int main(){

    cout<<"---------------AROOSA FOOD ZONE---------------"<<endl;
    cout<<"1. B= Burger \t Rs. 200\n2. F= French Fries \t Rs. 50\n3. P= Pizza \t Rs. 500\n4. S= Sandwiches \t Rs. 150 ";
    int n;
    cout<<"\nEnter number of snacks you want to order: "<<endl;
    cin>>n;
    int b=200,f=50,p=500,s=150;
    int total=0;

    switch(n){

        case 1:{
            char ch;
            int q;
            cout<<"Enter Snack to order: ";
            cin>>ch;
            cout<<"Enter Quantity: ";
            cin>>q;
            cout<<"------------------------------------------------------------------------------------"<<endl;
            cout<<"You have Ordered! "<<endl;

            if(ch=='B'){
                cout<<q<<" Burgers for value: "<<q*b<<endl;
                total=total+(q*b);
            }
            if(ch=='F'){
                cout<<q<<" French Fries for value: "<<q*f<<endl;
                total=total+(q*f);
            }
            if(ch=='P'){
                cout<<q<<" Pizza for value: "<<q*p<<endl;
                total=total+(q*p);
            }
            if(ch=='S'){
                cout<<q<<" Sandwiches for value: "<<q*s<<endl;
                total=total+(q*s);
            }
            break;
        }

        case 2:{
            char ch1,ch2;
            int q1,q2;
            cout<<"Enter Snack 1 to order: ";
            cin>>ch1;
            cout<<"Enter Snack 2 to order: ";
            cin>>ch2;
            cout<<"Enter Quantity for Snack 1: ";
            cin>>q1;
            cout<<"Enter Quantity for Snack 2: ";
            cin>>q2;
            cout<<"------------------------------------------------------------------------------------"<<endl;
            cout<<"You have Ordered! "<<endl;

            if(ch1=='B'){
                cout<<q1<<" Burgers for value: "<<q1*b<<endl;
                total=total+(q1*b);
            }
            if(ch1=='F'){
                cout<<q1<<" French Fries for value: "<<q1*f<<endl;
                total=total+(q1*f);
            }
            if(ch1=='P'){
                cout<<q1<<" Pizza for value: "<<q1*p<<endl;
                total=total+(q1*p);
            }
            if(ch1=='S'){
                cout<<q1<<" Sandwiches for value: "<<q1*s<<endl;
                total=total+(q1*s);
            }

            if(ch2=='B'){
                cout<<q2<<" Burgers for value: "<<q2*b<<endl;
                total=total+(q2*b);
            }
            if(ch2=='F'){
                cout<<q2<<" French Fries for value: "<<q2*f<<endl;
                total=total+(q2*f);
            }
            if(ch2=='P'){
                cout<<q2<<" Pizza for value: "<<q2*p<<endl;
                total=total+(q2*p);
            }
            if(ch2=='S'){
                cout<<q2<<" Sandwiches for value: "<<q2*s<<endl;
                total=total+(q2*s);
            }
            break;
        }

        case 3:{
            char ch1,ch2,ch3;
            int q1,q2,q3;
            cout<<"Enter Snack 1 to order: ";
            cin>>ch1;
            cout<<"Enter Snack 2 to order: ";
            cin>>ch2;
            cout<<"Enter Snack 3 to order: ";
            cin>>ch3;
            cout<<"Enter Quantity for Snack 1: ";
            cin>>q1;
            cout<<"Enter Quantity for Snack 2: ";
            cin>>q2;
            cout<<"Enter Quantity for Snack 3: ";
            cin>>q3;
            cout<<"------------------------------------------------------------------------------------"<<endl;
            cout<<"You have Ordered! "<<endl;

            if(ch1=='B'){
                cout<<q1<<" Burgers for value: "<<q1*b<<endl;
                total=total+(q1*b);
            }
            if(ch1=='F'){
                cout<<q1<<" French Fries for value: "<<q1*f<<endl;
                total=total+(q1*f);
            }
            if(ch1=='P'){
                cout<<q1<<" Pizza for value: "<<q1*p<<endl;
                total=total+(q1*p);
            }
            if(ch1=='S'){
                cout<<q1<<" Sandwiches for value: "<<q1*s<<endl;
                total=total+(q1*s);
            }

            if(ch2=='B'){
                cout<<q2<<" Burgers for value: "<<q2*b<<endl;
                total=total+(q2*b);
            }
            if(ch2=='F'){
                cout<<q2<<" French Fries for value: "<<q2*f<<endl;
                total=total+(q2*f);
            }
            if(ch2=='P'){
                cout<<q2<<" Pizza for value: "<<q2*p<<endl;
                total=total+(q2*p);
            }
            if(ch2=='S'){
                cout<<q2<<" Sandwiches for value: "<<q2*s<<endl;
                total=total+(q2*s);
            }

            if(ch3=='B'){
                cout<<q3<<" Burgers for value: "<<q3*b<<endl;
                total=total+(q3*b);
            }
            if(ch3=='F'){
                cout<<q3<<" French Fries for value: "<<q3*f<<endl;
                total=total+(q3*f);
            }
            if(ch3=='P'){
                cout<<q3<<" Pizza for value: "<<q3*p<<endl;
                total=total+(q3*p);
            }
            if(ch3=='S'){
                cout<<q3<<" Sandwiches for value: "<<q3*s<<endl;
                total=total+(q3*s);
            }
            break;
        }

        case 4:{
            char ch1,ch2,ch3,ch4;
            int q1,q2,q3,q4;
            cout<<"Enter Snack 1 to order: ";
            cin>>ch1;
            cout<<"Enter Snack 2 to order: ";
            cin>>ch2;
            cout<<"Enter Snack 3 to order: ";
            cin>>ch3;
            cout<<"Enter Snack 4 to order: ";
            cin>>ch4;
            cout<<"Enter Quantity for Snack 1: ";
            cin>>q1;
            cout<<"Enter Quantity for Snack 2: ";
            cin>>q2;
            cout<<"Enter Quantity for Snack 3: ";
            cin>>q3;
            cout<<"Enter Quantity for Snack 4: ";
            cin>>q4;
            cout<<"------------------------------------------------------------------------------------"<<endl;
            cout<<"You have Ordered! "<<endl;

            if(ch1=='B'){
                cout<<q1<<" Burgers for value: "<<q1*b<<endl;
                total=total+(q1*b);
            }
            if(ch2=='F'){
                cout<<q2<<" French Fries for value: "<<q2*f<<endl;
                total=total+(q2*f);
            }
            if(ch3=='P'){
                cout<<q3<<" Pizza for value: "<<q3*p<<endl;
                total=total+(q3*p);
            }
            if(ch4=='S'){
                cout<<q4<<" Sandwiches for value: "<<q4*s<<endl;
                total=total+(q4*s);
            }
            break;
        }
    }

    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"Total Bill: "<<total<<endl;
}
