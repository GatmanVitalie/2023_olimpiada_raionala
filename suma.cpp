#include <fstream>
#include <math.h>
using namespace std;

int main() {
  fstream in("suma.in", ios::in);
  fstream out("suma.out", ios::out);
  int n, num, index = 0, V = 0;
  in >> n;
  in >> num;
  for (int i = 0; i < n; ++i) {
    index = index * 10 + 1;
  }
  for (int i = 0; i < n; ++i) {
    V += index * ((num / (int)pow(10, i)) % 10);
    //  std::cout << index*((num/(int)pow(10, i))%10) <<' ' << std::endl;
  }
  out << V;
  return 0;
}