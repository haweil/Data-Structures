#include <iostream>
#include <algorithm>
using namespace std; 
void selectionsort(int arr [],int n)
{
	int min; // ����� ����� ��� ��� ���� �� min
	                           // 0  1  2  3  4  5
	for (int i = 0; i < n-1; i++)// 60 40 50 30 20 10
	{
		min = i; // ��� ����� ���� ���� ��� ���� 
		for (int j = i + 1; j < n; j++) // �� ��� ��� ����� �� �� ������� ��� 1 ��� ������� ���� ��� ��� ����� ����� ��� ����� ��� ����� ������
			if (arr[j] < arr[min]) // ����� ������ ���� ��� ������� ���� �������� 1 ������ �������� ����� �������� ���� ��� �� ������ ����
				min = j; 
			 swap (arr[min],arr[i]); // ��� ����� ����� ����� ��� ������� ���� ����� ��� ����� ��� ������� �� �� ��� 
	}
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
	int arr[] = { 60, 40, 50, 30, 10,20 };
	int n = sizeof(arr) / sizeof(arr[0]);//6*4=24  /  4
	selectionsort(arr, n);
	cout << "Array After Selection Sort : \n";
	print(arr, n);

	return 0;
}
