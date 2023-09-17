//
//  main.c
//  DailyC
//
//  Created by mac on 2023/9/11.
//

#include <stdio.h>

#define Pi 3.14159


int addTwoSum(void) {
    int x;
    int y;
    x = 2;
    y = 12;
    return x + y;
}

int bitOperator(void) {
    int a = 60;
    int b = 13;
    int c = 0;
    
    c = a & b;
    printf("1 - c = %d\n", c);
    return 0;
}

int sizeofTest(void) {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    return 0;
}

int ifExample(void)
{
    int time = 9;
    if (time <= 10) {
        printf("早上好\n");
    } else if( time >10 && time < 20) {
        printf("再会\n");
    } else {
        printf("晚上好\n");
    }
    
    return 0;
}

int ifExample02(void)
{
    int time = 20;
    (time > 18) ? printf("晚上好\n") : printf("再会\n");
    
    return 0;
}

int switchExample(void)
{
    
    int day = 89;
    switch (day) {
        case 1:
            printf("周一");
            break;
        case 2:
            printf("周二");
            break;
        case 3:
            printf("周三");
            break;
        case 4:
            printf("周四");
            break;
        case 5:
            printf("周五");
            break;
        case 6:
            printf("周六");
            break;
        case 7:
            printf("周日");
            break;
        default:
            printf("期待假期\n");
    }
    
    return 0;
}

int whileExample(void)
{
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// 循环将始终至少执行一次，即使条件为假，因为代码块在条件测试之前
int doWhileDemo(void)
{
    int i = 5;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 3);
    
    return 0;
}

int forDemo(void)
{
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}

int forDemo02(void)
{
    int a;
    for (a = 1; a <= 10; a = a + 2) {
        printf("%d\n",a);
    }
    
    return 0;
}

//跳出循环
int loopDemo(void)
{
    int a;
    for (a = 0; a <= 10; a++) {
        if (a == 9) {
            printf("到 %d 了\n", a);
            break;
        }
    }
    
    return 0;
}

//continue 语句会中断一次迭代（在循环中），并继续循环中的下一次迭代
int loopDemo02(void)
{
    for (int a = 0; a < 10; a++) {
        if (a == 5) {
            continue;
        }
        printf("%d\n", a);
    }
    
    return 0;
}

int loopDemo03(void)
{
    int a = 6;
    while (a < 10) {
        printf("%d\n", a);
        if (a) {
            break;
        }
        printf("%d\n", a);
        a++;
    }
    
    return 0;
}

int loopDemo04(void)
{
    int a = 0;
    while (a < 10) {
        a++;
        if (a == 4) {
            continue;
        }
        printf("%d\n", a);
    }
    return 0;
}

int loopDemo05(void)
{
    int i = 1;
    int j;
    while(1){    // 外层循环
      j=1;
      while(1){  // 内层循环
        printf("%d * %d = %-4d",i, j, i*j);
        j++;
        if(j>4) break;  // 跳出内层循环
      }
      printf("\n");
      i++;
      if(i>4) break;    // 跳出外层循环
    }
    
    return 0;
}

int loopDemo06(void)
{
    char c = 0;
    while (c != '\n') {
        c = getchar();
        if (c == '4' || c == '5') {
            continue;
        }
        //printf("你输入的字符为 %c\n", c);
        putchar(c);
    }
    
    return 0;
}




