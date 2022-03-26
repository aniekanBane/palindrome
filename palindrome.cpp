#include <iostream>
#include <string>

using namespace std;

pair<bool, int> isPalindrome(string s)
{
  string proc;
  for (char c : s)
    if (!isspace(c) && !ispunct(c))
       proc +=  tolower(c);

  string rev;
  for (int n = proc.length()-1; n >=0; n--)
     rev.push_back(proc[n]);
  
  bool ans = proc == rev;
  return pair(ans, ans ? s.length() : 0);
}

int main() {
  string str;
  cout << "Type your sentence or word. 'end' to quit" << endl;
  while (true){
    cin >> str;
    if (str == "end") break;
    auto pal = isPalindrome(str);
    cout << "Palindrome : " << pal.first <<", Lenght : " << pal.second;
  }
}
