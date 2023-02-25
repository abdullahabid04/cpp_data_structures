#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	typedef multiset< int,less<int> > Ims;
	const int size = 10;
	int array[size] = {5,15,25,35,45,55,65,75,85,95};
	
	Ims integer_multiset;
	ostream_iterator<int> output(cout," ");
	
	int number = 10;
	
	cout<<"There are currently "<<integer_multiset.count(number)<<" values of 10 in the multiset"<<endl;
	
	integer_multiset.insert(number);
	integer_multiset.insert(number);
	
	cout<<"There are currently "<<integer_multiset.count(number)<<" values of 10 in the multiset"<<endl;
	
	Ims::const_iterator result;
	
	result = integer_multiset.find(number);
	
	if(result != integer_multiset.end())
	{
		cout<<"Found value 15 in the multiset"<<endl;
	}
	
	number = 20;
	result = integer_multiset.find(number);
	
	if(result == integer_multiset.end())
	{
		cout<<"Did not foud value 20"<<endl;
	}
	
	integer_multiset.insert(array,array + size);
	
	cout<<"After insert multiset contains"<<endl;
	copy(integer_multiset.begin(),integer_multiset.end(),output);
	
	number = 25;
	
	cout<<endl<<"Lower bound of 25 : "<<*(integer_multiset.lower_bound(number))<<endl;
	cout<<"Upper bound of 25 : "<<*(integer_multiset.upper_bound(number))<<endl;
	
	pair<Ims::const_iterator,Ims::const_iterator> pairs;
	
	pairs = integer_multiset.equal_range(number);
	
	cout<<"Equal range of 25 : "<<endl<<"lower bound : "<<*(pairs.first)<<endl<<"Upper bound : "<<*(pairs.second)<<endl;
	
	return 0;
}
