#if 0
g++ -std=c++14 "$0" && ./a.out
exit
#endif

#include <bits/stdc++.h>
using namespace std;

void pop_number(vector<int>& A, int& y, int& z) {
  z = A.back();
  A.pop_back();
  y = A.back();
  A.pop_back();
}

int main() {
  vector<int> A;
  int x;
  int y;
  int z;
  string temp;

  getline(cin, temp);
  stringstream ss{temp};
  while (getline(ss, temp, ' ')) {
    if(temp == "*") {
      pop_number(A, y, z);
      A.push_back(y * z);
    } else if (temp == "+") {
      pop_number(A, y, z);
      A.push_back(y + z);
    } else if (temp == "-") {
      pop_number(A, y, z);
      A.push_back(y - z);
    } else {
      A.push_back(atoi(temp.c_str()));
    }
  }
  cout << A.back() << endl;
}
