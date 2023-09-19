//
//  stringDemo.c
//  DailyC
//
//  Created by mac on 2023/9/18.
//

#include "stringDemo.h"

char greeting[] = "beidixiaoxiong hello";

int stringLiteral(void)
{
    //格式说明符 %s 来告诉 C 我们现在正在处理字符串：
    printf("this: %s\n", greeting);
    // %c 格式说明符来打印单个字符
    printf("%c\n", greeting[5]);
    
    greeting[0] = 'B';
    printf("%s\n", greeting);
    
    //一组字符创建一个字符串
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings);
    
    //两个数组的大小是相同的

    return 0;
}

int createInt(void)
{
    int num;
    printf("请输入一个数字: \n");
    
    //获取输入 变量的格式说明符%d 引用运算符& 存储变量的内存地址
    scanf("%d", &num);
    
    // 输出用户输入的数字
    printf("输入的数字: %d\n", num);
    
    return 0;
}

int inputStr(void)
{
    char myStr[30];
    
    printf("请输入你的名字: \n");
    
    scanf("%s", myStr);
    
    printf("name: %s\n", myStr);
    
    return 0;
}
