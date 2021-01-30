#include <iostream>
//Fibonacci using Memoization
#define MAX 100
#define DEFAULTVAL -1

using namespace std;

unsigned long long int lookup_table[MAX];

unsigned long long int fib_mem(int pos)
{
    if (lookup_table[pos] == DEFAULTVAL)
    {
        if (pos <= 2)
            return 1;
        else
        {
            lookup_table[pos] = fib_mem(pos -1) + fib_mem(pos -2);
        }
    }
    return lookup_table[pos];
}

void initialize()
{
    for (int i =0; i< MAX; i++)
        lookup_table[i] = DEFAULTVAL;
}

int main()
{
    int pos = 0;
    std::cout << "Hello Please enter the nth pos" << std::endl;
    
    cin >> pos;
    
    if (pos <= 0)
        cout << "0" << endl;
    else
    {
        initialize();
        cout << fib_mem(pos) << endl;
    }
    return 0;
    
}
