#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  string ans;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s.at(i) == '2') {
      ans = ans + '2';
    }
  }
  
  cout << ans;
}
