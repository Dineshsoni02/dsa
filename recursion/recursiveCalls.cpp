#include <iostream>
using namespace std;

// ex of tail recursion 3 2 1
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

// ex of head recursion  -> all statements run first then printing  1 2 3 4 5
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
// mix recursion    5 4 3 2 1 1 2 3 4 5
void mixR(int n)
{
    // base case
    if (n == 0)
        return;
    cout << n << " ";
    // recursive relation
    mixR(n - 1);
    // operation
    cout << n << " ";
}
// 1 2 3 4 5 5 4 3 2 1
void mixR2(int curr, int maxV)
{
    // base case
    if (curr <= maxV)
    {
        cout << curr << " ";

        mixR2(curr + 1, maxV);

        cout << curr << " ";
    }
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    // cout << "Print in decreasing order : " << endl;
    // decr(n);
    // cout << "\n Print in Increasing order : " << endl;
    // incr(n);
    cout << "\n Print in Mix order : " << endl;
    // mixR(n);
    mixR2(1, n);

    return 0;
}