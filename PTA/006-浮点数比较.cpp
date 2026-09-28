/**
 * 题目：LX211 浮点数比较
 * 来源：PTA LX211
 * 难度：中等
 * 标签：数学, 浮点数
 *
 * == 原题 ==
 * LX211 浮点数比较
 * 输入三个浮点数 a, b, c，判定 a-b 和 c 是否相等。
 * a, b, c 的精度均为 10^-4。
 * 注意：本题禁止使用分支结构。
 *
 * 输入格式:
 *   一行，输入三个浮点数 a, b, c，以逗号分隔。
 *
 * 输出格式:
 *   true 或 false
 *
 * 输入样例:
 *   2.2226, 2.2224, 0.0002
 *
 * 输出样例:
 *   true
 *
 * 提示:
 *   a, b, c 的精度均为 10^-4。
 *   注意：本题禁止使用分支结构
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,f;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    cout << boolalpha << (fabs((a-b)-c) < 1e-5) << endl;
    return 0;
}