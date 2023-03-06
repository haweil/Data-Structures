#include <iostream>
#include <algorithm>
using namespace std;
void insertionsort(int arr[], int n)
{
	 int key, j;                //  0  1  2  3  4  5  6
	for (int i = 1; i < n; i++) // 80 90 60 30 50 70 40
	{
		key = arr[i];// 90 || i = 2//60
		j = i - 1; // 0 || j = 1
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key; // 90 || i=2 

	}
}
// ÏÇ ãíËæÏ ÇáØÈÇÚå åíÇÎÏ ÇáÇÑÇÇí æÇáÍÌã ÈÊÇÚååÇ 
void print(int arr[], int n)
{

	for (int i = 0; i < n; i++) // åäÚãá İæÑ áæÈ Êáİ Úáí ÚäÇÕÑ ÇáÇÑÇí æÇÍÏå æÇÍÏå
		cout << arr[i] << " ";
	cout << endl;

}
int main()
{
	
	int arr[] = { 80 , 90 ,60 ,30 ,50 ,70 ,40 };
	int n = sizeof(arr) / sizeof(arr[0]);//28/4=7

	insertionsort(arr, n);
	cout << "array after insertion sort ";

	print(arr, n);

}

