//
//  Pointer01.c
//  C004 -- 1、C 指针的算术运算
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Pointer01.h"


void test(){
    
    int arr[3] = {1,10,3};
    
#pragma mark -- 递增一个指针
    int *p = arr;
    
    for (int i=0; i<3; i++) {
        
        printf("存储地址： arr[%d] = %p \n",i, p);
        
        printf("存储值： arr[%d] = %d \n",i, *p);
        
        p++;
    }
    
    printf("***********************************\n");
#pragma mark --递减一个指针
    
    int *p2 = &arr[2];
    for (int i=2; i>=0; i--) {
        
        printf("存储地址： arr[%d] = %p \n",i, p2);
        
        printf("存储值： arr[%d] = %d \n",i, *p2);
        
        p2--;
    }
    printf("***********************************\n");
#pragma mark -- 指针的比较 (指针可以用关系运算符进行比较，如 ==、< 和 >)
    
    int *p3 = arr;
    int i=0;
    while (p3 <= &arr[2]) {
        printf("存储地址： arr[%d] = %p \n",i, p3);
        printf("存储值： arr[%d] = %d \n",i, *p3);
        p3++;
        i++;
    }
}

