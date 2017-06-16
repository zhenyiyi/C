//
//  Pointer03.c
//  C004 --3、C 指向指针的指针
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Pointer03.h"

void test3(){
    
    //指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。
    int **ptr;
    
    int i = 10;
    
    int *ptr2 = &i;
    
    ptr = &ptr2;
    
    printf("i == %d  == %d \n",**ptr, *ptr2);
    
    
    char *arr[3] = {"z","s","e"};
    
    char **p = arr;
    
    printf("%s\n",*p);
    
    for (int i=0; i<3; i++) {
        printf("*p[%d]->%s\n",i,*p);
        p++;
    }
    
}
