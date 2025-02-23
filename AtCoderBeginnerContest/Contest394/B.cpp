#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  std::vector<pair<int, string>> v;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back({s.size(), s});
  }
  // こうするとpairのkeyの昇順でsortされる  
  sort(v.begin(), v.end());
  
  string ans;
  for (int i = 0; i < n; i++) {
    ans = ans + v.at(i).second;
  }
  
  cout << ans;
}
