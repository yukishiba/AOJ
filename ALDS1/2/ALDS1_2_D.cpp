#if 0
g++ -std=c++14 "$0" && ./a.out
exit
#endif

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& A, int N, int G, int& cnt) {
  for (int i = G; i < N; i++) {
    int v = A[i];
    int j = i - G;
    while (j >= 0 && A[j] > v) {
      A[j+G] = A[j];
      j -= G;
      cnt++;
    }
    A[j+G] = v;
  }
}

void shellSort(vector<int>& A, int N) {
  int cnt = 0;
  vector<int> G;
  int h = 1;

  while (h <= N) {
    G.push_back(h);
    h = h * 3 + 1;
  }

  cout << G.size() << endl;

  for (int i = G.size() - 1; i >= 0; i--) {
    insertionSort(A, N, G[i], cnt);
    cout << G[i];
    if (i) cout << ' ';
  }

  cout << endl << cnt << endl;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  shellSort(A, N);
  for (int i = 0; i < N; i++) {
    cout << A[i] << endl;
  }
}

// $ sh filename.cpp
// で実行するためのテンプレートです。