#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string data=" ";
	ifstream is;
	is.open("message.txt");
	is>>data;
	cout<<data<<endl;
	return 0;
}
