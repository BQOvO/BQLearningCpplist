/**
 * 题目：LX208 十进制转N进制
 * 来源：PTA LX208
 * 难度：简单
 * 标签：数学, 进制转换
 *
 * == 原题 ==
 * LX208 十进制转N进制
 * 给定一个三位的十进制数，转换为 N 进制数。
 *
 * 输入格式:
 *   一行，两个数 v 和 N，空格分隔。N 表示 N 进制，2 <= N <= 9；
 *   v 是一个十进制数值。
 *
 * 输出格式:
 *   对应的 N 进制数。
 *
 * 输入样例:
 *   214 9
 *
 * 输出样例:
 *   257
 *
 * 提示:
 *   2*10^2 + 1*10^1 + 4*10^0 = 2*9^2 + 5*9^1 + 7*9^0
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums,n,p,l=0,i;
    int a[100];
    scanf("%d %d",&nums,&n);
    if (nums==0){
        printf("0");
    }else{
        while(nums!=0){
            p=nums%n;
            nums=nums/n;
            a[l]=p;
            l++;
        }
    }
    for (i=l-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums,n,p,l=0,i;
    int a[100];
    scanf("%d %d",&nums,&n);
    if (nums==0){
        printf("0");
    }else{
        while(nums!=0){
            p=nums%n;
            nums=nums/n;
            a[l]=p;
            l++;
        }
    }
    for (i=l-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}