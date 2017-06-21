//
//  Struct01.c
//  C008 -- 结构是 C 编程中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。
//
//  Created by fenglin on 2017/6/19.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Struct01.h"
#include <string.h>

#pragma mark -- 定义结构体
struct Books {
    char title[100];
    char subject[200];
    char author[100];
    int book_id;
};

void declareStruct(){
    struct Books daodejing;
    strcpy(daodejing.title, "daodejing");
    strcpy(daodejing.author, "laozi");
    strcpy(daodejing.subject, "dao");
    daodejing.book_id = 1;
    
    struct Books lunyu;
    strcpy(lunyu.title, "lunyu");
    strcpy(lunyu.author, "kongzi");
    strcpy(lunyu.subject, "renai");
    lunyu.book_id = 2;
    
    printf("%s--%s--%s--%d\n",daodejing.title,daodejing.author,daodejing.author,daodejing.book_id);
    
    printf("%s--%s--%s--%d\n",lunyu.title,lunyu.author,lunyu.author,lunyu.book_id);
}

#pragma mark --结构作为函数参数
void testStruct(struct Books book){
    printf("%s--%s--%s--%d\n",book.title,book.author,book.author,book.book_id);
}

#pragma mark -- 指向结构的指针
void testStruct2(struct Books *book){
    printf("%s--%s--%s--%d\n",book->title,book->author,book->author,book->book_id);
}

void functionStructParam(){
    struct Books daodejing;
    strcpy(daodejing.title, "daodejing");
    strcpy(daodejing.author, "laozi");
    strcpy(daodejing.subject, "dao");
    daodejing.book_id = 1;
    
    testStruct(daodejing);
    
    testStruct2(&daodejing);
}










void test(){
    
//    declareStruct();
    
    functionStructParam();
}
