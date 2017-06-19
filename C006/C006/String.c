//
//  String.c
//  C006
//
//  Created by fenglin on 2017/6/17.
//  Copyright © 2017年 fenglin. All rights reserved.
//

#include "String.h"
#define kName "zhangwenhua"



/**
 1、字符串存在于 静态存储区中(static memory),程序开始运行时才把该数组分配内存，此时才字符串拷贝到数组中。此时字符串有两个副本。
 2、数组和指针的区别：数组是常量，而指针是变量，并且可以递增。
 */
void test(){
    
    char p[] = kName;
    
    char *p2 = kName;
    
    printf("%p\n","zhangwenhua");
    
    printf("%p\n",kName);
    
    printf("%p\n",p);
    
    printf("%p\n",p2);
    
    printf("%p\n","zhangwenhua");
    
    starBar();
    
    
    char *p3 = "fenglin";
    
//    p3[1] = 'A'; //是不允许这样访问。
    
    
    

}
