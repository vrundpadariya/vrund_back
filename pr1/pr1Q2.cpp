//WAP to create a class to read and add two times.


#include<iostream>
using namespace std;

class time{
	public:
	int hours;
	int min;
	int sec; 
	};
	
	int main (){

	time t1,t2,sum;
	 int ex1,ex2;
        cout << "Enter the time 1" << endl;	
		cout << "Enter the hours ";
		cin >> t1.hours;
		cout << "Enter the min ";
		cin >> t1.min;
		cout << "Enter the sec ";
		cin >> t1.sec;
		
		cout << "Enter the detail of height 2 " << endl;	
		cout << "Enter the feet ";
		cin >> t2.hours;
		cout << "Enter the inch ";
		cin >> t2.min;
		cout << "Enter the sec ";
		cin >> t2.sec;
		
		
		 sum.hours= (t1.hours+t2.hours);
		 sum.min = (t1.min+t2.min);
		 sum.sec = (t1.sec+t2.sec);
		
		if(sum.min > 60){
		ex1 = sum.min/60;
		
		sum.hours += ex1;
		sum.min -= (ex1 * 60);	
			
		}
		if(sum.sec > 60){
		ex2 = sum.sec/60;
		
		sum.min += ex2;
		sum.sec -= (ex2 * 60);	
			
		}
		
		cout << "distance between is " << endl;
		cout << "hours " << sum.hours << endl;
		cout << "min " << sum.min << endl;
		cout << "sec " << sum.sec << endl;
		return 0;
	}
	
