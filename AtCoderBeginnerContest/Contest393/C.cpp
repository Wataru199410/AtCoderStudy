#include <bits/stdc++.h>
using namespace std;
 
int main() {
 long int n, m;
 cin >> n >> m;
  vector<long int> S(m);
  vector<long int> Y(m);
  
  for (int i = 0; i < m; i++) {
    cin >> S.at(i) >> Y.at(i);
  }
  
  map<string, long int> bk; 
  int count = 0;
  for (int i = 0; i < m; i++) {
    if (S.at(i) == Y.at(i)) {
      count++;
      continue;
    }
    // cout << to_string(min(S.at(i), Y.at(i))) + to_string(max(S.at(i), Y.at(i)));
    bk[to_string(min(S.at(i), Y.at(i))) + ',' +  to_string(max(S.at(i), Y.at(i)))]++;
    ↓最初は以下で提出、12と1、1と21といった組み合わせの際にエラーになってしまいWA
    // bk[to_string(min(S.at(i), Y.at(i))) + to_string(max(S.at(i), Y.at(i)))]++;
  }
  
  // for (int i = 0; i < (int)bk.size(); i++) {
  //   int q = bk.back();
  //   bk.pop_back();
  //   if (q == 1) {
  //     continue;
  //   }
    
  //   while (q > 0)
  //   count++;
  //   q -= 1;
  // }
  
    for (const auto& [key, value] : bk){
        // std::cout << key << " => " << value << "\n";
      int q = value;
      if (q == 1) {
        continue;
      }
      
      while (q >= 2) {
        count++;
        q -= 1;
      }
    }
  
  cout << count;
}
