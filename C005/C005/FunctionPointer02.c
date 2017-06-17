//
//  FunctionPointer02.c
//  C005
//
//  Created by fenglin on 2017/6/16.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "FunctionPointer02.h"
#include <stdlib.h>

#pragma mark --C 语言的函数指针
void inviteAttend(int nameCount, char **(*AttendNames)(void)){
    char **p = AttendNames();
    for (int i=0; i<nameCount; i++) {
        printf("%s\n",p[i]);
    }
}
static char *arr[3] = {"fenglin","QiQi","wenhua"};
char ** getNextRandomAttendName(){
    printf("获取当前的数组-> %s",__func__);
    return arr;
}



void fillArray(int *arr, size_t arraySize, int(*getNextValue)(void)){
    for (int i=0; i<arraySize; i++) {
        arr[i] = getNextValue();
    }
}
int getNextRandomValue(){
    return rand();
}





typedef void(*Completion)(_Bool flag, char**);

void fetchPhoneList(Completion comletion){
    char *arr[] = {
        "1508888888","13333333333","15888888888","18699999999"
    };
    comletion(0, arr);
}




void callback(_Bool flag, char*arr[]){
    printf("flag-> %d\n",flag);
    for (int i=0; i<4; i++) {
        printf("%s\n",arr[i]);
    }
};

void test2(){
    char *a[3] = {"fenglin","QiQi","wenhua"};
    
    printf("a[0] -> %s\n",a[0]);
    inviteAttend(3, getNextRandomAttendName);
    
    int arr[10];
    fillArray(arr, 10, getNextRandomValue);
    for (int i=0; i<10; i++) {
        printf("%d\n",arr[i]);
    }
    
    fetchPhoneList(callback);
}
