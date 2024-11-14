#include<iostream>
#include<cmath>
using namespace std;

// 使用sqrt()优化减少循环次数
int isPrime(long n) // 函数重载
{
  if(n < 2) return 0;
  for(int i = 2; i < sqrt(n) + 2; i++)
    {
      if(n % i == 0)
	return 0;
    }
  return 1;
}

// 常规算法
int isPrime(int n)
{
  if(n < 2) return 0;
  for(int i = 2; i < n / 2; i++)
    {
      if(n % 2 == 0)
	return 0;
    }
  return 1;
}

int main()
{
  int num;
  long t;
  cin >> num >> t;
  cout << isPrime(num) << endl;
  cout << isPrime(t);
  return 0;
}
