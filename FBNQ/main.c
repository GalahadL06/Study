//
//  main.c
//  FBNQ
//
//  Created by Galahad L on 2024/10/13.
//

#include <stdio.h>
#include <stdlib.h>
//使用递归实现计算阶乘
long fraction(int a){
    if(a==1||a==0){
        return 1;
    }else{
        return a*fraction(a-1);
    }
}
//使用递归实现输出斐波那契数列
long fbnq(int a){
    if(a==1||a==2){
        return 1;
    }else{
        return fbnq(a-1) + fbnq(a-2);
    }
}
//输出速度明显很慢
//使用迭代优化上述代码
long fbnqe(int a){
    int count;
    long pre1 = 1,pre2 = 1,present = 0;
    if(a==1||a==2){
        present = 1;
    }
    for(count=3;count<=a;count++){
        present = pre1+pre2;//定义present值计算方法
        pre1 = pre2;
        pre2 = present;//将pre1和pre2前移一位实现从3开始按1迭代
    }
    return present;
}
int main(void){
    long fbnq(int a);
    long fraction(int a);
    int a;
    long result;
    long b;
    printf("Input a:");
    scanf("%d",&a);
    result = fraction(a);
    printf("a! = %ld\n",result);
    for(int count = 1;count <= a;count++){
        b = fbnqe(count);
        printf("%ld ",b);
    }
}
