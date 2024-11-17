# 代码块

```c++
#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n, m,t;
  cin >> n >> m;
  vector<int> num;
  for(int i = 0; i < n; i++){
      cin >> t;
      num.push_back(t);
    }
  if(m>n) m %=n;
  int s = n-m;
  vector<int> left(num.begin(), num.begin()+s);
  vector<int> right(num.begin()+s, num.end());
  left.insert(left.begin(), right.begin(), right.end()); 
  for(auto i = 0; i < left.size(); i++)
  {
    cout << left[i];
    if(i != left.size()-1)
      putchar(' ');
  }
}

```



### **为什么需要 `m %= n`？**

1. **超出数组长度的移动：**
   - 如果 `m > n`，那么实际上移动 `m` 个位置和移动 `m % n` 个位置是等价的。
   - 因为数组是循环的，移动一个完整的数组长度（`n`）后，最终状态与未移动一样。
2. **示例解释：** 假设数组为 `[1, 2, 3, 4, 5]`：
    - 如果 n = 5 且 移动 7 个位置后：
        - 7 % 5 = 2，因此移动 7 个位置等价于移动 2 个位置。
        - 最终结果和移动 2 个位置相同。
