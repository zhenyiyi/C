//
//  main.c
//  C001
//
//  Created by fenglin on 2017/6/15.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include <stdio.h>
#include "Array.h"

int main(int argc, const char * argv[]) {
    testArray();
    double arr[] = {1,2,3,4,6};
    double res =  getAverage((int *)arr, 5);
    printf("res-> %f",res);
    
    
    return 0;
}
