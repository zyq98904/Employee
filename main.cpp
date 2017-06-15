#include <iostream>
#include<vector>
#include"employee.h"
#include<string>
#include<stdlib.h>

int main ()
{
	int i=0; 
	string name;
	int ID;
	int month;
	int m;
	int n;
	cout<<"Please choose the type of employee:\n";
	cout<<"1.周薪雇员 2.时薪雇员 3.佣金雇员 4.带底薪佣金雇员\n";
	cin>>i;
	
	vector<SalariedEmployee*>s;
	vector<HourlyEmployee*>h;
	vector<CommissionEmployee*>c;
	vector<BasePlusCommissionEmployee*>b; 
	
	cout<<"what time is it today?please input the month\n";
	cin>>n;
	Date a(2017,n,8);
	m=a.month;
	switch(i)
	{
		case 1:
			cout<<"Please input the employee's name,ID,month:\n";
			cin>>name;
			cin>>ID; 
			cin>>month;
			s.push_back(new SalariedEmployee(name,ID,month));
			cout<<"The employee's information is:\n";
			for(int j=0;j<s.size();j++)
			{
				s[j]->output(m);
			}
			break;
		case 2:
			cout<<"Please input the employee's name,ID,month:\n";
			cin>>name;
			cin>>ID; 
			cin>>month;
			h.push_back(new HourlyEmployee(name,ID,month));
			cout<<"The employee's information is:\n";
			for(int j=0;j<h.size();j++)
			{
				h[j]->output(m);
			}
			break;
		case 3:
		cout<<"Please input the employee's name,ID,month:\n";
			cin>>name;
			cin>>ID; 
			cin>>month;
			c.push_back(new CommissionEmployee(name,ID,month));
			cout<<"The employee's information is:\n";
			for(int j=0;j<c.size();j++)
			{
				c[j]->output(m);
			}
			break;
		case 4:
			cout<<"Please input the employee's name,ID,month:\n";
			cin>>name;
			cin>>ID; 
			cin>>month;
			b.push_back(new BasePlusCommissionEmployee(name,ID,month));
			cout<<"The employee's information is:\n";
			for(int j=0;j<b.size();j++)
			{
				b[j]->output(m);
			}
			
			break;
	}
	
	
	
	return 0;
}
