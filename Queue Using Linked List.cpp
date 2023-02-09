#include <iostream>
#include <cassert>
using namespace std;
// ��� ���� ��� �� ���� ���� ������� 
template < class t>
 class linkedQueue
{
private : 
	struct Node { // ��� ����� ������� �����
		t item; // ��� ������ ���� ������
		Node* next; // ��� �������� ���� �����
	};
	int count;
		Node *front, *rear; // ��� ������ ������� ������
public :
		linkedQueue() {
		front = NULL; // ���� ������ 
		rear = NULL; // ���� ������ 
		count = 0; // ���� ������� ���� ����� ���� ��� ���� ���
	} 
	bool isEmpty()
	{
		return( count ==0);
	}
	void enequeue(t item)
	{
		Node* newptr = new Node; // ��� ��� ���� ����� ����� ���� ����� ���� 
		newptr->item = item; // ��� ����� ������ ������ �� �����
		newptr->next = NULL; // ��� ���� ������ ����� ��� ���� �����
		if (isEmpty()) // �� ���� �� ��� ����� ���� ��� ����
		{
			rear = front = newptr; // ����� ����� = ������� = ������ ������ ��
		}
		else // ��� �� ����� ������ ����� ����� 
		{
			rear->next = newptr;  // ��� ���� ������ ���� ����� ����� ��� ������
			rear = newptr; // ����� ����� ����� ������� 
		}
		count++; // ��� ���� ���� ���� ��� ��� 
	}
	// ��� ���� �����
	void dequeu()
	{
		if (isEmpty()) // ��� ���� ������ �� ����� ���� ����� 
			cout << "Empty Queue" << endl;
		else if (count == 1) // ��� �� ����� �� ���� ���� �� 
		{
			delete front; // ��� ����� ������� ���� ������ ���� 
			rear = NULL; // ����� ���� ����� = ���� 
			count = 0; // ���� ������ �� � 0 ���� ����� �� ���� ����� 
		}
		// ��� �� ��� ���� �� ���� 
		else
		{
			Node* tempptr = front; // ��� ���� ����� ����� ���� ���� ��� ���� ����� ������� �������� 
			front = front->next; // ����� ������� = ������� ���� ���� 
			delete tempptr; // ���� ����� 
			count--;
		}
	}

	// �� ����� ���� ���� �� ������� ���� �� ����� 
	void clearQueue()
	{
		Node* current;

		while (front != NULL)
		{
			current = front;
			front = front->next;
			delete current;
		}
		rear = NULL;
		count = 0;
	}
	// �� ����� ������� 
	void print()
	{
		Node* cur = front; // ����� ����� ���� ����� ������� 
		cout << " item in queue { ";
		while (cur != NULL) // ����� �� ������� �� ��� ������ ��� ����
		{
			cout << cur->item<<" "; // ����� ������� �� ��� 
			cur = cur->next; // ���� ������� ����� ��� ���� ���� ��� �� ���� � nll
		}
		cout << "}" << endl;
	}
	// �� ����� �� ����� ��� ���� 
	void search(t item)
	{
		Node* cur = front; // ����� ����� ���� ����� ��� ������� ���� �������� �������� 
		bool flag = true;  // �� ���� ����� ������� ��� �� ����� ����� 
		while (cur != NULL) // ��� ����� ����� ����� �� ������� ������� ���� �����
		{
			if (cur->item == item) // ��� �� ������� ���� ������ ���� ������� 
			{
				cout << item << " found"; // ���� �� ������� 
				flag = false; // ���� ���� ������ ����� ���� ���� �� 
				break; // ���� ����� 
			}
			cur = cur->next; // �� ���� �� ������� �� ��� ��� ���� ��� ������ ���� ���� 

		}
		if (flag) // ��� �� ������� ������ ������ ����� � ���
		{
			cout << "item not found"; // ���� �� ������ �� �����
		}
	}
	
};
int main()
{
	linkedQueue <int> q1;
	q1.enequeue(5);
	q1.enequeue(6);
	q1.enequeue(8);
	q1.enequeue(9);
	q1.enequeue(10);
	q1.print();
	q1.dequeu();
	q1.print();
	q1.search(8);
	
}