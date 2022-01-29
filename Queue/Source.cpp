#include "Queue.h"

int main()
{
	setlocale(0, "UKR");

	ExclusionProirityQueue q(25);

	q.Enqueue("пенсионеры", 2);
	q.Print();
	q.Enqueue("медицинские работники", 1);
	q.Print();
	q.Enqueue("работники сферы обслуживания", 5);
	q.Print();
	q.Enqueue("военнослужащие", 4);
	q.Print();
	q.Enqueue("учителя", 3);
	q.Print();
	
}