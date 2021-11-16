#include <iostream>
#include <string>
#include <fstream>


using namespace std;

pair<string, int> isPalindrome(string s){

  int len = s.length();
  string proc;
  for (char c : s){
    if (!isspace(c) && !ispunct(c))
       proc +=  tolower(c);
  }
  //cout << proc;
  string rev;
  for (int n = proc.length()-1; n >=0; n--){
     rev.push_back(proc[n]);
  }
  if (proc == rev) return pair("True", len);
  else return pair("False", 0);
}

int main() {
  string str;
  cout << "Type your sentence or word" << endl;
  while (1){
    cin >> str;
    if (str == "stop") break;
    pair<string, int> pal = isPalindrome(str);
    cout << "Palindrome : " << pal.first <<", Lenght : " << pal.second;
  }
}
