#pragma once
#include "Library.h"

class ExclusionProirityQueue
{
	string* data; // очередь
	int* priorities; //приоритет
	int max_count; // максимальный размер очереди
	int real_count; // текущий рамер очереди

public:
	ExclusionProirityQueue(unsigned int max_count);
	~ExclusionProirityQueue();
	void Clear();
	bool IsEmpty() const;
	bool IsFull() const;
	int GetCount() const;
	void Enqueue(string value, int priority);
	string Dequeue();
	void Print() const;
};



