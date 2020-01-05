#include <iostream>

using namespace std;

int fahrenheit;
int celsius;

int main()
{
    cout << "Temperature in fahrenheit:";
    cin >> fahrenheit;

    celsius = ((fahrenheit - 32) *5/9);
    cout << "Temperature in fahrenheit is:" << celsius;
    return 0;
}
