#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 函数：大数相加
string add_LargeNumbers(const string& num1, const string& num2) {
    string result = ""; // 用来存储结果
    int carry = 0, sum = 0; // carry用于进位，sum用于存储当前位的和

    // 从最低位开始相加
    int i = num1.size() - 1, j = num2.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        // 获取num1和num2当前位的数字，如果已超出长度则为0
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

        // 计算当前位的和
        sum = digit1 + digit2 + carry;
        carry = sum / 10; // 计算进位

        // 将当前位的结果加到result中
        result += (sum % 10) + '0';
    }

    // 反转result，因为我们是从最低位开始加的，最终需要反转
    reverse(result.begin(), result.end());
    return result;
}

// 函数：大数相减（num1 >= num2）
string subtract_LargeNumbers(const string& num1, const string& num2) {
    string result = ""; // 用来存储结果
    int borrow = 0, diff = 0; // borrow用于借位，diff用于存储当前位的差

    // 从最低位开始相减
    int i = num1.size() - 1, j = num2.size() - 1;
    while (i >= 0 || j >= 0) {
        // 获取num1和num2当前位的数字，如果已超出长度则为0
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
        digit1 -= borrow; // 减去借位

        // 如果当前位需要借位，则处理
        if (digit1 < digit2) {
            digit1 += 10; // 借位
            borrow = 1; // 标记需要借位
        } else {
            borrow = 0; // 不需要借位
        }

        diff = digit1 - digit2; // 计算当前位的差
        result += diff + '0'; // 将差值加入结果
    }

    // 删除结果中的前导零
    while (result.size() > 1 && result.back() == '0') result.pop_back();
    
    // 反转结果，因为我们是从最低位开始计算的
    reverse(result.begin(), result.end());
    return result;
}

// 函数：大数相乘
string multiply_LargeNumbers(const string& num1, const string& num2) {
    int m = num1.size(), n = num2.size();
    string result(m + n, '0'); // 结果的长度为两数长度之和，初始化为0

    // 从个位数开始乘
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0'); // 计算当前位的乘积
            int sum = mul + (result[i + j + 1] - '0'); // 当前位的乘积加上之前的进位
            result[i + j + 1] = sum % 10 + '0'; // 当前位存储结果
            result[i + j] += sum / 10; // 将进位加到前一位
        }
    }

    // 删除结果中的前导零
    while (result.size() > 1 && result[0] == '0') result.erase(result.begin());
    return result;
}

// 函数：大数除法
string divideLarge_Numbers(const string& num1, const string& num2) {
    if (num2 == "0") throw invalid_argument("Division by zero"); // 如果除数为零，抛出异常

    string quotient = "", remainder = "";

    // 遍历被除数num1
    for (char c : num1) {
        remainder += c; // 将当前数字添加到余数中
        int count = 0;

        // 删除余数中的前导零
        while (remainder.size() > 1 && remainder[0] == '0') remainder.erase(remainder.begin());

        // 判断余数是否大于等于除数num2
        while (remainder.size() >= num2.size() && remainder >= num2) {
            remainder = subtract_LargeNumbers(remainder, num2); // 余数减去除数
            count++; // 记录当前商的位
        }

        // 将商的当前位加到商字符串中
        quotient += (count + '0');
    }

    // 删除商中的前导零
    while (quotient.size() > 1 && quotient[0] == '0') quotient.erase(quotient.begin());
    return quotient;
}

int main() {
    string num1 = "987654321987654321"; 
    string num2 = "123456789123456789"; 

    // 输出加法、减法、乘法和除法的结果
    cout << "Addition: " << add_LargeNumbers(num1, num2) << endl;
    cout << "Subtraction: " << subtract_LargeNumbers(num1, num2) << endl;
    cout << "Multiplication: " << multiply_LargeNumbers(num1, num2) << endl;
    cout << "Division: " << divideLarge_Numbers(num1, num2) << endl;

    return 0;
}
