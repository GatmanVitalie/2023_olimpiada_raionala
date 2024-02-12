#include <fstream>
#include <math.h>
#include <string>
using namespace std;

int main() {
  fstream in("suma.in", ios::in);
  fstream out("suma.out", ios::out);
  int n, index = 0, V = 0;
  char num;
  in >> n;
  for (int i = 0; i < n; i++)
  {
    index = (index*10)+1; 
  }
  while ( in >> num) {
    V+=index * (num-'0');
  }
 
  
  out << V;
  return 0;
}