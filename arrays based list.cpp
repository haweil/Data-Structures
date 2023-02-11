#include <iostream>
#include <cassert>
using namespace std;
class arraylist // ��� ���� ����� ���� ���� ����� 
{
    int* arr; // ��� ����� ������ ������ 
    int count; // ��� ����� ����� ���� ���� ��� ���� ����� �� ������ 
    int maxsize; // ��� �� ����� ������ ���� ������ 
public:
    arraylist(int s) // �� ����������� ����� ��� ������ 
    {
        if (s < 0) // ��� ���� �� ������ ��� ���� ��� �� 0 ����� ���� 10 
        {
            maxsize = 10;
        }
        else
        {
            maxsize = s; // ��� ������ ���� ������ ������ ���� ������ ���� 
        }
        count = 0; // ���� ������ ������� = 0 
        arr = new int[maxsize]; // ���� ����� ���� ����� ����� ������ ���� 
    }
    // ��� ����� ����� �� ������ ������ ����� ��� �� 
    bool isempty()
    {
        return count = 0; // �� ������� ����� 0 ���� ����� 
    }
    // ���� ����� ������ ������ ������ ��� ��
    bool isFull()
    {
        return count == maxsize; // ��� ����� ������� = ������ ����
    }
    // ���� ����� ����� ��� ������� �� ���� ���� 
    void insertAtpos(int pos, int element) // ����� ����� ����� ������ �������
    {
        if (isFull()) // ������ ������ ������ ���� ��� �� ����� 
        {
            cout << "array is full";
        }
        else if (pos<0 || pos>count) // ��� ������ ���� �� ������ ��� ���� ��� �� ����� �� ���� �� ��� ������ 
        {
            cout << "Out of the range";
        }
        else // ��� ����� �������
        {
            for (size_t i = count; i > pos; i--)  // ����� ��� ��� ��� ��� ����� ������ ���� 
            {
                arr[i] = arr[i] - 1; // ��� ����� ���� ���� 
            }
            arr[pos] = element; // ��� ����� ������ �� ����� 
            count++; // ���� ����� ������� �  ���� ���� ������ ���� �����
        }
    }
    // �� ����� ����� �� ���� ���� 
    void removeatpos(int pos)
    {
        if (isempty()) // ������ ������ ����� ��� �� ����� 
        {
            cout << "List is full";
        }
        else if (pos<0 || pos>count) // ��� ������ ���� �� ������ ��� ���� ��� �� ����� �� ���� �� ��� ������ 
        {
            cout << "Out of the range";
        }
        else
        {
            for (size_t i = pos; i < count; i++) // ��� ����� ��� ��� ����� �� ������ ���� �������� ������ 
            {
                arr[i] = arr[i] + 1; // ��� 
            }
            count--;
        }
    }
    // ��� ����� ������� �� ��� ���� �� ������ 
    void insertatend(int element)
    {
        if (isFull()) // ������ ������ ������ ���� ��� �� ����� 
        {
            cout << "array is full";
        }
        else
        {
            arr[count] = element; // ��� ������ ������� ������� ��� ���� ������� ������ ��� ��� ���� �� ������
            count++;
        }

    }
    // ��� ����� ����� 
    int search(int element)
    {
        for (size_t i = 0; i < count; i++) // ����� ��� ��� ��� ��� ����� ������ ���� 
        {
            if (arr[i] == element) // �� ����� ��� �� ���� ������ ������� ����� 
                return i;

        }
        return -1; // �� ����� ���� ����
    }
    // �� ����� �� ���� ���� ���� ����� ��� ��� ���� �� �����
    void insertNodublicate(int element)
    {
        if (search(element) == -1) // �������� ���� ����� ���� ������ ����� ��� �� �� �� ����� ����� ������
        {
            insertatend(element); //��� �������� ���� ������� 
        }
        else
        {
            cout << "The element is here ";
        }
    }
    // ��� �� ����� ���� ���� ����� ����
    void updateat(int pos, int element) //��� ���� ����� ������ �������
    {
        if (pos<0 || pos>count) // ��� ���� �� ������ ���� �� �����
        {
            cout << "out of range";
        }
        else
            arr[pos] = element; // ���� ������ ������ ������� ������
    }
    // �� ����� ������� ���� �������
    void getelement(int pos) //��� ���� ����� ������ 
    {
        if (pos<0 || pos>count) // ��� ���� �� ������ ���� �� �����
        {
            cout << "out of range";
        }
        else
            arr[pos]; // ���� ����� ������ 
    }
    // ��� ����� ��� �� �� �����  �� ��������
    void clear()
    {
        count = 0;
    }
    // ��� ����� ��� ������ ���� 
    ~arraylist()
    {
        delete[]arr;
    }
    // �� ����� ������� 
    void print()
    {
        for (int i = 0; i < count; i++) // ��� ��� ���� ��� �� �������
            cout << arr[i] << " "; // ��� ����� ������ �� ���
        cout << endl;
    }

};

int main()
{

    arraylist arr1(10);
    arr1.insertAtpos(0,10);
    arr1.insertAtpos(1,20);
    arr1.insertAtpos(2,30);
    arr1.insertAtpos(3,40);
    arr1.insertAtpos(4,50);
    arr1.insertNodublicate(40);
    arr1.print();

}

