
#include <fstream>
#include <math.h>
using namespace std;

int yfun(int n) { return 2 * n * n - n; }
int nr_y(int n) { return ceil((double)((1 + sqrt(1 + 8 * n)) / 4)); }
int xfun(int n) { return 2 * n * n + n; }
int nr_x(int n) { return ceil((double)((sqrt(1 + 8 * n) - 1) / 4)); }

int main() {
  int n, y, x;
  fstream in("rebot.in", ios::in);
  fstream out("rebot.out", ios::out);
  in >> n;
  y = (yfun(nr_y(n)) - n + 1 < n - yfun(nr_y(n) - 1)) ? yfun(nr_y(n)) - n + 1
                                                      : n - yfun(nr_y(n) - 1);
  x = (xfun(nr_x(n)) - n + 1 < n - xfun(nr_x(n) - 1)) ? xfun(nr_x(n)) - n + 1
                                                      : n - xfun(nr_x(n) - 1);
  out << y << '\n' << x;
  return 0;
}
