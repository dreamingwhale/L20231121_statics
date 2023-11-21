#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int Add(int A, int B)
{
	cout << A + B << endl;

	return A + B;
}

int Sub(int A, int B)
{
	cout << A - B << endl;

	return A - B;
}

//C#, java
//delegate
//delegate
int (*FunctionPointer)(int A, int B);

//callback
void LoadAsync(int A, int B, int (*WhenComplete)())
{
	//Network
	//Loading Loading;
	WhenComplete();
}

int Desending(const void* PA, const void* PB)
{
	int A = *(int*)PA;
	int B = *(int*)PB;

	return B - A;
}


int Asending(const void* PA, const void* PB)
{
	int A = *(int*)PA;
	int B = *(int*)PB;

	return A - B;
}

int main()
{
	int Number[10] = { 1, 10, 2, 5, 4, 3, 8, 9, 7, 6 };
	qsort(Number, 10, 4, Asending);

	//for (auto D : Number)
	//{
	//	cout << D << endl;
	//}


	FunctionPointer = [](int A, int b) {
		return 1;
		};
	//FunctionPointer = Sub;
	cout << FunctionPointer(10, 20) << endl;

	return 0;
}