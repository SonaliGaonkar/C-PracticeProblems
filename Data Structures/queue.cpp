#include <iostream>
#include <queue>

using namespace std;
void print_queue(queue<int> q)
{
	while (!q.empty()) {
		cout << q.front()<<" ";
		q.pop();
	}
	cout << '\n';
}

// Driver Code
int main()
{
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);

	cout << "The first queue is : ";
	print_queue(q1);
	
	queue<int> q2;
	q2.push(4);
	q2.push(5);
	q2.push(6);

	cout << "The second queue is : ";
	print_queue(q2);
	
	return 0;
}