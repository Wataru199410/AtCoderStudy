// char型を文字列連結したい

int main() {
  string s;
  cin >> s;
  
  for (int i = 0; i < (int)s.size(); i++) {
    // aにストリングのi文字目とi+1文字目を連結した文字列をいれたい
    string a = s.at(i) + s.at(i + 1);
    // しかしこれだとエラーになる
    // s.at(i) + s.at(i + 1) の結果が int になっているため
    // char型同士で+演算子を使うと、文字コードの足し算になってしまう
    // なのでstring型コンストラクタを使うか
    // string(1, 'X')→一文字の長さでstring型を作る、文字はXという意味
    string a = string(1, s.at(i)) + string(1, s.at(i + 1));

    // substrを使う
    // ↓i文字目から2文字とる
    // 例: abcd →s.substr(1, 2)→結果: bc
    string a = s.substr(i, 2);
  }
}
