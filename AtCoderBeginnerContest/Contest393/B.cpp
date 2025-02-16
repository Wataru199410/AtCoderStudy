#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  int ans = 0;
  bool flg = false;
  for (int i = 0; i < s.size(); i++) {
    for (int j = i + 1; j < s.size(); j++) {
      for (int k = j + 1; k < s.size(); k++) {
        if (s.at(i) != 'A') {
          continue;
        }
        if (s.at(j) != 'B') {
          continue;
        }

        if (s.at(k) != 'C') {
          continue;
        }
        
        if ((j + 1) - (i + 1) == (k + 1) - (j + 1)) {
          flg = true;
          ans++;
          continue;
        }        

      }
    }
  }
  
  cout << ans;
}
