#include <iostream>
#include <string>
#include <cassert>
using namespace std;
// ед« Џ‘«д дЌѕѕ «н ѕ« «  «н» »—«Ќ д« 
template <class t>
class arrayQueue
{
	int rear;  // ѕ« ен‘«ж— Џбн «ќ— Ќ«ће Ён «б«жб
	int front; // ѕ« ен‘«ж— Џбн «б«жб жѕжб «б« днд «ббн ед Џ«гб »нег Ё—жд  ж—н—
	int* arr; // ед« ѕ« «б«——«н ед Џ«гб гЏ «бянж я «—«н 
	int max_size; // ѕ« Џ‘«д дЏ—Ё Ќћг «бянж 
	int count;
public:
	arrayQueue(t size) // ѕ« яжд” —«я ж— Џ‘«д дЌЎ Ёне «ббн ед Џ«гб гЏ«е ждЏ—Ё яб Ќ«ће Ёне  
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
	// ѕ« Џ‘«д д ‘ня «д «бянж Ё«÷н жб« б« 
	int isEmpty()
	{
		return count == 0; // ед« «бяжд  »’Ё— яѕ« н»ён гЁн‘ «н Џд«’— ћж «бянж
	}
	bool isFull()
	{
		return count == max_size; // ед« «бяжд  ж’б б«ё’н Ќ«ће н»ён «бянж гбн«д 
	}
	// ѕ« гнЋжѕ «б«÷«Ёе Ён «бянж
	void addQueue(t element)
	{
		// «жб Ќ«ће »д ‘ня «бянж Ё«÷н жб« гбн«д
		if (isFull())
		{
			cout << "queue is full can't add queue";
		}
		else
		{
			rear = (rear + 1) % max_size; // ед« Ў»Џ« »дЌ—я «б—н— гд «ќ— «дѕя” Џ‘«д н‘«ж— Џбн «жб «дѕя” ен÷«Ё женг‘н »«б — н» Ён яб г—е
			arr[rear] = element; // ед« ќбнд« «б—н— н”«жн «бЏд’—
			count++; // ед« »д“жѕ «бя«жд  ж«Ќѕ Џ‘«д н»ён «жб Џд’— ÷Ёд«е
		}
	}
	// ѕ« гнЋжѕ «бЌ–Ё
	void deleteQueue()
	{
		// »д ‘ня «бянж Ё«÷н жб« б« 
		if (isEmpty())
		{
			cout << "Queue is empty";
		}
		else
		{
			front = front + 1 % max_size; // ед« Џ‘«д дЌ—я «бЁ—жд  »ЌнЋ бж я«д ж«ёЁ Џбн «дѕя” 0 н Ќ—я жн»ён Џбн «дѕя” 1 жяѕ« «бЏд’— «ббн Џбн «дѕя” 0 « Ќ–Ё
			count--; // »дёбб «бя«жд  Џ‘«д д «яѕ «д «бЏд’— « Ќ–Ё 
		}
	}
	// ѕ« гнЋжѕ Џ‘«д дћн» «жб Џд’— Ён «бгёѕге
	int getfront()
	{
		assert(!isEmpty()); // ед« »д ‘ня «д «бянж Ё«÷н жб« б« «б«жб
		return arr[front]; // ед« »н—ћЏ ёнг… «бЁ—жд  
	}
	// ѕ« гнЋжѕ Џ‘«д дћн» «жб Џд’— ж—«
	int getrear()
	{
		assert(!isEmpty()); //ед« »д ‘ня «д «бянж Ё«÷н жб« б«
		return arr[rear]; // ед« »н—ћЏ ёнг… «б—н—
	}
	// ѕ« гнЋжѕ «бЎ»«Џе 
	void print()
	{
		// едЌЎ ‘—Ў «д гняжд‘ Ё«÷н 
		if (!isEmpty())
		{
			for (size_t i = front; i != rear; i = (i + 1) % max_size) // ѕ« «бЁж—бж» «жб Ќ«ће ед”«жн «бёнге »«бЁ—жд  ж»Џѕнд едЌЎ ‘—Ў жен «д гн”«жн‘ «б—н— 
			{
				cout << arr[i] << " "; // ед« едЎ»Џ яб Џд«’— «бянж
			}
			cout << arr[rear]; // ед« «ќ— Џд’— едЎ»Џе Џ‘«д яд« Ёжё ёжбд« «б‘—Ў «д гн”«жн‘ «б—н—
		}
		else
			cout << "Empty Queue";
	}
	// ѕ« гнЋжѕ Џ‘«д бж Ќ»нд« дЏгб ”н—‘ Џбн Џд’—
	int queueSearch(t item)
	{
		int pos = -1; // ѕ« «жб г џн— дЏ—Ёе жеж гя«д «бЏд’— дЁ”е
		if (!isEmpty())
		{
			for (int i = front; i != rear; i = (i + 1) % max_size) // дЁ” Ёж— бж» «бЎ»«Џе 

				if (arr[i] == item) // ед« бж б«ёнд« «бЏд’— «ббн »дѕж— Џбне
				{
					pos = i; // д”«жн «бгя«д »«б«дѕя” ждќ—Ќ гд Ёж— бж»
					break;
				}

			if (pos == -1) // ед« бж б”« «б»ж“н‘д -1 едЏгб  ‘ня Џбн «ќ— Џд’— «ббн еж «б—н—
			{
				if (arr[rear] == item) // бж ЎбЏ еж ед”«жн «б»ж“н‘д »«б—н— 
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


