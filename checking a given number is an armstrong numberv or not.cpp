#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, original_number, remainder, result = 0, digits = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    original_number = n;

    // count the number of digits
    while (original_number != 0)
	{
        original_number /= 10;
        digits++;
    }

    original_number = n;

    // calculate the sum of the cubes of the digits
    while (original_number != 0) 
	{
        remainder = original_number % 10;
        result += pow(remainder, digits);
        original_number /= 10;
    }

    // check if the result is equal to the original number
    if (result == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;
		return 0;
}