#include<iostream>
using namespace std;

class student{
private:
 int id;
 string name;
 int age; 
 string course;
 string email;
 string city;
 string college;

 public:
   void setdata(int id,string name,int age,string course,string email,string city,string college){


  	
  } 

 void getdata(){
 	
 	cout << "the detail of student is " << endl;
 	cout << "ID :- " << this->id
 }
};



int main(){
	
	student s1,s2,s3,s4,s5;
	
	
	s1.setdata(1,"prerin",89,"c","preringajera@gmail","surat","SDJ");
	
	s1.getdata();
}
