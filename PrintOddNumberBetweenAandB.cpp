#include <iostream>
using namespace std;

void oddNumber(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a;
    int b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the end number : ";
    cin >> b;

    cout << "odd number between " << a << " to " << b << endl;
    oddNumber(a, b);

    return 0;
}

/*Enter the first number : 1
Enter the end number : 30
odd number between 1 to 30
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29*/