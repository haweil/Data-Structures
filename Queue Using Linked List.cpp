#include <iostream>
#include <cassert>
using namespace std;
// ед« Џ‘«д дЌЎ «н ѕ« «  «н» »—«Ќ д« 
template < class t>
 class linkedQueue
{
private : 
	struct Node { // ед« Џгбд« «” —«я  «бджѕ
		t item; // ед« «бЏд’— «ббн ен ÷«Ё
		Node* next; // ед« «б»жнд — » «Џ «бджѕ
	};
	int count;
		Node *front, *rear; // ед« »жнд — ббЁ—жд  ж«б—н—
public :
		linkedQueue() {
		front = NULL; // ёнге г»ѕ«не 
		rear = NULL; // ёнге г»ѕ«не 
		count = 0; // ёнг… «бя«жд  «ббн едЏ—Ё ÷Ёд« я«г Џд’— где
	} 
	bool isEmpty()
	{
		return( count ==0);
	}
	void enequeue(t item)
	{
		Node* newptr = new Node; // ед« «жб Ќ«ће Џгбд« «бджѕ «ббн ед÷нЁ Ёне« 
		newptr->item = item; // ед« ЌЎнд« «бЏд’— «бћѕнѕ Ён «бджѕ
		newptr->next = NULL; // ед« ќбнд «бдя”  н‘«ж— Џбн Ќ«ће Ё«÷не
		if (isEmpty()) // ѕ« Џ‘«д бж б”е ед÷нЁ ћѕнѕ «жб Џд’—
		{
			rear = front = newptr; // едќбн «б—н— = «бЁ—жд  = «бЏд’— «бћѕнѕ »”
		}
		else // ед« бж едн÷Ё жгжћжѕ Џд«’—  «дне 
		{
			rear->next = newptr;  // «жб Ќ«ће «бдя”  » «Џ «б—н— н‘«ж— Џбн «бЏд’—
			rear = newptr; // »Џѕнд д”«жн «б—н— »«бЏд’— 
		}
		count++; // ед« Џ‘«д дЏ—Ё ÷Ёд« я«г г—е 
	}
	// ед« ѕ«б… «бЌ–Ё
	void dequeu()
	{
		if (isEmpty()) // «жб Ќ«ће ед ‘ня «д «бянж Ё«÷н жб«б« 
			cout << "Empty Queue" << endl;
		else if (count == 1) // ед« бж «бянж Ён Џд’— ж«Ќѕ »” 
		{
			delete front; // ед« едг”Ќ «бЁ—жд  Џ‘«д »н‘«ж— Џбне 
			rear = NULL; // жедѕн ёнг… бб—н— = Ё«÷н 
			count = 0; // д—ћЏ «бЏд’— ѕ« б 0 Џ‘«д д «яѕ «д гЁн‘ Џд«’— 
		}
		// ед« бж Ёне «я — гд Џд’— 
		else
		{
			Node* tempptr = front; // «жб Ќ«ће едЏ—Ё г џн— ћѕнѕ «”ге  г» жджѕ ћѕнѕе жд”«жне »«бЁ—жд  
			front = front->next; // едќбн «бЁ—жд  = «бЁ—жд  «ббн »Џѕе 
			delete tempptr; // дг”Ќ «б г» 
			count--;
		}
	}

	// ѕ« гнЋжѕ Џ‘«д дЌ–Ё яб «бЏд«’— «ббн Ён «бянж 
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
	// ѕ« гнЋжѕ «бЎ»«Џе 
	void print()
	{
		Node* cur = front; // едЏгб г џн— ћѕнѕ н”«жн «бЁ—жд  
		cout << " item in queue { ";
		while (cur != NULL) // д «яѕ «д «бг џн— яб г—е »н‘«ж— Џбн Џд’—
		{
			cout << cur->item<<" "; // едЎ»Џ «бг џн— яб г—е 
			cur = cur->next; // дќбн «бг џн— н‘«ж— Џбн «ббн »Џѕе бЌѕ г« нж’б б nll
		}
		cout << "}" << endl;
	}
	// ѕ« гнЋжѕ бж едѕж— Џбн Џд’— 
	void search(t item)
	{
		Node* cur = front; // Џ—Ёд« г џн— «ббн енг‘н Џбн «бЏд«’— ябе« ж”«жнд«е »«бЁ—жд  
		bool flag = true;  // ѕ« Џ‘«д д ‘ня б«ёнд«е жб« б« жджёЁ «ббж» 
		while (cur != NULL) // ед« Џгбд« «ббж» «б‘—Ў «д «бг џн— гн”«жн‘ Ќ«ће Ё«÷не
		{
			if (cur->item == item) // ед« бж «бг џн— ”«жн «бЏд’— «ббн Џ«н“нде 
			{
				cout << item << " found"; // нЎ»Џ «д б«ёнд«е 
				flag = false; // жнѕн ёнг… ббЁб«ћ »Ёжб” Џ‘«д джёЁ бЁ 
				break; // ня”— «ббж» 
			}
			cur = cur->next; // ѕ« Џ‘«д бж гбёнд«‘ Ён «жб г—е н—жЌ Џбн «бЏд’— «ббн »Џѕе 

		}
		if (flag) // ед« бж гбёнд«‘ «бЏд’— «бЁб«ћ енЁ÷б »  —ж
		{
			cout << "item not found"; // нЎ»Џ «д «бЏд’— г‘ гжћжѕ
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