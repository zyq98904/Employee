#include<iostream>
#include"employee.h"

void SalariedEmployee::output(int m){
	cout<<"Employee type:SalariedEmployee" <<endl;
	cout<<"Employee name:"<<SalariedEmployee::GetName()<<endl;
	cout<<"Employee ID:"<<SalariedEmployee::GetID()<<endl;
	if(m==month){
		cout<<"Happy birthday!\n";
	cout<<"Employee salary:"<<SalariedEmployee::GetSalary()+100<<endl;
	}
	else
	cout<<"Employee salary:"<<SalariedEmployee::GetSalary()<<endl;
}
void HourlyEmployee::output(int m){
	cout<<"Employee type:HourlyEmployee" <<endl;
	cout<<"Employee name:"<<HourlyEmployee::GetName()<<endl;
	cout<<"Employee ID:"<<HourlyEmployee::GetID()<<endl;
	if(m==month){
		cout<<"Happy birthday!\n";
	cout<<"Employee salary:"<<HourlyEmployee::GetSalary()+100<<endl;
	}
	else
	cout<<"Employee salary:"<<HourlyEmployee::GetSalary()<<endl;
}
void CommissionEmployee::output(int m){
	cout<<"Employee type:CommissionEmployee" <<endl;
	cout<<"Employee name:"<<CommissionEmployee::GetName()<<endl;
	cout<<"Employee ID:"<<CommissionEmployee::GetID()<<endl;
	if(m==month){
		cout<<"Happy birthday!\n";
	cout<<"Employee salary:"<<CommissionEmployee::GetSalary()+100<<endl;
	}
	else
	cout<<"Employee salary:"<<CommissionEmployee::GetSalary()<<endl;
}
void CommissionEmployee::getsale(int s){
	Salesvolume=s;
}
void BasePlusCommissionEmployee::output(int m){
	char a;
	cout<<"Employee type:BasePlusCommissionEmployee" <<endl;
	cout<<"Employee name:"<<BasePlusCommissionEmployee::GetName()<<endl;
	cout<<"Employee ID:"<<BasePlusCommissionEmployee::GetID()<<endl;
	cout<<"Please choose whether to increase his salary?(y/n)\n";
	cin>>a;
	if(m==month){
		cout<<"Happy birthday!\n";
		if(a=='Y'||a=='y'){
	cout<<"Employee salary:"<<(BasePlusCommissionEmployee::GetSalary()+100)*1.1<<endl;
	}
	else
	cout<<"Employee salary:"<<BasePlusCommissionEmployee::GetSalary()+100<<endl;
	}
	else{
		if(a=='Y'||a=='y'){
			cout<<"Employee salary:"<<BasePlusCommissionEmployee::GetSalary()*1.1<<endl;
		}
	cout<<"Employee salary:"<<BasePlusCommissionEmployee::GetSalary()<<endl;
	}
}

void BasePlusCommissionEmployee::getsale(int s){
	Salesvolume=s;
}

