#if 0
g++ -std=c++14 "$0" && ./a.out
exit
#endif

#include <bits/stdc++.h>
using namespace std;

bool checkPrimeNumber(int N) {
  bool check = true;
  for (int i = 2; i <= sqrt(N); i++) {
    check = (N % i != 0);
    if (!check) break;
  }
  return check;
}

int main() {
  int N;
  cin >> N;
  int ANS = 0;
  for (int i = 0; i < N; i++) {
    int TEMP;
    cin >> TEMP;
    if (checkPrimeNumber(TEMP)) ANS++;
  }
  
  cout << ANS << endl;
}

// $ sh filename.cpp
// で実行するためのテンプレートです。