#include <iostream>
#include <string>
#include <cassert>
using namespace std;
// ��� ���� ���� �� ���� ���� ������� 
template <class t>
class arrayQueue
{
	int rear;  // �� ������ ��� ��� ���� �� �����
	int front; // �� ������ ��� ����� ���� ������� ���� ������� ���� ����� ����
	int* arr; // ��� �� ������� ������� �� ����� � ���� 
	int max_size; // �� ���� ���� ��� ����� 
	int count;
public:
	arrayQueue(t size) // �� ����������� ���� ��� ��� ���� ������� ���� ����� �� ���� ���  
	{
		if (size <= 0)
			max_size = 100;
		else
			max_size = size;

		front = 0;

		arr = new int[max_size];
		rear = max_size - 1;
		count = 0;
	}
	// �� ���� ����� �� ����� ���� ��� �� 
	int isEmpty()
	{
		return count == 0; // ��� ������ ���� ��� ���� ���� �� ����� �� �����
	}
	bool isFull()
	{
		return count == max_size; // ��� ������ ��� ����� ���� ���� ����� ����� 
	}
	// �� ����� ������� �� �����
	void addQueue(t element)
	{
		// ��� ���� ������ ����� ���� ��� �����
		if (isFull())
		{
			cout << "queue is full can't add queue";
		}
		else
		{
			rear = (rear + 1) % max_size; // ��� ���� ����� ����� �� ��� ����� ���� ����� ��� ��� ����� ����� ������ �������� �� �� ���
			arr[rear] = element; // ��� ����� ����� ����� ������
			count++; // ��� ����� ������� ���� ���� ���� ��� ���� �����
		}
	}
	// �� ����� �����
	void deleteQueue()
	{
		// ������ ����� ���� ��� �� 
		if (isEmpty())
		{
			cout << "Queue is empty";
		}
		else
		{
			front = front + 1 % max_size; // ��� ���� ���� ������� ���� �� ��� ���� ��� ����� 0 ����� ����� ��� ����� 1 ���� ������ ���� ��� ����� 0 �����
			count--; // ����� ������� ���� ����� �� ������ ����� 
		}
	}
	// �� ����� ���� ���� ��� ���� �� �������
	int getfront()
	{
		assert(!isEmpty()); // ��� ������ �� ����� ���� ��� �� �����
		return arr[front]; // ��� ����� ���� ������� 
	}
	// �� ����� ���� ���� ��� ���� ���
	int getrear()
	{
		assert(!isEmpty()); //��� ������ �� ����� ���� ��� ��
		return arr[rear]; // ��� ����� ���� �����
	}
	// �� ����� ������� 
	void print()
	{
		// ���� ��� �� ������ ���� 
		if (!isEmpty())
		{
			for (size_t i = front; i != rear; i = (i + 1) % max_size) // �� �������� ��� ���� ������ ������ �������� ������ ���� ��� ��� �� ������� ����� 
			{
				cout << arr[i] << " "; // ��� ����� �� ����� �����
			}
			cout << arr[rear]; // ��� ��� ���� ������ ���� ��� ��� ����� ����� �� ������� �����
		}
		else
			cout << "Empty Queue";
	}
	// �� ����� ���� �� ����� ���� ���� ��� ����
	int queueSearch(t item)
	{
		int pos = -1; // �� ��� ����� ����� ��� ���� ������ ����
		if (!isEmpty())
		{
			for (int i = front; i != rear; i = (i + 1) % max_size) // ��� ��� ��� ������� 

				if (arr[i] == item) // ��� �� ������ ������ ���� ����� ����
				{
					pos = i; // ����� ������ �������� ����� �� ��� ���
					break;
				}

			if (pos == -1) // ��� �� ��� �������� -1 ����� ���� ��� ��� ���� ���� �� �����
			{
				if (arr[rear] == item) // �� ��� �� ������ �������� ������ 
					pos = rear;
			}
		}
		else
		{
			cout << "queue is empty";
		}
		return pos;
	}


};
int main()
{
	arrayQueue <int> q1(5);
	q1.addQueue(10);
	q1.addQueue(20);
	q1.addQueue(30);
	q1.addQueue(40);
	q1.addQueue(50);
	q1.print();
	return 0;
}


