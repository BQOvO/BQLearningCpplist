/**
 * 题目：LX214 闰年的二月
 * 来源：PTA LX214
 * 难度：简单
 * 标签：数学, 技巧
 *
 * == 原题 ==
 * LX214 闰年的二月
 * 普通的二月有 28 天，闰年的二月有 29 天。
 * 这个题目中严禁使用 if 或问号表达式等条件判断语句。
 *
 * 输入格式:
 *   true 或 false，表示年份是否为闰年
 *
 * 输出格式:
 *   二月的天数
 *
 * 样例 #1:
 *   输入: true
 *   输出: 29
 *
 * 样例 #2:
 *   输入: false
 *   输出: 28
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    bool b;
    int moon=28;
    cin >> boolalpha >> b;
    moon+=b;
    cout << moon << endl;
    return 0;
}