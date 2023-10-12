#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int number)
{
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "Number of digits: " << digitCount << std::endl;

    int square = number * number;
    cout << "Square of the number: " << square << std::endl;

    return 0;
}
