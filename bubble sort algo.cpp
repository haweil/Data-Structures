#include <iostream>
#include <algorithm>
using namespace std;

void bubblesort(int arr[], int n) // ÇáÌæÑíÒã ÇáÈÇÈá ÓæÑÊ Çæá ÍÇÌå åäÇÎÏ ÇÑÇí æÍÌãåÇ
{
	bool flag = true; //check the array is sorted or no 
	int c = 0; // ÏÇ ßÇæäÊÑ áæ ÒÇÏ Úä ÚÏÏ áİÇÊ ÇáÇÑÇí íÈŞí Úãá ÓæÇÈ æßÏÇ ÇáÇÑÇí ãÔ sorted
	for (int i = 0; i < n - 1; i++) // åäÚãá İæÑ áæÈ Êáİ Úáí ÚäÇÕÑ ÇáÇÑÇí ßáåÇ 
	{
		for (int j = 0; j < n - i - 1; j++) // åäÈÊÏí ÈÇæá ÚäÕÑ æäŞÇÑäå ÈÇáÚäÕÑ Çááí ÈÚÏå æÊãÔí Úáí ßÏÇ 
		{
			if (arr[j]>arr[j + 1]) // åäÇ ÈäŞÇÑä ÇáÚäÕÑ ÈÇáÚäÕÑ Çááí ÈÚÏå 
			{
				swap(arr[j], arr[j + 1]); // ÈäÚãá ÊÈÏíá áæ áŞíäÇ ÇáÚäÕÑ Çááí ÈÚÏå ÇÕÛÑ ãäå 
				flag = false;
			}
			c++; // ÏÇ ÈäÍÓÈ ÈíåÇ ÚãáäÇ ßÇã áİå áæ áŞíäÇ ÚÏÏ ÇááİÇÊ 5 íÚäí Úáí ÇÏ ÇáÓÇíÒ íÈŞí åí ÓæÑÊÏ 
		}
		if (flag == true) // 
			break;

	}
	cout << "# of rounds :" << c << endl;
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
	int arr[] = { 30,20,40,5,60,2 };
	int n = sizeof(arr) / sizeof(arr[0]);//24/4=6
	bubblesort(arr, n);
	cout << "Array After Bubble Sort";
	print(arr, n);
	return 0;
}
