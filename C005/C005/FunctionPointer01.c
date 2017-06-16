//
//  FunctionPointer01.c
//  C005 
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include <stdio.h>


int sum(int x, int y){
    return x + y;
}




void test(){
    int (*functionPointer)(int, int) = sum;
    
    // functionPointer 是函数指针。
    
    printf("请输入三个数字\n");
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d,%d,%d\n",a,b,c);
    int res =  functionPointer(functionPointer(a,b),c);
    printf("res = %d\n",res);
}





