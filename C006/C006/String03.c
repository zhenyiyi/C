//
//  String03.c
//  C006
//
//  Created by fenglin on 2017/6/20.
//  Copyright © 2017年 fenglin. All rights reserved.
//

#include "String03.h"
#include <string.h>


void functionStrCpy(){
    char s1[30] = "Created by";
    char s2[20];
    char s3[] = "fenglin";
    
    strcpy(s2, s1);
    
    printf("s2->%lu\n",strlen(s2));
    printf("s2->%s\n",s2);
    
    strcat(s1, s3);
    printf("s1->%lu\n",strlen(s1));
    printf("s1->%s\n",s1);
}

void functionStrCmp(){
    
    /*
     strcmp(s1, s2);
     如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
     */
    char *s1 = "A";
    char *s2 = "C";
    
    printf("ret-> %d\n",strcmp(s1, s2));
    
    char *s3 = "A";
    char *s4 = "A";
    
    printf("ret-> %d\n",strcmp(s3, s4));
    
    char *s5 = "Z";
    char *s6 = "A";
    
    printf("ret-> %d\n",strcmp(s5, s6));
}


void functionStrchr(){
    char *s1 = "fenglin";
    char c1 = 'e';
    
    printf("ret->%c\n",*strchr(s1, c1));
    
    printf("c1->%p\n",strchr(s1, c1));
    
    printf("c1->%s\n",strchr(s1, c1));
    
    printf("c1->%p\n",&s1[1]);
    
    char c3 = 'A';
    
    printf("ret->%p\n",strchr(s1, c3));
}


void functionStrstr(){
    char *s1 = "fenglin";
    char *s2 = "dad";
    
    printf("ret->%p\n",strstr(s1, s2));
    
    
    char *s3 = "en";
    
    printf("ret->%p\n",strstr(s1, s3));
    
    printf("ret->%c\n",*strstr(s1, s3));
}

void test3(){
    /*
    char *s1 = "C Programer";
    char *s2 = "is very good";
    printf("%lu -- %lu\n",strlen(s1),strlen(s2));
//    strcat(s1, s2); //detected source and destination buffer overlap 检测到的源和目标缓冲区重叠
    
    char s3[] = "today";
    char s4[] = "is a very good day";

//    strcat(s3, s4); // detected buffer overflow 检测缓冲区溢出
    
    char s5[30] = "today ";
    char s6[] = "is a very good day";
    printf("%lu -- %lu\n",strlen(s5),strlen(s6));
    strcat(s5, s6);
    printf("s5->%s\n",s5);
    
    
    char s7[10];
    char *s8 = s6;
    
    printf("%lu\n",sizeof(s7));
    
    strncat(s7, s8, sizeof(s7)-1);
    
    printf("s7->%s\n",s7);*/
    
    functionStrCpy();
    
    functionStrCmp();
    
    functionStrchr();
    
    functionStrstr();
}
