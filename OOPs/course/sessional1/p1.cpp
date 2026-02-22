

#include <iostream>
using namespace std;


struct date{


    string day;
    int date;
    int year;

};


struct studentinfo{

    int std_id;
    string fname;
    string lname;
    date dob;

};

struct course_rec{

    studentinfo stdinfo;
    int arr[5];
    char grade;
    float avg;
};


int main(){
    
    course_rec s1;
    course_rec s2;

    s1.stdinfo.std_id=1;
    s1.stdinfo.fname="Muhammad";
    s1.stdinfo.lname="Ali";
    s1.stdinfo.dob.day="Monday";
    s1.stdinfo.dob.date=23;
    s1.stdinfo.dob.year=2026;

    int tmp=0;
    for(int i=0;i<5;i++){
        cout<<"Enter marks in "<<i+1<<" Subject";
        cin>>s1.arr[i];
        tmp+=s1.arr[i];
    }
    tmp=(tmp/5);
    s1.avg=tmp;

    if(tmp>25){
        s1.grade='P';
    }else{
        s1.grade='F';

    }
    



    s2.stdinfo.std_id=1;
    s2.stdinfo.fname="Muhammad";
    s2.stdinfo.lname="Ali";
    s2.stdinfo.dob.day="Monday";
    s2.stdinfo.dob.date=23;
    s2.stdinfo.dob.year=2026;

    int tmp1=0;
    for(int i=0;i<5;i++){
        cout<<"Enter marks in "<<i+1<<" Subject";
        cin>>s2.arr[i];
        tmp+=s2.arr[i];
    }
    tmp1=(tmp1/5)*100;
    s2.avg=tmp1;

    if(tmp1>50){
        s2.grade='P';
    }else{
        s2.grade='F';

    }



    cout<<"--------_Course REPORT_----------\n";

    cout<<s1.stdinfo.fname<<" "<<s1.stdinfo.lname<<" "<<s1.stdinfo.dob.day<<" "<<s1.stdinfo.dob.date<<" "<<s1.stdinfo.dob.year<<endl;

    cout<<"Score in each Subject: "<<endl;
    for(int i=0;i<5;i++){

        cout<<i+1<<" : "<<s1.arr[i]<<endl;

    }

    cout<<"Grade: "<<s1.grade<<endl;
    cout<<"Avg Score: "<<s1.avg;



    // similarly outpuot for second instance
}