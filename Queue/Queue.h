#pragma once
#include "Library.h"

class ExclusionProirityQueue
{
	string* data; // �������
	int* priorities; //���������
	int max_count; // ������������ ������ �������
	int real_count; // ������� ����� �������

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



