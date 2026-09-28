/**
 * 题目：输出素数
 * 来源：PTA 1378-1
 * 难度：简单
 * 标签：数学, 素数
 *
 * == 原题 ==
 * 编程实现：输入 N，找出 1-N 之间的素数，并输出。
 * 输出格式：每个素数之间用一个空格隔开，结尾有一个空格。
 *
 * 输入格式:
 *   输入一个正整数 N。2 <= N <= 1000。
 *
 * 输出格式:
 *   输出 1-N 之间的素数，每个素数之间用一个空格隔开，结尾有一个空格。
 *
 * 输入样例:
 *   10
 *
 * 输出样例:
 *   2 3 5 7
 */
#include <bits/stdc++.h>
using namespace std;
int Prime(int n){
    int nums=0;
    if (n==2 || n==3){
        cout << n << " ";
        return 0;
    }else {
        for (int i=1;i<=n;i++){
            if (n%i==0){
                nums++;
            }
        }
        if (nums==2){
            cout << n << " ";
        }
        return 0;
    }
}
int main(){
    int n;
    cin >> n;
    for (int l=1;l<=n;l++){
        Prime(l);
    }
    return 0;
}