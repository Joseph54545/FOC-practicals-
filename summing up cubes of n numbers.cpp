#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    int sum_of_cubes = (n * (n + 1) / 2) * (n * (n + 1) / 2);
    cout << "The sum of cubes of the first " << n << " numbers is " << sum_of_cubes << endl;
	return 0;
}




