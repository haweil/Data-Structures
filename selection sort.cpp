#include <iostream>
#include <algorithm>
using namespace std; 
void selectionsort(int arr [],int n)
{
	int min; // ÈäÚÑİ ãÊÛíÑ äÍØ İíå ŞíãÉ Çá min
	                           // 0  1  2  3  4  5
	for (int i = 0; i < n-1; i++)// 60 40 50 30 20 10
	{
		min = i; // åäÇ ÈäÎáí ÇÕÛÑ ÍÇÌå Çæá ÚäÕÑ 
		for (int j = i + 1; j < n; j++) // ÏÇ İæÑ áæÈ åÊÈÏÇ ãä Çá ÇáÇäÏßÓ ÑŞã 1 áÇä ÇáÇäÏßÓ ÒíÑæ ßÏÇ ßÏÇ ãÊÛíÑ ÇáÇŞá ÎÏå æåÊáİ Úáí ÚäÇÕÑ ÇáÇÑÇí
			if (arr[j] < arr[min]) // åäÚãá ãŞÇÑäå ÊÈÏÇ Èíä ÇáÇäÏßÓ ÒíÑæ æÇáÇäÏßÓ 1 æåÊİÖá ÇáãŞÇÑäå ÔÛÇáå ÈÇáÊÑÊíÈ ØÈÚÇ áÍÏ ãÇ ÇáÇÑÇí ÊÎáÕ
				min = j; 
			 swap (arr[min],arr[i]); // åäÇ ÈäÚãá ÚãáíÉ ÊÈÏíá Èíä ÇáÇäÏßÓ Çááí åäÈÏÇ Èíå æÇÕÛÑ ÑŞã ÈäáÇŞíå İí ßá áİå 
	}
}
// ÏÇ ãíËæÏ ÇáØÈÇÚå åíÇÎÏ ÇáÇÑÇÇí æÇáÍÌã ÈÊÇÚååÇ 
void print(int arr[], int size)
{

	for (int i = 0; i < size; i++) // åäÚãá İæÑ áæÈ Êáİ Úáí ÚäÇÕÑ ÇáÇÑÇí æÇÍÏå æÇÍÏå
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
