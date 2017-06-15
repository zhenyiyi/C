//
//  Array.c
//  C001
//
//  Created by fenglin on 2017/6/15.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Array.h"

void test(){
    
    char *str = "string";
    
    char arrgs[] = "string";
    
    printf("%s, %s\n",str,arrgs);
    
    
    double balance[5] = {1,2,4,5,5};
    
    for (int i=0; i<5; i++) {
        printf("%.2f\n",balance[i]);
    }
    double * p = balance;
    
    printf("balance 地址 == %p == %p == %p \n",&balance, &balance[0],p);
    
    printf("p-> %p",&p);
    
}

void testArray(){
    double array[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,0,1,2}
    };
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            printf("num = %.2f\n",array[i][j]);
        }
    }
}

/*
 如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数。
 这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数。
 */


void myFunction(double *arr){
    
}

void myFunction2(double arr[10]){
    
}

void myFunction3(double arr[]){
    
}

double getAverage(int *numbers, int size){
    int res ;
    for (int i=0; i<size; i++) {
        res += numbers[i];
    }
    return res/size;
}










