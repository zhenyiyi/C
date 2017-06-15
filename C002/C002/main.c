//
//  main.c
//  C002 文件结尾 和重定向输入和重定向输出
//
//  Created by fenglin on 2017/6/15.
//  Copyright © 2017年 fenglin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int ret = 0 ;
    while ((ret = getchar()) != EOF){
        putchar(ret);
    }
//    CTRL + D
    
    // 1、echo_eof 下面的 a.out 文件 是 当前 main.c 通过gcc编译成的可执行文件。
    // 2、执行 下面的 a.out文件 并且把 1.txt 文件作为输入流。
    // 执行命令如下: ./a.out < 1.txt
    
    // 3、或者直接使用xcode编译，在Products生成了可执行文件 COO2
    return 0;
}

