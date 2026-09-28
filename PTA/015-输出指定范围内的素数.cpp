/**
 * 题目：输出指定范围内的素数
 * 来源：PTA 29
 * 难度：简单
 * 标签：数学, 素数
 *
 * == 原题 ==
 * 输入两个大于 1 的正整数 A, B (A < B)，然后输出这两个数范围内的所有素数。
 *
 * 输入格式:
 *   输入两个整数 A 和 B。
 *
 * 输出格式:
 *   输出 A 和 B 之间的所有素数。例如，a1,a2,a3（逗号分隔）。
 *
 * 输入样例:
 *   2 10
 *
 * 输出样例:
 *   2,3,5,7
 */
#include <bits/stdc++.h>
using namespace std;
int Prime(int n){
    int nums=0;
    if (n==2 || n==3){
        return 1;
    }else {
        for (int i=1;i<=n;i++){
            if (n%i==0){
                nums++;
            }
        }
        if (nums==2){
            return 1;
        }
        return 0;
    }
}
int main(){
    int a,b,c=0;
    int prime[10000];
    scanf("%d %d",&a,&b);
    for (int l=a;l<=b;l++){
        if (Prime(l)==1){
            prime[c++]=l;
        }
    }
    for (int j=0;j<c;j++){
        if (j!=0){
            printf(",");
        }
        printf("%d",prime[j]);
    }
    return 0;
}