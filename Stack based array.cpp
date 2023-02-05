#include <iostream>
#include <string>
using namespace std;
// ÈäËÈÊ ÍÌã ÇáÇÓÊÇß 
const int(max_size) = 100;
// ÏÇ ÚÔÇä äÎÊÇÑ ÇáÏÇÊÇ ÇáÊÇíÈ Çááí åäÍÊÇÌåÇ ÈÑÇÍÊäÇ
template <class t>
class stack {
	// ÏÇ ÇáÊæÈ ÈÊÇÚ ÇáÇÓÊÇß æÇááí ÈíÔÇæÑ Úáí ÇáÇäÏßÓ 
	int top;
    // ÏÇ ÈíÍÏÏ ÍÌã ÇáÇÓÊÇß Çááí åæ ËÇÈÊ İæŞ 
	t item[max_size];
   public :
		// ÏÇ ßæäÓÊÑÇßÊæÑ ÚÔÇä äÏí Şíãå ááÊæÈ È -1 
	   stack() :top(-1) {}
	// ÏÇ ÏÇáÉ ÈäÊÔíß İíåÇ ÇáÇÓÊÇß İÇÖí æáÇ áÇ 
	bool isEmpty ()
	{
		return top < 0;
	}
	// ÏÇ ÏÇáÉ ÇáÇÖÇİå ááÇÓÊÇß 
	void push(t element)
	{
		// Çæá ÍÇÌå åäÇ ÏÇ ÊÔíß ÈäÊÇßÏ İíå Çä ÇáÇÓÊÇß ãÔ ãáíÇä
	    if (top > max_size - 1) // 0-99 
		{
			cout << "stack is full on push";
		}
		else
		{
			top ++; // ŞíãÉ ÇáÊæÈ åÊÈŞí 0 æÏÇ Çæá ÇäÏßÓ åäÖíİ İíå 
			item [top] = element; // åäÇ ÇáÇäÏßÓ Çááí åæ ÇáÊæÈ åíÓÇæí ÇáÚäÕÑ Çááí åäÖíİå  
		}
	}
	// ÏÇ ÏÇáÉ ÇáÍĞİ ááÇÓÊÇß ØÈÚÇ ÇáÍĞİ åíÈŞí ãä İæŞ íÚäí ÇÎÑ ÍÇÌå ÖİäÇåÇ åí Çááí åÊÊÍĞİ
	void pop ()
	{
		// åäÚãá ÊÔíß ÇáÇæá ÚÔÇä äÊÇßÏ Çä ÇáÇÓÊÇß ãÔ İÇÖí
		if (isEmpty()) {
			cout << "stack is empty on pop";
		}
		else
		{
			top--; // ÈäŞáá ŞíãÉ ÇáÊæÈ æßÏÇ äÊÇßÏ Çä ÇÍäÇ ÍĞİäÇ ÇáÚäÕÑ
		}
	}
	void pop(t&element) // ÇáÑíİÑÇäÓ åäÇ ÚÔÇä íÈŞí íÍÌÒ ãßÇä æÇÍÏ İí ÇáãíãæÑí ááÚäÕÑ áÇä áæ ÔáäÇ Çá& æÚÑİäÇ ÊÍÊ ÚäÕÑ ãËáÇ È 0 æÇÏíäÇ ÇãÑ ØÈÇÚå åíØÈÚ 0
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
	void getTop(t&stackTop) // ÇáÑíİÑÇäÓ åäÇ ÚÔÇä íÈŞí íÍÌÒ ãßÇä æÇÍÏ İí ÇáãíãæÑí ááÚäÕÑ áÇä áæ ÔáäÇ Çá& æÚÑİäÇ ÊÍÊ ÚäÕÑ ãËáÇ È 0 æÇÏíäÇ ÇãÑ ØÈÇÚå åíØÈÚ 0
	{
		// ßÇáÚÇÏå åäÚãá ÊÔíß ÇáÇæá Úáí ÇáÓÊÇß äÊÇßÏ Çäå ãÔ İÇÖí 
		if (isEmpty())
		{
			cout << "stack is empty on gettop";
		}
		else
		{
			stackTop = item[top]; //ÈäÓÇæí ŞíãÉ ÇáÊæÈ Çááí åæ Çæá ÚäÕÑ Úáí ŞãÉ ÇáÓÊÇß ÖÇíİíäå È ŞíãÉ ÇáÓÊÇß ÊæÈ
			cout << stackTop <<endl; // ÏÇ ÇãÑ ØÈÇÚå ááÚäÕÑ ÏÇ 
		}
	}
	void print() // ÏÇ ÏÇáÉ ÇáØÈÇÚå áßá ÚäÇÕÑ ÇáÇÓÊÇß 
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

