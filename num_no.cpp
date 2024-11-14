#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // 输入一个大整数N
    string N;
    cin >> N;

    // 定义一个map来记录每个数字出现的次数
    map<char, int> digit_count;

    // 遍历N中的每个字符，统计每个数字的出现次数
    for (char digit : N) {
        digit_count[digit]++;
    }

    // 按照升序输出每个数字及其出现的次数
    for (const auto& entry : digit_count) {
        cout << entry.first << ":" << entry.second << endl;
    }

    return 0;
}
