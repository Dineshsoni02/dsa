#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    cout << "enter string:";
    getline(cin, s);
    int st = 0, end = s.size() - 1;

    while (st < end)
    {
        swap(s[st++], s[end--]);
    }
    cout << "reversed string:" << s;

    return 0;
}