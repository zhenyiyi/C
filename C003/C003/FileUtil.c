//
//  FileUtil.c
//  C003
//
//  Created by fenglin on 2017/6/15.
//  Copyright © 2017年 fenglin. All rights reserved.
//

#include "FileUtil.h"
#include <stdlib.h>


void readFileFromPath(const char * path){
    int ch;
    FILE *fp;
    fp = fopen(path, "r");
    if (fp == NULL) {
        printf("failed to open the file\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}
