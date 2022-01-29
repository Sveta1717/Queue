
#include "Queue.h"


ExclusionProirityQueue:: ExclusionProirityQueue(unsigned int max_count)
	{
		this->max_count = max_count;
		data = new string[max_count];
		priorities = new int[max_count];
		real_count = 0;
	}

ExclusionProirityQueue:: ~ExclusionProirityQueue()
	{
		if (data != nullptr) delete[] data;
		if (priorities != nullptr) delete[] priorities;
	}

	void ExclusionProirityQueue::Clear()
	{
		real_count = 0; 
	}

	bool ExclusionProirityQueue::IsEmpty() const
	{
		return real_count == 0;
	}

	bool ExclusionProirityQueue::IsFull() const
	{
		return real_count == max_count;
	}

	int ExclusionProirityQueue::GetCount() const
	{
		return real_count;
	}	
	
	void ExclusionProirityQueue::Enqueue(string value, int priority)
	{
		if (!IsFull())
		{
			data[real_count] = value;
			priorities[real_count] = priority;

			real_count++;			

			for (int i = 0; i < real_count; i++)
			{
				for (int j = real_count - 1; j > 0; j--)
				{
					if (priorities[j - 1] > priorities[j])
					{
						int tmp = priorities[j];
						priorities[j] = priorities[j - 1];
						priorities[j - 1] = tmp;

						string result = data[j];
						data[j] = data[j - 1];
						data[j - 1] = result;
					}
				}
			}
		}
		else
		{
			throw "Queue is full!";
		}
	}

	string ExclusionProirityQueue::Dequeue()
	{
		if (!IsEmpty())
		{
			int max_priority = priorities[0];
			int max_priority_position = 0;

			for (int i = 1; i < real_count; i++)
			{
				if (max_priority < priorities[i])
				{
					max_priority = priorities[i];
					max_priority_position = i;
				}
			}

			string result = data[max_priority_position];

			for (int i = max_priority_position; i < real_count - 1; i++)
			{
				data[i] = data[i + 1];
				priorities[i] = priorities[i + 1];
			}

			real_count--;
			return result;
		}
		else
		{
			throw "Queue is empty!";
		}
	}	

	void ExclusionProirityQueue::Print() const
	{
		cout << "\tОчередь на вакцинацию.\n";
		cout << "-----------------------------------------------------\n";
		for (int i = 0; i < real_count; i++)
		{			
			cout << i + 1 << ") " << data[i] << "\n";
			cout << "-----------------------------------------------------\n";
		}
	}

