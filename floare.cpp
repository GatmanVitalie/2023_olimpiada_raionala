#include <fstream>
#include <vector>
using namespace std;

int main() {
  int n;
  fstream in("flaore.in", ios::in);
  fstream out("flaore.out", ios::out);
  in >> n;
  vector<int> fib;
  vector<int> output;
  fib.push_back(1);
  fib.push_back(1);
  int tmp;
  for (int i = 1; i<n; i++) {
    tmp = fib[i] + fib[i - 1];
    if (tmp < n) {
      fib.push_back(fib[i] + fib[i - 1]);
    } else {
      break;
    }
  }
  tmp = n;
  if (fib[fib.size()-1] == n) 
  {
    fib.erase(fib.end());
  }
  for (int i = fib.size() - 1; i >= 0; i--) {
    if (n - fib[i] >= 0) {
      n -= fib[i];
      output.push_back(fib[i]);
      i--;
    }
  }
  if (n == 0) {
    for (int i = 0; i < output.size(); i++) {
      out << output[i] << '\n';
    }
  } else {
    out << tmp;
  }
  return 0;
}
