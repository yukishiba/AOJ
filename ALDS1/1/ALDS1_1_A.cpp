#if 0
g++ -std=c++14 "$0" && ./a.out
exit
#endif

#include <bits/stdc++.h>
using namespace std;

void trace(vector<int> A, int N) {
  for (int i = 0; i < N; i++) {
    if (i > 0) cout << ' ';
    cout << A[i];
  }
  cout << endl;
}

void insertionSort(vector<int> A, int N) {
  for (int i = 0; i < N; i++) {
    int v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
    trace(A, N);
  }
}
  
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  insertionSort(A, N);
}

// $ sh filename.cpp
// で実行するためのテンプレートです。
// 1 insertionSort(A, N) // N個の要素を含む0-オリジンの配列A
// 2   for i が 1 から N-1 まで
// 3     v = A[i]
// 4     j = i - 1
// 5     while j >= 0 かつ A[j] > v
// 6       A[j+1] = A[j]
// 7       j--
// 8     A[j+1] = v