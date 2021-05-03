#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

	
	struct student
	{
		int idnumber;
		string name;
		int age;
		char gender;
		double score;
		char grade;
	};
	
	
	int main()
	{
		struct student st[6][5];
		int i,n;
		cout<<"HOW MANY STUDENTS YOU WANT TO ENTER"<<endl;
		cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cout<<"\nENTER IDNUMBER: ";
		cin>>st[i].idnumber;
		cout<<"\nENTER NAME: ";
		cin>>st[i].name;
		cout<<"\nENTER AGE: ";
		cin>>st[i].age;
		cout<<"\nENTER GENDER: ";
		cin>>st[i].gender;
		cout<<"\nENTER SCORE: ";
		cin>>st[i].score;
		cout<<"\nENTER GRADE: ";
		cin>>st[i].grade;
	}
cout<<"DISPLAYING STUDENT INFO: ";
//cout<<"\n\t IDNUMBER"<<"\t NAME"<<"\tAGE"<<"\t GENDER"<<"\t SCORE"<<\"t GRADE";

for(i=0;i<n-1;i++)
{
	cout<<st[i].idnumber<<st[i].name<<st[i].age<<st[i].gender<<st[i].score<<st[i].grade;
	return 0;
}
	
//	if(grade>= 80 || grade<=100)
//	{
//		cout<<"GRADE A"<<endl;
//	}else if(grade >=70 || grade<=79 ){
//		cout<<"GRADE B"<<endl;
//	}else if(grade >=60 || grade<=69 ){
//		cout<<"GRADE C"<<endl;
//	}else if(grade >=50 || grade<=59 ){
//		cout<<"GRADE D"<<endl;
//	}else if(grade >=40 || grade<=49 ){
//		cout<<"GRADE E"<<endl;
//	}else if(grade >=0 || grade<=39 ){
//		cout<<"GRADE F"<<endl;
//	}
//	return 0;
//}
