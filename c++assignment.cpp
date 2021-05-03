#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;


//int main()
//{
//	string data=" ";
//	ifstream is;
//	is.open("");
//	is>>data;
//	cout<<data<<endl;
//}

struct student{
	int idnumber;
	string name;
	char grade;
	double score;
	char gender;
	int age;
};

int main(){
float sumScore=0;
float sumAge=0;
student info[5];

for(int i=0;i<5;i++)
{
	cout<<"IDNUMBER"<<endl;
	cin>>info[i].idnumber;
	cout<<"NAME"<<endl;
	cin>>info[i].name;
	cout<<"AGE"<<endl;
	cin>>info[i].age;
	sumAge=sumAge+info[i].age;
	cout<<"SCORE"<<endl;
	cin>>info[i].score;
	sumScore=sumScore+info[i].score;
	cout<<"GENDER"<<endl;
	cin>>info[i].gender;
	
	
	
	if(info[i].score >= 80 && info[i].score<=100)
	{
		cout<<"GRADE A"<<endl;
	}else if(info[i].score >=70 && info[i].score<=79 ){
		cout<<"GRADE B"<<endl;
	}else if(info[i].score >=60 && info[i].score<=69 ){
		cout<<"GRADE C"<<endl;
	}else if(info[i].score >=50 && info[i].score<=59 ){
		cout<<"GRADE D"<<endl;
	}else if(info[i].score >=40 && info[i].score<=49 ){
		cout<<"GRADE E"<<endl;
	}else if(info[i].score >=0 && info[i].score<=39 ){
		cout<<"GRADE F"<<endl;
	}
	}

	cout<<setw(6)<<fixed;
	float AvgScore=sumScore/5.0;
	float AvgAge=sumAge/5.0;

	ofstring.outf("student.txt");
	
	cout<<"IDNUMBER " <<"NAME " <<"GRADE " <<"SCORE " <<"GENDER " <<"AGE "<<endl;
	
	cout<<"*******************************************************";
	for(int j=0;j<=5;j++){
		cout<<j<<" "<< " "<<" "<<info[j].idnumber<<" "<<info[j].name<<info[j].age<<info[j].score<<info[j].gender<<endl;
		cout<<"*****************************************************";
	}
	
	outf<<"AVERAGE AGE"<<AvgAge<<end;
	outf<<"AVERAGE SCORE"<<AvgScore<<endl;
	

	return 0;
}

