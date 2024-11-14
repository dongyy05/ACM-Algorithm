#include<iostream>
using namespace std;

// int gcd(int big, int small) // 将最小共倍数问题转化为最大公约数((A*B)/gcd(A,B))
// {
//   int temp;
//   while(small != 0)
//     {
//       temp = big % small;
//       big = small;
//       small = temp;
//     }
//   return big;
// }

int gcd(int big, int small) // 运用递归简化算法，本质还是欧几里德算法
{
  if(small == 0) return big;
  return gcd(small, big % small);
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int c, LCM;
  c=a>b?a:b;
  if(c == b)
    {
      a = b;
      b = c;

      LCM = (a*b) / gcd(a,b);
    }
  else LCM = (a*b) / gcd(c, b);

  printf("%d\n", LCM);

  return 0;
}
