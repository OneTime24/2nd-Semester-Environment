// Problem 2: Time Format Converter

#include <iostream>
using namespace std;

struct timed{

    int hour;
    int min;
    int sec;

int to_sec(){
    int total;
    total = hour*3600 + min*60 + sec;
    return total;
}
    string change(){
        string tmp;
        int newt;
        if(hour==0){
            tmp="AM";
            newt=12;
        }
        else if(hour<12){
            tmp="AM";
            newt=hour;
        }else if(hour==12){
            tmp="PM";
            newt=12;
        }else{
            tmp="PM";
            newt=hour-12;
        }

        // string conv=to_string(newt);

        string final=to_string(newt)+" : "+to_string(min)+" : "+to_string(sec)+tmp;


        return final;

    }
    

    

};

int main(){

    timed t1;
    
    cout<<"Enter Hour: ";
    cin>>t1.hour;
    cout<<"Enter Minutes: ";
    cin>>t1.min;
    cout<<"Enter Seconds: ";
    cin>>t1.sec;

    string result=t1.change();
    int sec=t1.to_sec();

    cout<<"Time: "<<result<<endl;
    cout<<"Total Seconds: "<<sec<<endl;

}