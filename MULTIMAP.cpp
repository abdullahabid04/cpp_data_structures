#include<iostream>
#include<map>
using namespace std;

int main()
{
	typedef multimap< int,double,less<int> > Mmid;
	
	Mmid pairs;
	
	cout<<"There are currently "<<pairs.count(15)<<" pairs with key 15 in multimap"<<endl;
	
	pairs.insert(Mmid::value_type(15,2.5));
	pairs.insert(Mmid::value_type(15,1.3));
	
	cout<<"After inserts there are currently "<<pairs.count(15)<<" pairs with key 15 in multimap"<<endl;
	
	pairs.insert(Mmid::value_type(10,3.5));
	pairs.insert(Mmid::value_type(20,4.5));
	pairs.insert(Mmid::value_type(30,5.5));
	pairs.insert(Mmid::value_type(40,6.5));
	pairs.insert(Mmid::value_type(50,7.5));
	pairs.insert(Mmid::value_type(60,8.5));
	
	cout<<"Multimap pairs contains : \nKey\tValue\n"<<endl;
	
	Mmid::const_iterator it;
	for(it = pairs.begin();it != pairs.end();++it)
	{
		cout<<it->first<<'\t'<<it->second<<endl;
	}
	
	return 0;
}
