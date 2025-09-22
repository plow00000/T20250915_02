#include <iostream>

using namespace std;

int main()
{
    int Sum = 0;
    int MultiplOf3 = 0;

    for (int i = 1; i <= 100; i++)
    {
        Sum += i;
        if (i % 3 == 0)
        {
            MultiplOf3 += i;
		}
    }

    cout << "1~100까지의 모든 숫자의 합 : " << Sum << endl;
	cout << "1~100까지의  3의 배수의 합 : " << MultiplOf3 << endl;
}