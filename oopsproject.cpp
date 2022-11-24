#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    protected :
    int id;
    char name[20];
    char designation[20];

    public:
    // Employee(int a ,char *b,char *c){
    //     int i;
    //     id=a;
    //     name[i]=b[i];
    //     designation[i]=c[i];
    // }
    Employee(){
        cout<<"******EMPLOYEE DETAILS******";
    }
    ~Employee(){
    }
    void get_Emp_data(){
        cout<<"\n Enter employee ID :";
        cin>>id;
        cout<<"\nEnter employee Name :";
        cin>>name;
        cout<<"\nEnter employee designation :";
        cin>>designation;
    }
    void show_Emp_data(){
        cout<<"\n Employee Id:"<<id;
        cout<<"\n Employee Name :"<<name;
        cout<<"\n Employee desination :"<<designation;
    }


};
class contract:public Employee{
    protected:
    int num_hours;
    int wages_per_hour;
    public:
    void get_contract_data(){
        get_Emp_data();
        cout<<"\nenter the number of hours:";
        cin>>num_hours;
        cout<<"\nenter the wages per hour:";
        cin>>wages_per_hour;

    } 
    void show_contract_data(){
        cout<<"\nNumber of hours worked :";
        cout<<"\n wages per hour";
        cout<<"\nSalary = "<<num_hours*wages_per_hour;

    }
};
class pernament:public Employee{
    protected:
    float basic;
    float TA;
    float DA;
    float HRA;
    public:
    void get_per_data(){
        get_Emp_data();
        cout<<"\nenter the basic pay:";
        cin>>basic;

        cout<<"\nenter the TA:";
        cin>>TA;
        cout<<"\nenter the HRA:";
        cin>>HRA;
        cout<<"\nenter the DA:";
        cin>>DA;
        DA= basic + 0.10*basic;
    }
    float cal_salary(){
        return(basic + TA + DA + HRA);
    }
    void show_per_data(){
        show_Emp_data();
        cout<<"\n SALARY = "<<cal_salary();
    }
};
int main(){
    contract C;
    C.get_contract_data();
    C.show_contract_data();
    pernament P;
    P.get_per_data();
    P.show_per_data();
    return 0;
}
