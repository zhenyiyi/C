//
//  String02.c
//  C006
//
//  Created by fenglin on 2017/6/18.
//  Copyright © 2017年 fenglin. All rights reserved.
//

#include "String02.h"
#include <stdlib.h>

#pragma mark -- 指针和字符串
void pointerAndString(){
    const char *msg = "today is a fine day";
    const char *copy = msg;
    
    printf("msg指向的地址：%p, msg指针的地址：%p\n",msg,&msg);
    
    printf("msg指向的地址：%p, copy指针的地址：%p\n",copy,&copy);
    
    /*
     msg指向的地址：0x100000ef8, msg指针的地址：0x7fff5fbff748
     msg指向的地址：0x100000ef8, copy指针的地址：0x7fff5fbff740
     */
}

#pragma mark --字符串的输入

void inputString(){
    printf("\n请输入名字：\n");
    char *name = malloc(100);
    printf("name指向的地址->%p\n",name);
    scanf("%s",name);
    printf("%s\n",name);
    free(name);
}

void inputString2(){
    printf("\n请输入名字：\n");
    char name[100];
    printf("name指向的地址->%p\n",name);
    scanf("%s",name);
    printf("%s\n",name);
}

void inputString3(){
    char word[5];
    
    gets(word); // warning: this program uses gets(), which is unsafe.
    // gets函数 无法检查数组是否装的下行。
    // 如果输入字符过长，会导致缓冲区溢出（buffer overflow）。
    
    printf("%s\n",word);
    
    puts(word); // EXC_BAD_ACCESS(code=EXC_I386_GPFLT);
    
}

void inputString4(){
    
    char arr[5];
    
    fgets(arr, 5, stdin); // 超过（5-1）个会自动截取。
    
    fputs(arr, stdout);
}

void test2(){
    
//    pointerAndString();
//    inputString();
//    inputString2();
//    inputString3();
    inputString4();
}
