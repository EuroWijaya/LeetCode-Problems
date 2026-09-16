#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> p;
string str;


bool isValid(string str){
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '(' || str[i] == '{' || str[i] == '['){
      p.push(str[i]);
    }
    else if((!p.empty()) && (str[i] == ')' && p.top() == '(' || str[i] == '}' && p.top() == '{' || str[i] == ']' && p.top() == '[')){
      p.pop();
    }else{
      return false;
    }
  }
  
  return p.empty();
}

int main(){
  cin >> str;
  cout << boolalpha;
  cout << isValid(str) << endl;
  return 0;
}