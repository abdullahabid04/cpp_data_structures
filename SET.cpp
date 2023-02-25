#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	typedef set< double less<double> > DoubleSet;
	const int size = 10;
	double array[size] = {1.1,2.2,3.3,4.4,5.5};
	
	DoubleSet doubleset(array,array + size);
	ostream_iterator<double> output(cout," ");
	
	cout<<"doubleset contains : ";
	copy(doubleset.begin(),doubleset.end(),output);
	
	pair< DoubleSet::const_iterator,bool > pairs;
	
	pairs = doubleset.insert(6.6);
	cout<<endl<<*(pairs.first)<<(pairs.second ? " was " : " was not ")<<"inserted"<<endl;
	cout<<"doubleset contains : ";
	copy(doubleset.begin(),doubleset.end(),output);
	
	pairs = doubleset.insert(1.1);
	cout<<endl<<*(pairs.first)<<(pairs.second ? " was " : " was not ")<<"inserted"<<endl;
	cout<<"doubleset contains : ";
	copy(doubleset.begin(),doubleset.end(),output);
	
	return 0;
}
