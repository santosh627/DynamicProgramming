//Program to find nth position Fibbonacci
#include <iostream>

using namespace std;

long int fib (int pos)
{
    if (pos <= 2)
        return 1;
    else
        return fib(pos -1) + fib(pos -2);
}

int main()
{
    int pos = 0;
    std::cout << "Hello, Please Enter the nth position of Fibbonacci: " << std::endl;
    
    cin >> pos;
    
    if (pos <= 0)
      cout << "0" << endl;
    else
    {
      long int x = fib(pos);
      cout << x << endl;
    }

    return 0;
    
}
