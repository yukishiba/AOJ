#if 0
g++ -std=c++14 "$0" && ./a.out
exit
#endif

#include <bits/stdc++.h>
using namespace std;

int gcd(int X, int Y) {
  return Y == 0 ? X : gcd(Y, X % Y);
}
  
int main() {
  int X, Y;
  cin >> X >> Y;
  cout << gcd(X, Y) << endl;
}

// $ sh filename.cpp
// で実行するためのテンプレートです。