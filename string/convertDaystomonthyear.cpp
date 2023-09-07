/*Program to input no. of days and convert into years,months and days, print result in english.
Example: input days: 400 , output will be one year one month four days*/
#include <iostream>
#include <string>
using namespace std;
  string one[] = {" ","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
  string ten[] = {""," ","twenty","thirty"};
  
string convert(int n){
  int temp = n;
  string str = " ";
  if(n>19){
    str+= ten[n/10]+one[n%10];
  }else{
    str+=one[n];
  }
  return str;
}
void solution(int n){
  int temp = n;
 int years,months,days;
  if(temp>0){
     years = temp/365;
     temp = temp%365;
     months = temp/30;
     temp = temp%30;
     days = temp;
  }
 
  if(years>0){ 
  string year = convert(years);
  cout<<year<<" years"<<" ";
  }
  if(months>0){ 
  string month =convert(months);
  cout<<month<<" months"<<" ";
  }
  if(days>0){
    
  string day = convert(days);
  cout<<day<<" days"<<" ";
  }
}
int main() {
  int days;
  cout<<"enter days:";
  cin>>days;
  solution(days);
  return 0;
}