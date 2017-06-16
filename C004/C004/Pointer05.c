//
//  Pointer05.c
//  C004 -- 5、C 从函数返回指针
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Pointer05.h"
#include <time.h>
#include <stdlib.h>

int *randomNumbers(){
    static int r[10];
    srand((unsigned)time(NULL));
    for (int i=0; i<10; i++) {
        int res = rand();
        r[i] = res;
        printf("r[%d] = %d\n",i,r[i]);
    }
    return r;
}

void test5(){
    
    int *res = randomNumbers();
    for (int i=0; i<10; i++) {
        printf("res[%d]->%d\n",i,*(res + i));
    }
}

