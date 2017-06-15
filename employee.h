#ifndef EMPLOYEE
#define EMPLOYEE
#include<iostream>
#include<string>
using namespace std;
class employee {
	public:
		//����Ա�������ֺ�id����Ա������
		employee(string name,int id,int month): name(name),id(id),month(month){};
		virtual int GetSalary() const {return 0;};//��ȡԱ������
		string GetName() const { return name;};  //ʹ���õ�Ա������
		int GetID()const{return id;};
	protected:
		string name;//Ա������
		int id;//Ա��ID 
	    int year;//Ա��������� 
		int month;//Ա�������·� 
		int day;//Ա��������
};
class SalariedEmployee:public employee{
	public:
	SalariedEmployee(string name,int id,int month):employee(name,id,month){};
	virtual int GetSalary() const { return 500;};  //ÿ�̶ܹ�����500 
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
		virtual int GetSalary() const { return Salesvolume*2.5 ;};//����Ӷ��Ϊ2.5 
		void getsale(int s);
		void output(int m); 
	protected:
		int Salesvolume;
	
	};
class BasePlusCommissionEmployee:public employee{
	public:
		BasePlusCommissionEmployee(string name,int id,int month):employee(name,id,month){};
		virtual int GetSalary() const { return Salesvolume*2.5+500 ;};//��нΪ500 
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
