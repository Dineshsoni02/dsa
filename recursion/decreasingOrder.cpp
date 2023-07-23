#include <iostream>
using namespace std;

// ex of tail recursion
void decr(int n)
{
    // base case
    if (n == 0)
        return;
    // operation
    cout << n << " ";
    // recursive relation
    decr(n - 1);
}

// ex of head   -> all statements run first then printing
void incr(int n)
{
     // base case
    if (n == 0)
        return;
    // recursive relation
    incr(n - 1);
    // operation
    cout << n << " ";
}
//mix recursion
void mixr(int n)
{
     // base case
    if (n == 0)
        return;
    cout << n << " ";
    // recursive relation
    mixr(n - 1);
    // operation
    cout << n << " ";
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    cout << "Print in decreasing order : " << endl;
    decr(n);
    cout << "\n Print in Increasing order : " << endl;
    incr(n);
    cout << "\n Print in Mix order : " << endl;
    mixr(n);

    return 0;
}