//
//  FunctionPointer02.c
//  C005
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "FunctionPointer02.h"

void inviteAttend(int nameCount, char **(*AttendNames)(void)){
    char **p = AttendNames();
    for (int i=0; i<nameCount; i++) {
        printf("%s",p[i]);
    }
}

char ** getNextRandomAttendName(){
    static char *arr[3] = {"fenglin","QiQi","wenhua"};
    return arr;
}


void test2(){
    char *a[3] = {"fenglin","QiQi","wenhua"};
    
    printf("a[0] -> %s\n",a[0]);
    inviteAttend(3, getNextRandomAttendName());
}
