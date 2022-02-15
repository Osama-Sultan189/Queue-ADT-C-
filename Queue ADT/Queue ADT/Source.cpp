#include"Queue.h"
#include"queue.cpp"
int main()
{

	Queue<double> q;
	q.enQueue(1);
	q.showStructure();
	q.enQueue(2);
	q.showStructure();
	q.enQueue(3);
	q.enQueue(4);
	q.showStructure();
	q.deQueue();
	q.showStructure();
	q.enQueue(5);
	q.enQueue(6);
	q.deQueue(); //1 element nikal gya
	q.showStructure();
	q.enQueue(7);
	q.enQueue(8);
	q.showStructure();
	q.enQueue(9);
	q.enQueue(10);
	q.enQueue(4);
	q.enQueue(6);
	//q.deQueue();
	q.showStructure();
}