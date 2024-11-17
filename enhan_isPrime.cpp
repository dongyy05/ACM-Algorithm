#include <vector>

auto eratosthenes(int upperbound) {
  std::vector<bool> flag(upperbound + 1, true);
  flag[0] = flag[1] = false; //exclude 0 and 1
  for (int i = 2; i * i <= upperbound; ++i) {
    if (flag[i]) {
      for (int j = i * i; j <= upperbound; j += i)
        flag[j] = false;
    }
  }	
  return flag;
}

// 如需看解析查阅eratosthenes.md
