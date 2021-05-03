#include<iostream>
#include<string>
using namespace std;


//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			cout<<" ";
//			if(j!=i){
//				cout<<"x";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//
//class Student{
//	public:
//		int id;
//		float salary;
//		string name;
//};
//
//int main(){
//	Student s1;
//	s1.id=201;
//	s1.name="nana";
//	cout<<s1.id<<endl;
//	cout<<s1.name<<endl;
//	return 0;
//}

//class Student{
//	public:
//		int id;
//		string name;
//		
//		void insert(int i,string n)
//		{
//			id=i;
//			name=n;
//		}
//		void display()
//		{
//			cout<<id<<' '<<name<<endl;
//		}
//};
//int main(void){
//	Student s1;
//	Student s2;
//	s1.insert(202,"nana");
//	s2.insert(203,"baf");
//	s1.display();
//	s2.display();
//			return 0;
//}


//class Employee{
//	public:
//		
//	int id;
//	string name;
//	float salary;
//	
//	Employee(int id,string name,float salary)
//	{
//		this->id=id;
//		this->name=name;
//		this->salary=salary;
//	}
//	void display(){
//		cout<<id<<" "<<name<<" "<<salary<<endl;
//	}
//};
//int main(void){
//	Employee e1(101,"konadu",3000);
//	Employee e2(105,"baffour",100000);
//	e1.display();
//	e2.display();
//}

int main(){
	int odd=0;
	int number= 1;
	int even=0;
	int positive=0;
	int negative=0;
	
	while(number!=0){
		cout<<"Enter a Number: ";
		cin>>number;
		cout<<number;
		cout<<endl;
		
		if((number!=0)&&(number%2)==0){
			even=(even+1);
		}
		if((number %2)==1){
			odd=(odd+1);
		}
		if(number<0){
			negative=(negative+1);
		}
		if(number>0){
			positive=(positive+1);
		}
	}
	cout<<even;
	cout<<" even numbers";
	cout<<endl;
	cout<<odd;
	cout<<" odd numbers";
	cout<<endl;
	cout<<negative;
	cout<<"negative numbers";
	cout<<endl;
	cout<<positive;
	cout<<"positive numbers";
	cout<<endl;
	}
