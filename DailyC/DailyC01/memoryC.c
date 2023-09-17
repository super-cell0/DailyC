//
//  memoryC.c
//  DailyC
//
//  Created by mac on 2023/9/17.
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
#include <stdio.h>

// 从本地目录中获取 myheader.h，并添加内容到当前的源文件中
//#include ""

// 把所有的 MAX_ARRAY_LENGTH 替换为 20
#define MAX_ARRAY_LENGHT 20





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

int main(void)
{
    memoryAddress();
    return 0;
}
