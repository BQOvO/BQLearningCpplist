/**
 * 题目：LX209 纯小数的二进制
 * 来源：PTA LX209
 * 难度：中等
 * 标签：数学, 进制转换, 浮点数
 *
 * == 原题 ==
 * LX209 纯小数的二进制
 * 输入一个纯小数 f1，将其转换为具有 5 位的二进制形式，
 * 并求这个二进制数所表示的十进制数 f2 与 f1 的精度差距。
 *
 * 输入格式:
 *   一个纯小数 f1，0 < f1 < 1。
 *
 * 输出格式:
 *   输出 f1 与 f2 的精度差距，这个差距为十进制正数。保留 4 位精度。
 *
 * 输入样例:
 *   0.570795
 *
 * 输出样例:
 *   0.0083
 *
 * 提示:
 *   0.570795 转换为二进制为 0.10010
 *   它代表的十进制数为 1*2^{-1} + 1*2^{-4} = 0.5625
 *   最终 0.570795 - 0.5625 ≈ 0.0083
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    double f1;
    cin >> f1;
    double temp=f1;
    double f2=0.0;
    double weight=0.5;
    for (int i=0;i<5;i++) {
        temp*=2;
        int bit=(int)temp;
        f2+=bit*weight;
        temp-=bit;
        weight/=2;
    }
    double diff=fabs(f1-f2);
    printf("%.4f",diff);
    return 0;
}