// #include <bits/stdc++.h>
// using namespace std;
// bool chack(string s) {
//     if (s.find("WA") != string::npos) {
//         return true;
//     } else {
//         return false;
//     }
// } 
// int main() {
//   string s;
//   cin >> s;
//   bool flg = chack(s);
//   while(flg) {
//     for (int i = 0; i < (int)s.size(); i++) {
//       if ((int)s.size() == i + 1) {
//         continue;
//       }
//       string a = s.substr(i, 2);
//       if (a == "WA") {
//         s.at(i) = 'A';
//         s.at(i + 1) = 'C';
//       }
//     }
//     flg = chack(s);
//   }
//   cout << s;
// }

// ↑計算量やばいかなと思ったら、やはりLTEでACできず...

// ↓解説を読んで実装、1つ戻るという発想でACできた
#include <bits/stdc++.h>
using namespace std;
bool chack(string s) {
    if (s.find("WA") != string::npos) {
        return true;
    } else {
        return false;
    }
} 
 

int main() {
  string s;
  cin >> s;
  int cur = 0;
  int size = s.size();
  while(cur < (size - 1)) {
      string a = s.substr(cur, 2);
      if (a == "WA") {
        s.at(cur) = 'A';
        s.at(cur + 1) = 'C';
        // 最初のときだったらデクリメントしない
        if (cur != 0) cur--;
      } else {
        // WAじゃなかったら次の組み合わせをみる
        cur++;
      }
  }  
  cout << s;
}
