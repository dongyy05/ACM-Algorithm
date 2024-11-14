#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_set<int> num;
	int a;
   while(n--)
   {
       cin >> a;
       auto it = num.find(a); // return iterator
       if(it == num.end())
       {
           cout << a << " ";
           num.insert(a);
       }
   }
 
}

/**
* @runId: 8125
* @language: C++ With O2
* @author: 董胤扬
* @submitTime: 2024-11-13 11:36:14
*/
