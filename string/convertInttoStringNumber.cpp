#include <iostream>

using namespace std;

int main() {
  int n=1232;
  string s = to_string(n);
  string res=" ";
  cout<<n<<endl;
  for(int i=0;i<s.length();i++){
    switch(s[i]){
      case '1':
        res+="ek";
      break;
    case '2':
       res+="do";
    break;
    case '3':
       res+="teen";
    break;
      case '4':
       res+="char";
    break;
      case '5':
       res+="paanch";
    break;
      case '6':
       res+="chhe";
    break;
  
    }
res+=" ";    
  }
  
  cout<<res<<" ";
 return 0;
}