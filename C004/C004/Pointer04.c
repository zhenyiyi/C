//
//  Pointer04.c
//  C004 -- 4、C 传递指针给函数
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Pointer04.h"

/**
 计算两数之和
 */
void add(int x, int y, int *sum){
    int ret = x + y;
    *sum = ret;
}

void test4(){
    int *sum = malloc(sizeof(int));
    if (sum == NULL) {
        return;
    }
    add(1, 3, sum);
    printf("sum == %d\n",*sum);
    free(sum);
}
