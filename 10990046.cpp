#include <iostream>

using namespace std;

int main()
{
    //JOSEPH MENSAH//
    int a, b, c, d, x, y, avg;
    y = 2;
    cout << "Enter the prime numbers between 1 and 6 to find their Average" << endl;
    cout << "Enter the first prime number: " <<endl ;
    cin >> a ;
    cout << "Enter the second prime number: " <<endl ;
    cin >> b;
    cout << "Enter the third prime number: " <<endl ;
    cin >> c;
    cout << "Enter the fourth prime number: " << endl;
    cin >> d;
         x = a + b + c + d;
    avg = x/y;

    cout << "The average of the primes numbers is: " << avg ;

    return 0;
}
