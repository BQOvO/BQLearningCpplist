/**
 * 题目：数字沙漏
 * 来源：PTA 37
 * 难度：中等
 * 标签：循环, 模拟
 *
 * == 原题 ==
 * 当 n=5 时，数字沙漏图形如输出样例所示。请观察并明确数字沙漏图形的规律。
 * 要求输入一个整数 n，输出满足规律的沙漏图形。
 *
 * 输入格式:
 *   输入一个整数 n (1 < n < 10)。
 *
 * 输出格式:
 *   输出满足规律的数字沙漏图形。
 *
 * 输入样例:
 *   5
 *
 * 输出样例:
 *   555555555
 *    4444444
 *     33333
 *      222
 *       1
 *      222
 *     33333
 *    4444444
 *   555555555
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums;
    scanf("%d",&nums);
    int nums_2=nums;
    for (int i=0;i<nums;i++){
        for (int n=0;n<i;n++){
            cout << " ";
        }
        for (int m=2*nums_2-1;m>0;m--){
            cout << nums_2;
        }
        nums_2--;
        cout << endl;
    }
    int nums_3=2;
    int nums_4=nums;
    for (int p=0;p<nums-1;p++){
        for (int l=nums_4-2;l>0;l--){
            cout << " ";
        }
        for (int k=0;k<2*nums_3-1;k++){
            cout << nums_3;
        }
        nums_2=nums_2+2;
        nums_3++;
        nums_4--;
        cout << endl;
    }
    return 0;
}