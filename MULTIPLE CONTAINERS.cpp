#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	int i;
	deque <int> d;
	stack <int> s;
	queue <int> q;
	priority_queue <int> pq;
	cout<<"\nStack\n";
	for(i=1;i<=10;i++)
	{
		s.push(i);
	}
	while(!s.empty())
	{
		cout<<s.top()<<"\t";
		s.pop();
	}	
	cout<<"\nQueue\n";
	for(i=1;i<=10;i++)
	{
		q.push(i);
	}	
	while(!q.empty())
	{
		cout<<q.front()<<"\t";
		q.pop();
	}	
	cout<<"\nPriority Queue\n";
	for(i=1;i<=10;i++)
	{
		pq.push(i);
	}
	while(!pq.empty())
	{
		cout<<pq.top()<<"\t";
		pq.pop();
	}
	cout<<"\nDeque\n";	
	for(i=1;i<=10;i++)
	{
		d.push_back(i);
	}
	while(!d.empty())
	{
		cout<<d.front()<<"\t";
		d.pop_front();
	}
	
	return 0;	
}
