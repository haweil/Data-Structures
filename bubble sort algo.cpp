#include <iostream>
#include <algorithm>
using namespace std;

void bubblesort(int arr[], int n) // �������� ������ ���� ��� ���� ����� ���� ������
{
	bool flag = true; //check the array is sorted or no 
	int c = 0; // �� ������ �� ��� �� ��� ���� ������ ���� ��� ���� ���� ������ �� sorted
	for (int i = 0; i < n - 1; i++) // ����� ��� ��� ��� ��� ����� ������ ���� 
	{
		for (int j = 0; j < n - i - 1; j++) // ������ ���� ���� ������� ������� ���� ���� ����� ��� ��� 
		{
			if (arr[j]>arr[j + 1]) // ��� ������ ������ ������� ���� ���� 
			{
				swap(arr[j], arr[j + 1]); // ����� ����� �� ����� ������ ���� ���� ���� ��� 
				flag = false;
			}
			c++; // �� ����� ���� ����� ��� ��� �� ����� ��� ������ 5 ���� ��� �� ������ ���� �� ����� 
		}
		if (flag == true) // 
			break;

	}
	cout << "# of rounds :" << c << endl;
}
// �� ����� ������� ����� ������� ������ ������� 
void print(int arr[], int size)
{

	for (int i = 0; i < size; i++) // ����� ��� ��� ��� ��� ����� ������ ����� �����
		cout << arr[i] << " ";
	cout << endl;

}

int main()
{
	int arr[] = { 30,20,40,5,60,2 };
	int n = sizeof(arr) / sizeof(arr[0]);//24/4=6
	bubblesort(arr, n);
	cout << "Array After Bubble Sort";
	print(arr, n);
	return 0;
}
