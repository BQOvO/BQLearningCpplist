/**
 * 题目：LX219 字符串和数字
 * 来源：PTA LX219
 * 难度：简单
 * 标签：字符串
 *
 * == 原题 ==
 * LX219 字符串和数字
 * 将输入的数字和字符串，按照字符串和数字的顺序进行输出。
 *
 * 输入格式:
 *   输入有两行。第一行为一个正整数 n，n <= 10^9；
 *   第二行为一个字符串 s，其中可能包含空白符。
 *
 * 输出格式:
 *   先输出字符串 s，后输出数字 n-1，二者之间用一个符号 "-" 拼接。
 *
 * 输入样例:
 *   10000
 *   I love you
 *
 * 输出样例:
 *   I love you-9999
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    cout << s << "-" << n-1 << endl;
    return 0;
}