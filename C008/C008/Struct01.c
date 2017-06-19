//
//  Struct01.c
//  C008
//
//  Created by fenglin on 2017/6/19.
//  Copyright © 2017年 yhy. All rights reserved.
//

#include "Struct01.h"
#include <string.h>


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

void test(){
    
    declareStruct();
    
    
}
