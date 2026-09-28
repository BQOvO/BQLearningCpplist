/**
 * 题目：逆序对
 * 来源：PTA 2
 * 难度：中等
 * 标签：数组, 分治, 归并排序
 *
 * == 原题 ==
 * 令从 1 到 n（n 是一个正整数）这 n 个数以某种顺序排成一列，
 * 得到的序列 a_1, a_2, ..., a_n 叫做一个排列。
 * 我们称一个排列中，满足 1 <= i < j <= n, a_i > a_j 的数对 (a_i, a_j) 叫做一个逆序对。
 * 现在给定一个排列，请你计算这个排列中逆序对的个数。
 *
 * 输入格式:
 *   第一行，一个整数 n (1 <= n <= 10^3)；
 *   第二行，n 个整数 a_1, a_2, ..., a_n (1 <= a_i <= n, a_i != a_j)，代表排列
 *
 * 输出格式:
 *   一行，一个整数，代表逆序对的个数
 *
 * 输入样例:
 *   3
 *   3 2 1
 *
 * 输出样例:
 *   3
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}