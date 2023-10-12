#include <iostream>
using namespace std;

void SquareNaturalNumber(int number)
{
    for (int i = 1; i <= number; i++)
    {
        cout << i * i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    SquareNaturalNumber(n);

    return 0;
}
/*
Enter the number : 10
1 4 9 16 25 36 49 64 81 100

*/