//1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
#include<iostream>
using namespace std;

class height{
	public:
	int feet;
	int inch; 
	};
	
	int main (){

	height h1,h2,sum;
	 int ex;
        cout << "Enter the detail of height 1" << endl;	
		cout << "Enter the feet ";
		cin >> h1.feet;
		cout << "Enter the inch ";
		cin >> h1.inch;
		
		cout << "Enter the detail of height 2 " << endl;	
		cout << "Enter the feet ";
		cin >> h2.feet;
		cout << "Enter the inch ";
		cin >> h2.inch;
		
		
		 sum.feet= (h1.feet+h2.feet);
		 sum.inch = (h1.inch+h2.inch);
		
		if(sum.inch > 12){
		ex = sum.inch/12;
		
		sum.feet += ex;
		sum.inch -= (ex * 12);	
			
		}
		
		cout << "distance between is " << endl;
		cout << "Feet " << sum.feet << endl;
		cout << "Inch " << sum.inch << endl;
		return 0;
	}
