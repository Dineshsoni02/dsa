#include <iostream>

using namespace std;

string reverseString(string str)
{
    int start = 0, end = str.length() - 1;
    while (start < end)
    {
        swap(str[str++], str[end--]);
    }
    return str;
}

int main()
{
    string s;
    cout << "Enter the string:";
    cin >> s;
    cout << reverseString(s);
    return 0;
}
