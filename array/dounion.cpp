#include <iostream>
#include <set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int j = 0; j < m; j++)
    {
        s.insert(b[j]);
    }

    cout << "Ans: " << s.size();
}

int main()
{
    int a[10], b[10], n, m;
    cout << "Enter size of of 1st and 2nd array :";
    cin >> n >> m;

    for (int i = 0, j = 0; i < n, j < m; i++, j++)
    {
        cin >> a[i] >> b[j];
    }

    doUnion(a, n, b, m);
    return 0;
}


//intersection
/*

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
       set<int> st1,st2;
        
        for(int i=0;i<n;i++){
            st1.insert(a[i]);
        }
        for(int j=0;j<m;j++){
            st2.insert(b[j]);
        }
       int ct=0;
    
       for(auto val:st1){
           if(st2.count(val)) ct++;
       }
       return ct;
    }
};
*/