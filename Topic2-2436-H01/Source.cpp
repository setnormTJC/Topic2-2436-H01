#include <iostream>
#include <queue>

#include<cassert>

using namespace std;


template<typename T, int elementCount>
class MyStaticArray
{
private:
	//int array[10]; //Ada

	//int milesTraveled; 

	T array[elementCount]; //HOMOGENEOUS

public:

	int getElementCount()
	{
		return elementCount; 
	}

	MyStaticArray()
	{
		for (int i = 0; i < elementCount; i++)
		{
			array[i] = 0;
		}
	}

	MyStaticArray(int numberOfElements)
	{

	}

	T getElementAt(int index)
	{
		assert(index > 0 && index < elementCount);

		return array[index];
	}

	void modifyElement(int index, T elementToInsert)
	{
		assert(index >= 0 && index < elementCount);

		array[index] = elementToInsert; 
	}


	void print()
	{
		for (int i = 0; i < elementCount; i++)
		{
			cout << array[i] << endl;
		}
	}
};


int main()
{
    ////This is the type of thing I want for Lab 2a:
    //std::queue<string> customersInLine;// { "Me", "thee", "he" };

    //customersInLine.push("thee");
    //customersInLine.push("me");
    //customersInLine.push("he");

    //cout << customersInLine.size() << endl; 

    //customersInLine.pop();
    //cout << customersInLine.back() << endl; 
	//std::vector<int> numsVector; 
	
    //MyStaticArray<int, 22> numsList; 
    
	//MyStaticArray<char, 5> charsList; 

	//charsList.print(); 

	//numsList.modifyElement(4, 42);
 //   numsList.print();

	//cout << numsList.getElementCount() << endl; 

	//cout << numsList.getElementAt(100) << endl; 

	//int otherNumsList[22]; 

	//cout << otherNumsList[100] << endl; 


	MyStaticArray<char, 4> natoAlphabet; 

	natoAlphabet.modifyElement(0, 'a');
	natoAlphabet.modifyElement(1, 'b');
	natoAlphabet.modifyElement(2, 'c');
	natoAlphabet.modifyElement(3, 'd');

	natoAlphabet.print(); 




    return 0;
}