#include "Queue.h"

int main()
{
	setlocale(0, "UKR");

	ExclusionProirityQueue q(25);

	q.Enqueue("����������", 2);
	q.Print();
	q.Enqueue("����������� ���������", 1);
	q.Print();
	q.Enqueue("��������� ����� ������������", 5);
	q.Print();
	q.Enqueue("��������������", 4);
	q.Print();
	q.Enqueue("�������", 3);
	q.Print();
	
}