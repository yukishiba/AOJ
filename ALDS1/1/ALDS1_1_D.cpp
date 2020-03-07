#if 0
g++ -std=c++14 "$0" && ./a.out
exit
#endif

#include <bits/stdc++.h>
using namespace std;
  
int main() {
  int n;
  cin >> n;

  int r_min;
  int r_max = -1 * 1e9 - 1;
  cin >> r_min;
  for (int i = 1; i < n; i++)
  {
    int temp;
    cin >> temp;
    r_max = max(temp - r_min, r_max);
    r_min = min(r_min, temp);
  }

  cout << r_max << endl;
}

// $ sh filename.cpp
// で実行するためのテンプレートです。