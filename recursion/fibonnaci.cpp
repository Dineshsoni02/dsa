#include <iostream>
using namespace std;

int getFib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int ans = getFib(n - 1) + getFib(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    cout << "fib = " << getFib(n);

    return 0;
}