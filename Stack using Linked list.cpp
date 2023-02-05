#include <iostream>
#include <string>
using namespace std;
// �� ���� ��� ������ ������ ���� �������� 
template<class t>
// ��� ����� ���� ������� 
class stack 
{
	struct node // �� ������� ���� ���� ��� ����� ���� ������ ���� �� ��� 
	{
		t item; //
		node*next;
	};
	node*top,*cur;
    public:
	stack() 
	{
		top = NULL;
	}
	// ������ ����� ����� �� ������ ���� ��� �����
	bool isEmpty()
	{
			return top == NULL; // �� �� ����� ������ ��� ���� ����� ���� ������� ���� 
	}
	// �� ����� ���� ���� �� ������� 
	void puch(t newitem)
	{
		// ��� ����� ��� ����� ���� ���� ���� ������
		node*newPtr = new node;  
	    // ���� ������ ����� �� �������� ����� ��		
		if (newPtr==NULL)
			cout << "Stack push cannot allocate memory";
		else 
		{
			newPtr->item = newitem; //��� ����� ������ ����  ����� �� ����� 
			newPtr->next = top; // ��� ������ ��� ����� ������ ���� ���� ����� ������� �� ���
			top = newPtr; // ��� ��� ���� ������ ��� ����� ������
		}
	}
	// �� ����� ����� 
	void pop()
	{
		//  ������ �� ������ �� ���� 
		if (isEmpty())
			cout << "Stack empty on pop";
		else
		{
			
			node* temp = top; //����� ������ ���� ����� �����
			top = top->next;// ����� ����� ����� ��� ���� ���� 
			temp = temp->next = NULL;
			delete temp;
		}
	}
	// ��� ����� ����� �� ��� �� �� �� ����� ���� ������ ���� ������ ����� 
	void pop(t&stacktop)
	{
		if (isEmpty())
			cout << "Stack empty on pop";
		else
		{
			stacktop == top->item; // ��� ����� ��� ���� ����� ��� ����� �� ��� 
			node* temp = top;
			top = top->next;
			delete temp;
		}
	}
	// ���  ����� �� ����� ���� ��� ���� �������� ���� �� ����� ��� 
	void getTop(t& stacktop)
	{
		if (isEmpty())
			cout << "Stack empty on getTop";
		else
		{
			stacktop == top->item; // ��� ������ ��� ���� ����� ��� �������
		}
	}
	// �� ����� ������� 
	void display()
	{
		cur = top;
		cout << "items in stack" << endl;
		cout << "[";
		while (cur != NULL) // ������ ����� ��� �� ���� 
		{
			cout << cur->item<< " "; // ��� ����� ������ 
			cur = cur->next; // ��� ������ ����� ������� ���� ���� ���� ����� 
		}
		cout << "]";
	}
};
int main()
{
	stack<int>s;
	s.puch(10);
	s.puch(15);
	s.puch(20);
	s.display();
}