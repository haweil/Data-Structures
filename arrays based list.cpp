#include <iostream>
#include <cassert>
using namespace std;
class arraylist // ַזב ַּֽו ÚׁÝהַ ßבַ׃ ַ׃דו ַַׁׁם 
{
    int* arr; // והַ ÚׁÝהַ ָזםהÊׁ ַבַַׁם 
    int count; // והַ Úדבהַ דÊÛםׁ Úװַה םֽ׃ָ ßַד Úהױׁ דזּזֿ Ýם ַבַַׁם 
    int maxsize; // והַ ַֿ ָםַ־ֿ ַב׃ַםׂ ָÊַÚ ַבַַׁם 
public:
    arraylist(int s) // ַֿ ßזה׃ÊַׁßÊזׁ והַ־ֿ Ýםו ַב׃ַׂם 
    {
        if (s < 0) // והַ Úװַה בז ַבםזׁׂ ײַÝ ׃ַםׂ ַÞב דה 0 הֿםבו Þםדו 10 
        {
            maxsize = 10;
        }
        else
        {
            maxsize = s; // והַ ַבדַß׃ ׃ַםׂ ום׃ַזם ַב׃ַםׂ ַבבם ַבםזׁׂ ֿ־בו 
        }
        count = 0; // Þםדו דַָֿםו בבßַזהÊ = 0 
        arr = new int[maxsize]; // זוהַ ÚׁÝהַ ַַׁם ּֽדוַ ם׃ַזם ַבדַß׃ ׃ַםׂ 
    }
    // ַזב דםֻזֿ דÚַהַ ום והÊװםß ַבַַׁם Ýַײםו זבַ בַ 
    bool isempty()
    {
        return count = 0; // בז ַבßַזהÊ ם׃ַזם 0 ÊָÞם Ýַײםו 
    }
    // Êַהם דםֻזֿ וםÊװםß ַבַַׁם דדÊבֶו זבַ בַ
    bool isFull()
    {
        return count == maxsize; // והַ וםּׁÚ ַבßַזהÊ = ַבדַß׃ ׃ַםׂ
    }
    // ÊַבÊ דםֻזֿ דÚַהַ זום ַבַײַÝו Ýם דßַה דÚםה 
    void insertAtpos(int pos, int element) // Úדבהַ דםֻזֿ וÊַ־ֿ ַבדßַה זַבÚהױׁ
    {
        if (isFull()) // והÊװםß ַבַַׁם דבםַהו ßבוַ זבַ בַ ַבַזב 
        {
            cout << "array is full";
        }
        else if (pos<0 || pos>count) // והַ והÊװםß Úװַה בז ַבםזׁׂ ֿ־ב דßַה ַÞב דה ַבױÝׁ ַז ַßָׁ דה ּֽד ַבַַׁם 
        {
            cout << "Out of the range";
        }
        else // והַ Úדבםֹ ַבַײַÝו
        {
            for (size_t i = count; i > pos; i--)  // Úדבהַ Ýזׁ בזָ ÊבÝ Úבם Úהַױׁ ַבַַׁם ßבוַ 
            {
                arr[i] = arr[i] - 1; // והַ ָהÚדב װםÝÊ ַׁםÊ 
            }
            arr[pos] = element; // והַ ָהײםÝ ַבÚהױׁ Ýם דßַהו 
            count++; // זוהַ ָהׂזֿ ַבßַזהÊ ָ  Úװַה םֽ׃ָ ַבÚהױׁ ַבבם ַÊײַÝ
        }
    }
    // ַֿ דםֻזֿ ַבֽ׀Ý דה דßַה דÚםה 
    void removeatpos(int pos)
    {
        if (isempty()) // והÊװםß ַבַַׁם Ýַײםו זבַ בַ ַבַזב 
        {
            cout << "List is full";
        }
        else if (pos<0 || pos>count) // והַ והÊװםß Úװַה בז ַבםזׁׂ ֿ־ב דßַה ַÞב דה ַבױÝׁ ַז ַßָׁ דה ּֽד ַבַַׁם 
        {
            cout << "Out of the range";
        }
        else
        {
            for (size_t i = pos; i < count; i++) // והַ Úדבהַ Ýזׁ בזָ וÊַָֿ דה ַבדßַה ַבבם ַֿםוַבהו ַבםזׁׂ 
            {
                arr[i] = arr[i] + 1; // והַ 
            }
            count--;
        }
    }
    // והַ דםֻזֿ ַבַײַÝו Ýם ַ־ׁ Úהױׁ Ýם ַבַַׁם 
    void insertatend(int element)
    {
        if (isFull()) // והÊװםß ַבַַׁם דבםַהו ßבוַ זבַ בַ ַבַזב 
        {
            cout << "array is full";
        }
        else
        {
            arr[count] = element; // והַ ׃ַזםהַ ַבßַזהÊ ַָבÚהױׁ בַה ַßםֿ ַבßַזהÊ ָםװַזׁ Úבם ַ־ׁ ַּֽו Ýם ַבַַׁם
            count++;
        }

    }
    // והַ דםֻזֿ ַבָֻֽ 
    int search(int element)
    {
        for (size_t i = 0; i < count; i++) // והÚדב Ýזׁ בזָ ÊבÝ Úבם Úהַױׁ ַבַַׁם ßבוַ 
        {
            if (arr[i] == element) // ַֿ ַבװׁ״ ַהו בז בַÞם ַבÚהױׁ םּׁÚבהַ ÞםדÊו 
                return i;

        }
        return -1; // בז דבÞַװ םּׁÚ Ýזב׃
    }
    // ַֿ דםֻזֿ בז ײÝהַ Úהױׁ זßַה דÊײַÝ Þָב ßַֿ הדהÚ ַה הײםÝו
    void insertNodublicate(int element)
    {
        if (search(element) == -1) // ַ׃ÊֿÚםהַ ַֿבֹ ַבָֻֽ הװזÝ ַבÚהױׁ דזּזֿ זבַ בַ בז דװ דזּזֿ והײםÝ ַבÚהױׁ
        {
            insertatend(element); //והַ ַ׃ÊֿÚםהַ ַֿבֹ ַבַײַÝו 
        }
        else
        {
            cout << "The element is here ";
        }
    }
    // והַ בז ָֽםהַ הÛםׁ Úהױׁ ָÚהױׁ ּֿםֿ
    void updateat(int pos, int element) //ַזב ַּֽו ה־Êַׁ ַבדßַה זַבÚהױׁ
    {
        if (pos<0 || pos>count) // והַ Úװַה בז ַ־Êׁהַ דßַה דװ דזּזֿ
        {
            cout << "out of range";
        }
        else
            arr[pos] = element; // זוהַ ָה׃ַזם ַבדßַה ַָבÚהױׁ ַבּֿםֿ
    }
    // ַֿ דםֻזֿ םּׁÚבהַ Úהױׁ ַ־Êׁהַו
    void getelement(int pos) //ַזב ַּֽו ה־Êַׁ ַבדßַה 
    {
        if (pos<0 || pos>count) // והַ Úװַה בז ַ־Êׁהַ דßַה דװ דזּזֿ
        {
            cout << "out of range";
        }
        else
            arr[pos]; // זוהַ ָהּׁÚ ַבÚהױׁ 
    }
    // והַ דםֻזֿ ֽ׀Ý ָ׃ דװ והֽ׀Ý  דה ַבדםדזׁם
    void clear()
    {
        count = 0;
    }
    // והַ דםֻזֿ ֽ׀Ý ַבַַׁם ßבוַ 
    ~arraylist()
    {
        delete[]arr;
    }
    // ַֿ דםֻזֿ ַב״ַָÚו 
    void print()
    {
        for (int i = 0; i < count; i++) // והַ בזָ וםבÝ Úבם ßב ַבÚהַױׁ
            cout << arr[i] << " "; // והַ ָה״ָÚ ַבÚהױׁ ßב דׁו
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

