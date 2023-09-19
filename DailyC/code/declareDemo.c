//
//  declareDemo.c
//  DailyC
//
//  Created by mac on 2023/9/18.
//

#include "declareDemo.h"

void myFunction(void)
{
    printf("67\n");
}

void addName(char name[], int age)
{
    printf("hello %s, %d\n", name, age);
}


// 函数定义
int func01(int x, int y)
{
    return y + x;
}


/*
 10 + sum(9)
 10 + ( 9 + sum(8) )
 10 + ( 9 + ( 8 + sum(7) ) )
 ...
 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0

 */
int sum(int a)
{
    if (a > 0) {
        return a + sum(a - 1);
    } else {
        return 0;
    }
}
