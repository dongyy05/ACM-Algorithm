#include<iostream>
using namespace std;
typedef long long ll;

// 快速幂
// ll power(ll a, ll b)
// {
//   ll r = 1;
//   while(b!=0)
// {
//     if(b&1) // b % 2 == 1
//       r = a*r;
//     b >>=1; // 二进制位数后移一位
//     a *= a;
//   }
//   return r;
// }

// 龟速乘
// ll slow_plus(ll a, ll b)
// {
//   ll r = 0;
//   while(b!=0)
//     {
//       if(b&1) // b % 2 == 1
// 	r = r + a;
//       b >>= 1; // 二进制位数后移一位
//       a = a + a;
//     }
//   return r;
// }

// 快速幂取模
// ll powerMod(ll a, ll b, ll p)
// {
//   ll r = 1;
//   while(b!=0)
//     {
//       if(b&1) // b % 2 == 1
// 	r = (r*a) % p;
//       b >>= 1;
//       a = (a*a) % p;
//     }
//   return r;
// }

// 龟速乘取模
// ll slow_plus_mod(ll a, ll b, ll p)
// {
//   ll r = 0;
//   while(b!=0)
//     {
//       if(b&1) // b % 2 == 1
// 	r = (r+a) % p;
//       b >>= 1;
//       a = (a+a) % p;
//     }
//   return r;
// }

// int main()
// {
//   ll a, b;
//   cin >> a >> b;
//   cout << slow_plus(a, b) << endl;
//   cout << power(a, b) << endl;
  
//   ll a, b, p;
//   cin >> a >> b >> p;
//   cout << powerMod(a,b,p) << endl;
//   cout << slow_plus_mod(a, b, p) << endl;
//   return 0;
// }

