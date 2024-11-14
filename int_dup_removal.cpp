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
 * 当调用容器的find()函数去查找一个元素时，它会遍历容器内部的数据结构来寻找与指定值匹配的元素。如果在整个遍历过程中都没有发现与要查找的值（这里是a）相等的元素，那么find()函数就无法确定一个有效的指向该元素的迭代器。
 * find()函数就会返回容器的end()迭代器。这是因为end()迭代器被定义为指向容器中最后一个元素之后的位置
**/


/**
* @runId: 8125
* @language: C++ With O2
* @author: 董胤扬
* @submitTime: 2024-11-13 11:36:14
*/


