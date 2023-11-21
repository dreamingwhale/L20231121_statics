#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;



class StaticTest
{
private:
	StaticTest()
	{
		Count++;
		PrintCount();
	}
public:
	~StaticTest()
	{
		Count--;
		PrintCount();
	}
	static StaticTest* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new StaticTest();
		}

		return Instance;
	}
private:
	static void PrintCount()
	{
		cout << Count << endl;
	}

	static int Count;

	static StaticTest* Instance;
};

int StaticTest::Count = 0;
StaticTest* StaticTest::Instance = nullptr;


class ConsturctSample
{
public:
	ConsturctSample(int NewNumber, char* NewName)
	{
		Number = NewNumber;
		Name = string(NewName);
	}
	ConsturctSample(const ConsturctSample& InOrigin)
	{
		cout << "Copy" << endl;
		Number = InOrigin.Number;
		//Name = string(Origin.Name);
		Name = InOrigin.Name;
	}
	virtual ~ConsturctSample()
	{

	}

	int Number;
	string Name;
};

void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}

void Add(int A = 20, int B = 10, int C = 0)
{

}

int main()
{
	int A = 10;
	int B = 20;

	Add(A, B, 10);


	cout << A << endl;
	cout << B << endl;

	//char Message[] = "HelloWorld";
	//ConsturctSample C1(300, Message);
	//ConsturctSample C2 = C1;

	//string A = "World";
	//string B = string(A);
	//
	//cout << A << endl;
	//A[0] = 'C';
	//cout << B << endl;

	//cout << C1.Name << endl;
	//Message[5] = 'A';
	//cout << C2.Name << endl;

	//cout << C1.Number << endl;
	//C1.Number = 100;
	//cout << C2.Number << endl;




	return 0;
}
