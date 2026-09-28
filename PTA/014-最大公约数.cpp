/**
 * 题目：最大公约数
 * 来源：PTA 26
 * 难度：简单
 * 标签：数学
 *
 * == 原题 ==
 * 求两个正整数的最大公约数。
 * 题目要求，输入两个正整数，输出这两个整数的最大公约数。
 * 例如输入 18 45，输出 9。
 *
 * 输入格式:
 *   输入两个正整数。
 *
 * 输出格式:
 *   输出最大公约数。
 *
 * 输入样例:
 *   18 45
 *
 * 输出样例:
 *   9
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    if (a>=b){
        max=a;min=b;
    }else{
        max=b;min=a;
    }
    int maxnums=0;
    for (int i=1;i<=min;i++){
        if (a%i==0 && b%i==0){
            if (maxnums<i){
                maxnums=i;
            }
        }
    }
    cout << maxnums;
    return 0;
}