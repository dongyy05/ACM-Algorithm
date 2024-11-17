# 代码块

```c++
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
```

## 埃拉托斯特尼筛法

初始化：

a[1] = a[0] = 1;0 和 1 不是素数，因此将 a[0] 和 a[1] 设置为 1，表示它们不是素数。

筛选素数：

外层循环：for(int i = 2; i < sqrt(Max); i++)：
从 i = 2 开始，依次检查 i 是否是素数，直到 sqrt(Max)。sqrt(Max) 是因为素数的筛选只需要到 sqrt(Max) 即可，因为如果一个数 n 有因子大于 sqrt(n)，则一定有一个因子小于 sqrt(n)。

内层循环：if(a[i] == 0)：
如果 a[i] == 0，表示 i 是素数。

标记倍数：for(int j = i*2; j <= Max; j += i)或for(int j = i * i; j <= Max; j += i)：

从 i 的倍数 i * 2 开始，遍历 i 的所有倍数（例如：i * 2, i * 3, i * 4, ...），将它们标记为非素数，即 a[j] = 1，因为这些倍数一定不是素数。
a[j] = 1;：
将 a[j] 设置为 1，表示 j 不是素数。