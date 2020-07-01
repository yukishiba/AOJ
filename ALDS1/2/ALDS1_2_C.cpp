#if 0
g++ -std=c++14 "$0" && ./a.out
exit
#endif

#include <bits/stdc++.h>
using namespace std;

struct Card {
  char suit;
  int num;
  string value () {
    return suit + to_string(num);
  }
};

void trace(vector<Card> C, int N) {
  for (int i = 0; i < N; i++) {
    if (i > 0) cout << ' ';
    cout << C[i].value();
  }
  cout << endl;
}

void bubbleSort(vector<Card>& C, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = N-1; j > i; j--) {
      if (C[j].num < C[j-1].num) {
        Card temp = C[j];
        C[j] = C[j-1];
        C[j-1] = temp;
      }
    }
  }
}

void selectionSort(vector<Card>& C, int N) {
  for (int i = 0; i < N; i++) {
    int minJ = i;
    for (int j = i; j < N; j++) {
      if (C[j].num < C[minJ].num) {
        minJ = j;
      }
    }
    if (minJ != i) {
      Card temp = C[i];
      C[i] = C[minJ];
      C[minJ] = temp;
    }
  }
}

bool isStable(vector<Card> A, vector<Card> B, int N) {
  for (int i = 0; i < N; i++) {
    if (A[i].value() != B[i].value()) return false;
  }
  return true;
}
  
int main() {
  int N;
  cin >> N;
  vector<Card> A(N);
  vector<Card> B(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i].suit >> A[i].num;
    B[i] = A[i];
  }
  bubbleSort(A, N);
  trace(A,N);
  cout << "Stable" << endl;
  selectionSort(B, N);
  trace(B,N);
  cout << (isStable(A, B, N) ? "Stable" : "Not stable") << endl;
}
