#include<iostream>
#include<map>
using namespace std;

int main()
{
	typedef map< int,double,less<int> > Mid;
	Mid pairs;
	
	pairs.insert(Mid::value_type(5,1.1));
	pairs.insert(Mid::value_type(10,2.2));
	pairs.insert(Mid::value_type(15,3.3));
	pairs.insert(Mid::value_type(20,4.4));
	pairs.insert(Mid::value_type(25,5.5));
	pairs.insert(Mid::value_type(30,6.6));
	pairs.insert(Mid::value_type(35,7.7));
	pairs.insert(Mid::value_type(15,8.8));
	pairs.insert(Mid::value_type(20,9.9));
	pairs.insert(Mid::value_type(25,0.0));
	
	cout<<"Pairs contains : \nKey\tValue\n";
	
	Mid::const_iterator iter;
	
	for(iter = pairs.begin();iter != pairs.end();++iter)
	{
		cout<<iter->first<<'\t'<<iter->second<<endl;
	}
	
	pairs[40] = 10.10;
	pairs[45] = 11.11;
	pairs[50] = 12.12;
	
	cout<<"After subscript operations Pairs contains : "<<endl;
	cout<<"Key\tValue\n";
	
	Mid::const_iterator new_iter;
	
	for(new_iter = pairs.begin();new_iter != pairs.end();++new_iter)
	{
		cout<<new_iter->first<<'\t'<<new_iter->second<<endl;
	}
	
	return 0;	
}
