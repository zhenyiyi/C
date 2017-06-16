//
//  main.c
//  C003 -- 读取文件并且输出
//
//  Created by fenglin on 2017/6/15.
//  Copyright © 2017年 fenglin. All rights reserved.
//

#include <stdio.h>
#include "FileUtil.h"

#define filePath "/Users/fenglin/Documents/C语言/C/C003/C003/main/2.txt"

int main(int argc, const char * argv[]) {
    
    printf("input your file name\n");
    
    char filename[100] ;
    
    scanf("%s",filename);
    
    printf("filename == %s\n",filename);
    
    readFileFromPath(filePath);
    
    return 0;
}
