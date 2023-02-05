#include <iostream>
#include <string>
using namespace std;
// ѕ« Џ‘«д дЌЎ «бѕ« « «б «н» «ббн Џ«н“нде« 
template<class t>
// ед« Џгбд« яб«” «б«” «я 
class stack 
{
	struct node // ѕ« «” —«я  Џ‘«д дЏгб Ёне «бджѕ «ббн ед Ќ—я »не« яб г—е 
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
	// едя—н  гнЋжѕ д ‘ня «д «б” «я Ё«÷н жб« гбн«д
	bool isEmpty()
	{
			return top == NULL; // ѕ« бж «б ж» ен‘«ж— Џбн Ќ«ће Ё«÷не н»ён «б«” «я Ё«÷н 
	}
	// ѕ« гнЋжѕ Џ‘«д д÷нЁ Ён «б«” «я 
	void puch(t newitem)
	{
		// ед« Џгбд« джѕ ћѕнѕе Џ‘«д дќ“д Ёне« «бЏд’—
		node*newPtr = new node;  
	    // Ў»Џ« ед ‘ня «б«жб «д «б»жнд — г—»жЎ ’Ќ		
		if (newPtr==NULL)
			cout << "Stack push cannot allocate memory";
		else 
		{
			newPtr->item = newitem; //ед« ед÷нЁ «бЏд’— «ббн  « ÷«Ё Ён «бджѕ 
			newPtr->next = top; // ед« »н‘«ж— Џбн «б ж» «бёѕнг Џ‘«д н—»Ў Џд«’— «б«” «я гЏ »Џ÷
			top = newPtr; // жѕ« «ќ— ќЎже ед‘«ж— Џбн «б ж» «бћѕнѕ
		}
	}
	// ѕ« гнЋжѕ «бЌ–Ё 
	void pop()
	{
		//  »д ‘ня «д «б” «я г‘ Ё«÷н 
		if (isEmpty())
			cout << "Stack empty on pop";
		else
		{
			
			node* temp = top; //»дЏгб »жнд — ћѕнѕ н”«жн «б ж»
			top = top->next;// »дќбн «б ж» н‘«ж— Џбн «ббн »Џѕе 
			temp = temp->next = NULL;
			delete temp;
		}
	}
	// дЁ” Џгбн… «бЌ–Ё Ён Ё—ё »” «д бж Ќ»нд« дќ“д «бЏд’— «ббн едЌ–Ёе ендЁЏ 
	void pop(t&stacktop)
	{
		if (isEmpty())
			cout << "Stack empty on pop";
		else
		{
			stacktop == top->item; // ед« едќ“д «ќ— ёнг… бб ж» ё»б гдЏгб «н Ќ–Ё 
			node* temp = top;
			top = top->next;
			delete temp;
		}
	}
	// ед«  гнЋжѕ бж Ќ»нд« дћн» «ќ— ёнге ÷«нЁнде« «ббн ен «б ж» Ёжё 
	void getTop(t& stacktop)
	{
		if (isEmpty())
			cout << "Stack empty on getTop";
		else
		{
			stacktop == top->item; // ед« »д”«жн «ќ— ёнг… бб ж» Ёжё »«бЏд’—
		}
	}
	// ѕ« гнЋжѕ «бЎ»«Џе 
	void display()
	{
		cur = top;
		cout << "items in stack" << endl;
		cout << "[";
		while (cur != NULL) // ед ‘ня «б«жб «де г‘ Ё«÷н 
		{
			cout << cur->item<< " "; // ед« еЎн»Џ «бЏд’— 
			cur = cur->next; // ед« ед”«жн «б ж» »«бЏд’— «ббн »Џѕе »ЌнЋ дЎ»Џе 
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