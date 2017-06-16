# C
C语言

1. 初始化一个可以容纳10个字符的数组，如果存入的多余10个字节，会出现==内存溢出==。其最多只能存储9个字符，最后一个字符是“==\0(null charater==)”
```
char name[10]; 

//name 就是一个指针，其地址等于数组首个元素的地址。 name = &name[0]

size_t len = strlen(name) //获取字符串name的长度。

size_t size =  sizeof(name) // 获取name数组的容量是多少字节。


```


2. 数组是同类型数据元素的有序序列。

```
char name[10] // 元素类型  变量名称 元素个数
```

3. [GCC编译多个C文件](http://www.cnblogs.com/hdchild/archive/2009/11/07/1598178.html)


如果某个 **.c** 文件引用了其它文件，使用 **gcc** 编译的时候没有编译这个文件，那么将会报错。如下
```
Undefined symbols for architecture x86_64:
"_readFileFromPath", referenced from:
_main in main-2ef7e4.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)

```
**use -v to see invocation** 怎么使用？

4. C指针

每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址。

5. C malloc 和 new

[malloc 和 new](http://blog.csdn.net/xlhcgd/article/details/50814597/)
