//
//  aboutArrays.c
//  DailyC
//
//  Created by mac on 2023/9/13.
//

#include <stdio.h>


int onArray(void)
{
    int myNum[] = {25, 50, 75, 100};
    myNum[0] = 33;
    
    //循环遍历数组
    int a;
    for (a = 0; a < 4; a++) {
        printf("%d\n", myNum[a]);
    }
    
    printf("myNum数组第一个元素为 %d\n", myNum[0]);
    
    int myNum02[4];
    
    myNum02[0] = 100;
    myNum02[1] = 43;
    myNum02[2] = 56;
    myNum02[3] = 99;
    
    for (int a = 0; a < 4; a++) {
        printf("%d\n", myNum02[a]);
        
    }
    
    //打印数组长度
    int arrayCount = sizeof(myNum02);
    printf("数组长度: %d\n", arrayCount);
    
    return 0;
}

//枚举值默认从 0 开始
//也可以自己指定一个值
enum week {
    mon = 1,
    tues,
    wed,
    thurs,
    fri,
    sat,
    sun,
};

int aboutEnum(void)
{
    //定义枚举变量
    //enum week a = mon, b = wed, c = sat;
    enum week day;
    
    do {
        printf("请输入一周中的一天(1-7):\n");
        if(scanf("%d", &day) != 1 || day < 1 || day > 7) {
            printf("输入错误，请重新输入一个整数值(1-7)。\n");
            while(getchar() != '\n'); // 清空输入缓冲区
        } else {
            break; // 如果输入合法，则跳出循环
        }
    } while(1); // 无限循环，直到输入合法或程序终止 
        
    switch (day) {
        case mon:
            puts("星期一");
            break;
        case tues:
            puts("星期二");
            break;
        case wed:
            puts("星期三");
            break;
        case thurs:
            puts("星期四");
            break;
        case fri:
            puts("星期五");
            break;
        case sat:
            puts("星期六");
            break;
        case sun:
            puts("星期天");
            break;
        default:
            puts("error!");
            break;
    }
    
    return 0;
}


