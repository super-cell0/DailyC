//
//  memoryDemo.c
//  DailyC
//
//  Created by mac on 2023/9/18.
//

/*
 指令<------>描述
 #define    定义宏
 #include   包含一个源代码文件
 #undef     取消已定义的宏
 #ifdef     如果宏已经定义，则返回真
 #ifndef    如果宏没有定义，则返回真
 #if        如果给定条件为真，则编译下面代码
 #else      #if 的替代方案
 #elif      如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
 #endif     结束一个 #if……#else 条件编译块
 #error     当遇到标准错误时，输出错误消息
 #pragma    使用标准化方法，向编译器发布特殊的命令到编译器中

 */

// 从系统库中获取 stdio.h 并添加文本到当前的源文件中

// 从本地目录中获取 myheader.h，并添加内容到当前的源文件中
//#include ""

#include "memoryDemo.h"

// 把所有的 MAX_ARRAY_LENGTH 替换为 20
#define MAX_ARRAY_LENGHT 20

//取消已定义的 FILE_SIZE，并定义它为 42
#undef FILE_SIZE
#define FILE_SIZE 43

//只有当 MESSAGE 未定义时，才定义 MESSAGE
#ifndef MESSAGE
    #define MESSAGE "hello c"
#endif

//宏延续运算符 \
//字符串常量化运算符 #
#define message_for(a, b) \
    printf(#a " and " #b ": We love you!\n")

//宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记
#define toChener(n) printf("tochen" #n " = %d", tochen##n)

//如果指定的标识符已定义，则值为真（非零）。如果指定的标识符未定义，则值为假（零）
#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

#define square(x) ((x) * (x))
#define MAX(x,y) ((x) > (y) ? (x) : (y)

//指针 是一个变量，它存储另一个变量的内存地址作为其值
//指针变量 指向同一类型的数据类型
int memoryAddress(void)
{
    int age = 25;
    
    // 一个名为 ptr 的指针变量，用于存储 myAge 的地址
    int* ptr = &age;
    
    printf("age的值: %d\n", age);
    printf("age的内存地址: %p\n", &age);
    
    // 用指针（0x16fdff2dc）输出 age 的内存地址
    printf("%p\n", ptr);
    
    //使用 * 运算符（**dereference ** 运算符）获取指针指向的变量的值
    // 取消引用：用指针输出 myAge 的值 (43)
    //解引用运算符
    printf("%d\n", *ptr);
    
    
    return 0;
}

int testDefine(void)
{
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    
    return 0;
}


