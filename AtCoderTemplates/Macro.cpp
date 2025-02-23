#include <bits/stdc++.h>
using namespace std;
#define DEBUG(var, ...) DebugPrinter::print(#var, var, ##__VA_ARGS__)

class DebugPrinter {
public:
    template <typename T>
    static void print(const string& name, const T& var, optional<size_t> limit = nullopt) {
        cout << name << " = " << endl;
        printValue(var, {}, limit);
        cout << endl;
    }

private:
    // 汎用出力（基本型、string、pair など）
    template <typename T>
    static void printValue(const T& value, const vector<size_t>& indices, optional<size_t>) {
        if constexpr (is_same_v<T, string>) {
            cout << "\"" << value << "\"";
        } else if constexpr (is_same_v<T, char>) {
            cout << "'" << value << "'";
        } else {
            cout << value;
        }
    }

    // pair の出力
    template <typename T1, typename T2>
    static void printValue(const pair<T1, T2>& p, const vector<size_t>& indices, optional<size_t>) {
        cout << "[";
        printValue(p.first, indices, nullopt);
        cout << ", ";
        printValue(p.second, indices, nullopt);
        cout << "]";
    }

    // vector の出力
    template <typename T>
    static void printValue(const vector<T>& vec, const vector<size_t>& indices, optional<size_t> limit) {
        size_t count = 0;
        for (size_t i = 0; i < vec.size(); ++i) {
            if (limit && count >= limit.value()) break;
            auto new_indices = indices;
            new_indices.push_back(i);
            cout << "[";
            for (size_t j = 0; j < new_indices.size(); ++j) {
                cout << new_indices[j];
                if (j < new_indices.size() - 1) cout << ", ";
            }
            cout << "] => ";
            printValue(vec[i], new_indices, limit);
            cout << ";" << endl;
            ++count;
        }
    }

    // set の出力
    template <typename T>
    static void printValue(const set<T>& s, const vector<size_t>& indices, optional<size_t> limit) {
        size_t count = 0;
        for (const auto& elem : s) {
            if (limit && count >= limit.value()) break;
            printValue(elem, indices, limit);
            cout << ";" << endl;
            ++count;
        }
    }

    // map の出力
    template <typename K, typename V>
    static void printValue(const map<K, V>& m, const vector<size_t>& indices, optional<size_t> limit) {
        size_t count = 0;
        for (const auto& [key, value] : m) {
            if (limit && count >= limit.value()) break;
            cout << "[";
            printValue(key, indices, limit);
            cout << "] => ";
            printValue(value, indices, limit);
            cout << ";" << endl;
            ++count;
        }
    }
};

int main() {
    // vector<int> vec = {1, 2, 3, 4, 5};
    // map<string, int> mp = {{"a", 1}, {"b", 2}, {"c", 3}};
    // set<int> st = {10, 20, 30};
    // vector<vector<int>> multi_vec = {{1, 2}, {3, 4}, {5, 6}};
    // pair<int, string> pr = {42, "Hello"};

    // DEBUG(vec); // 全件表示
    // DEBUG(mp);
    // DEBUG(st);
    // DEBUG(multi_vec, 2); // 先頭2件のみ表示
    // DEBUG(pr);
}

