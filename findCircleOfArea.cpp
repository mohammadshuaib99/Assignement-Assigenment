#include <iostream>
using namespace std;

float areaOfCircle(int n)
{
    return (3.14 * n * n);
}

int main()
{
    float radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;

    float area = areaOfCircle(radius);
    cout << "Area of the circle : " << area << endl;

    return 0;
}

/*Enter the radius of the circle : 10
Area of the circle : 314*/