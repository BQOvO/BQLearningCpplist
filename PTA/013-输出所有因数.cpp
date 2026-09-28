/**
 * 题目：输出所有因数
 * 来源：PTA 25
 * 难度：简单
 * 标签：数学
 *
 * == 原题 ==
 * 输入一个整数，输出其所有因数。
 * 例如：输入 10，输出 1、2、5 和 10。
 *
 * 输入格式:
 *   输入一个正整数（小于 10^5）。
 *
 * 输出格式:
 *   由小到大输出各因数，使用空格为分隔，结尾有空格。
 *
 * 输入样例:
 *   10
 *
 * 输出样例:
 *   1 2 5 10
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums,i;
    scanf("%d",&nums);
    for (i=1;i<=nums;i++){
        if(nums%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}