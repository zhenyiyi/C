//
//  main.c
//  C005 -- 1、函数指针
//          2、回调函数
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include <stdio.h>
#include "FunctionPointer01.h"
#include "FunctionPointer02.h"
/*
 函数指针是指向函数的指针变量。
 通常我们说的指针变量是指向一个整型变、字符型或数组等变量，而函数指针是指向函数。
 函数指针可以像一般函数一样，用于调用函数、传递参数。
 
 函数指针作为某个函数的参数
 函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数。
 简单讲：回调函数是由别人的函数执行时调用你实现的函数。
 */
int main(int argc, const char * argv[]) {
   
    test2();
    
    return 0;
}
