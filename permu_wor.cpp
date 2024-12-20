#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main() {

    string s;

    cin >> s;

    set<string> permutations;

    sort(s.begin(), s.end());

    do {

        permutations.insert(s);

    } while (next_permutation(s.begin(), s.end()));

    cout << permutations.size() << endl;

    for (const auto& perm : permutations) {

        cout << perm << endl;

    }

    return 0;

}


/**
* @runId: 8059
* @language: C++
* @author: 董胤扬
* @submitTime: 2024-11-12 14:29:46
*/



/**
#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main() {
    // 定义一个字符串变量 s，用于存储用户输入的字符串
    string s;

    // 从标准输入读取一个字符串，并存入变量 s 中
    cin >> s;

    // 定义一个集合（set）类型的变量 permutations，用于存储字符串 s 的所有不同排列
    set<string> permutations;

    // 对输入的字符串 s 进行排序，以便后续生成全排列时能够按照字典序依次生成
    sort(s.begin(), s.end());

    // 使用 do-while 循环来生成字符串 s 的所有全排列，并将每个不同的排列插入到 permutations 集合中
    do {
         将当前生成的排列 s 插入到 permutations 集合中。
         由于 set 容器会自动去重，所以相同的排列只会被插入一次
        permutations.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    // 输出 permutations 集合的大小，即字符串 s 的不同排列的个数
    cout << permutations.size() << endl;

    // 使用范围 for 循环遍历 permutations 集合中的每个元素（即每个不同的排列）
    for (const auto& perm : permutations) {
        // 输出当前的排列 perm
        cout << perm << endl;
    }

    return 0;
}
**/
