#include <iostream>
using namespace std;
#define R 4
#define C 4

int main() {
  int mat[R][C] = {
  { 1, 2, 3, 4 },
  { 5, 6, 7, 8 },
  { 9, 10, 11, 12 },
  { 13, 14, 15, 16}
};

 cout<<"Print Main diagonal value \n";
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
          if(i==j){
            cout<<mat[i][j]<<" ";
          }
        }
    }
 cout<<endl;
   cout<<"Print Secondary diagonal value \n";
    for(int i=0;i<R;i++){
        cout<<mat[i][C-i-1]<<" ";
    }
return 0;
}