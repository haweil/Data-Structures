#include <iostream>
#include <string>
using namespace std;
// ����� ��� ������� 
const int(max_size) = 100;
// �� ���� ����� ������ ������ ���� �������� �������
template <class t>
class stack {
	// �� ����� ���� ������� ����� ������ ��� ������� 
	int top;
    // �� ����� ��� ������� ���� �� ���� ��� 
	t item[max_size];
   public :
		// �� ����������� ���� ��� ���� ����� � -1 
	   stack() :top(-1) {}
	// �� ���� ������ ���� ������� ���� ��� �� 
	bool isEmpty ()
	{
		return top < 0;
	}
	// �� ���� ������� ������� 
	void push(t element)
	{
		// ��� ���� ��� �� ���� ������ ��� �� ������� �� �����
	    if (top > max_size - 1) // 0-99 
		{
			cout << "stack is full on push";
		}
		else
		{
			top ++; // ���� ����� ����� 0 ��� ��� ����� ����� ��� 
			item [top] = element; // ��� ������� ���� �� ����� ������ ������ ���� ������  
		}
	}
	// �� ���� ����� ������� ���� ����� ����� �� ��� ���� ��� ���� ������ �� ���� ������
	void pop ()
	{
		// ����� ���� ����� ���� ����� �� ������� �� ����
		if (isEmpty()) {
			cout << "stack is empty on pop";
		}
		else
		{
			top--; // ����� ���� ����� ���� ����� �� ���� ����� ������
		}
	}
	void pop(t&element) // ��������� ��� ���� ���� ���� ���� ���� �� �������� ������ ��� �� ���� ��& ������ ��� ���� ���� � 0 ������ ��� ����� ����� 0
	{
		if (isEmpty()) 
		{
			cout << "stack is empty on pop";
		}
		else
		{
			element = item[top]  ;
			top--;
		}
	}
	void getTop(t&stackTop) // ��������� ��� ���� ���� ���� ���� ���� �� �������� ������ ��� �� ���� ��& ������ ��� ���� ���� � 0 ������ ��� ����� ����� 0
	{
		// ������� ����� ���� ����� ��� ������ ����� ��� �� ���� 
		if (isEmpty())
		{
			cout << "stack is empty on gettop";
		}
		else
		{
			stackTop = item[top]; //������ ���� ����� ���� �� ��� ���� ��� ��� ������ ������� � ���� ������ ���
			cout << stackTop <<endl; // �� ��� ����� ������ �� 
		}
	}
	void print() // �� ���� ������� ��� ����� ������� 
	{
		cout << "[";
		for (int i = top; i >= 0; i--) 
		{
			cout << item[i] << " ";
		}
		cout << "]";
		cout << endl;
	}
};

int main()
{
	stack <int>s;
	s.push(5);
	s.push(8);
	s.push(10);
	int y = 0;
	s.getTop(y);
	s.pop();
	s.print();
}

