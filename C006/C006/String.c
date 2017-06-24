//
//  String.c
//  C006
//
//  Created by fenglin on 2017/6/17.
//  Copyright © 2017年 fenglin. All rights reserved.
//

#include "String.h"
#define kName "zhangwenhua"

#define MSG "I am a symbolic string constant"
#define MAXLENGTH 81

void displayString(){
    
    char words[MAXLENGTH] = "I am a string in a array";
    
    const char *str = "Something is pointing at me";
    
    puts("Here are some strings:\n");
    
    puts(MSG);
    
    puts(words);
    
    puts(str);
    
    words[0] = 'A';
    
    puts(words);

    char *str2 = MSG;
    printf("%p\n",str2);
    printf("%p\n",MSG);
    printf("%p\n","I am a symbolic string constant");
    printf("%p\n",&(*MSG));

    printf("%s, %p , %c\n","WE","are", *"space farers");
    
    printf("%c\n",*("string" + 4));
    
    
    char *p1 = "string";
    
    char arr1[] = "string";
    
    printf("%p\n%p\n",p1,arr1);
    
    char heart[] = "I love you";
    
    char *header = "I love you";
    
    
    for (int i=0; i<6; i++) {
        putchar(heart[i]);
        printf("-");
        putchar(header[i]);
        printf("\n");
        putchar(*(heart+i));
        printf("-");
        putchar(*(header+i));
        printf("\n");
    }
    printf("\n---------------\n");
}
/*
 Here are some strings:
 I am a symbolic string constant
 I am a string in a array
 Something is pointing at me
 A am a string in a array
 */


void stringConstant(){
    
}

/**
 1、字符串存在于 静态存储区中(static memory),程序开始运行时才把该数组分配内存，此时才字符串拷贝到数组中。此时字符串有两个副本。
 2、数组和指针的区别：数组是常量，而指针是变量，并且可以递增。
 */
void test(){
    displayString();
    stringConstant();
    return;
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
