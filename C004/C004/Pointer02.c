//
//  Pointer02.c
//  C004 -- 2、C 指针数组
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Pointer02.h"

const int ArrayCount = 3;

void test2(){
 
#pragma mark -- 用一个指向int的指针数组来存储一堆
    int var[] = {10,100,200};
    
    // Definition of variable with array type needs an explicit size or an initializer
    // 初始化一个指针数组必须制定数组的大小。
    int *pArr[ArrayCount];
    
    for (int i=0; i<ArrayCount; i++) {
        pArr[i] = &var[i];
        printf("pArr[%d] == %p , var[%d] == %p\n",i,pArr[i],i,&var[i]);
    }
    
    
    for (int i=0; i<ArrayCount; i++) {
        printf("pArr[%d] 指向的值是-> %d\n",i,*pArr[i]);
    }
    printf("***********************************\n");
#pragma mark -- 用一个指向字符的指针数组来存储一个字符串列表
    char * p1 = "zhangwehua";
    char * p2 = "fenglin";
    char * p3 = "QiQi";
    char * ch[] = {p1,p2,p3};
    
    char **p[ArrayCount];
    
    for (int i=0; i<ArrayCount; i++) {
        printf("ch[%d] = %s 指针地址是-> %p\n",i,ch[i], &ch[i]);
        p[i] = &ch[i];
    }
    
    for (int i=0; i<ArrayCount; i++) {
        printf("p[%d] 指向的值是-> %s\n",i,*p[i]);
    }
}
