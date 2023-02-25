#include<iostream>
#include<map>

using namespace std;

int main()
{
	typedef multimap< int,string,less<int> >new_multimap;
	new_multimap pairs;
	
	int people;
	int age;
	string name;
	
	cout<<"Enter number of people : ";
	cin>>people;
	cout<<endl;
	
	for(int i = 0;i<=people;i++)
	{
		cout<<"\nEnter age : ";
		cin>>age;
		cout<<"\nEnter name : ";
		cin>>name;
		pairs.insert(new_multimap::value_type(age,name));
	}
	
	cout<<"\nName\tAge\n";
	
	new_multimap::const_iterator iter;
	
	for(iter = pairs.begin();iter != pairs.end();++iter)
	{
		cout<<iter->second<<"\t\t"<<iter->first<<endl;
	}
}
