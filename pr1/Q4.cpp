#include <iostream>
using namespace std;


class room{
public:
    int l;
    int b;
    int h;
    
};

class address {
	int hno;
	char add[500];	
	char cty[30];
	char state[30];
	public : 
};
 
int main(){
   
  room r1;
  address a1;
  
  cout << "Enter detail of room"<< endl;
  cout << "Length";
  cin >> r1.l;
  cout << "breath";
  cin >> r1.b;
  cout << "height";
  cin >> r1.h;
  
  cout << "Enter detail of house"<< endl;
  cout << "house no";
  cin >> a1.hno;
  cout << "address ";
  cin >> a1.add;
  cout << "Enter the city";
  cin >> a1.city;
  
  
 
   
  
    return 0;
}
