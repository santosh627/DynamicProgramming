#include <iostream>

using namespace std;

bool cansum (int sum, int arr[], int size)
{
    if (sum < 0)
        return false;
    if (sum == 0)
        return true;

    bool val = false;
    
    for (int i =0 ; i < size; i++)
        val = val || cansum (sum - arr[i], arr, size);

    return val;
}

int main()
{
    int sum =0 , size =0;
    cout << "Please enter the sum: " ;
    cin >> sum;
    
    cout << "\n Please enter input array length: ";
    cin >> size;
    
    cout << "please enter the array elemants:" << endl;
    int arr[size];
    
    for (int i = 0; i < size; i++)
        cin >> arr[i];
        
    cout << "can sum possible: " << cansum (sum, arr, size) << endl;
 
    return 0;    
}
