#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s, n;
  cin >> s >> n;
  
  if (s == "sick" && n == "sick") {
    cout << 1;
  } else if (s == "sick") {
    cout << 2;
  } else if (n == "sick") {
    cout << 3;
  } else {
    cout << 4;
  }
}
