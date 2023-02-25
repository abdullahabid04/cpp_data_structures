#include<iostream>
#include<map>

using namespace std;

int main()
{
	typedef map< int,string,less<int> >new_map;
	new_map pairs;
	
	int total_students;
	int roll_no;
	string name;
	
	cout<<"Enter number of students : ";
	cin>>total_students;
	cout<<endl;
	
	for(int i = 0;i<=total_students;i++)
	{
		cout<<"\nEnter roll number : ";
		cin>>roll_no;
		cout<<"\nEnter name : ";
		cin>>name;
		pairs.insert(new_map::value_type(roll_no,name));
	}
	
	cout<<"\nRoll number\tName\n";
	
	new_map::const_iterator iter;
	
	for(iter = pairs.begin();iter != pairs.end();++iter)
	{
		cout<<iter->first<<"\t\t"<<iter->second<<endl;
	}
}
