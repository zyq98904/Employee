#ifndef EMPLOYEE
#define EMPLOYEE
#include<iostream>
#include<string>
using namespace std;
class employee {
	public:
		//根据员工的名字和id构造员工对象
		employee(string name,int id,int month): name(name),id(id),month(month){};
		virtual int GetSalary() const {return 0;};//获取员工工资
		string GetName() const { return name;};  //使外界得到员工姓名
		int GetID()const{return id;};
	protected:
		string name;//员工姓名
		int id;//员工ID 
	    int year;//员工出生年份 
		int month;//员工出生月份 
		int day;//员工生日期
};
class SalariedEmployee:public employee{
	public:
	SalariedEmployee(string name,int id,int month):employee(name,id,month){};
	virtual int GetSalary() const { return 500;};  //每周固定工资500 
	public:
	void output(int m); 
};
class HourlyEmployee:public employee{
	public: 
	HourlyEmployee(string name,int id,int month):employee(name,id,month){};
	virtual int GetSalary() const {
	if(hours<40)
	return hours*2.5;
	else 
	return 100+(hours-40)*2.5*1.5;
	};
	public:
	void output(int m); 
	protected:
		int hours;
	
};
class CommissionEmployee:public employee{
	public:
		CommissionEmployee(string name,int id,int month):employee(name,id,month){};
		virtual int GetSalary() const { return Salesvolume*2.5 ;};//假设佣金为2.5 
		void getsale(int s);
		void output(int m); 
	protected:
		int Salesvolume;
	
	};
class BasePlusCommissionEmployee:public employee{
	public:
		BasePlusCommissionEmployee(string name,int id,int month):employee(name,id,month){};
		virtual int GetSalary() const { return Salesvolume*2.5+500 ;};//底薪为500 
	public:
		void output(int m); 
		void getsale(int s);
	protected:
		int Salesvolume;
	}; 
class Date{
	public:
		int year;
		int month;
		int day;
	public:
		Date();
		Date(int a,int b,int c)
		{
			year=a;
			month=b;
			day=c;
		}
		void output(); 
}; 

#endif
