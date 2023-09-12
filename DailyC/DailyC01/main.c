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

int sizeofT(void) {
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

int ifExample(void) {
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

int ifExample02(void) {
    int time = 20;
    (time > 18) ? printf("晚上好\n") : printf("再会\n");
    
    return 0;
}


int main(void) {
    
    ifExample02();
//    ifExample();
//    int sizeoft = sizeofT();
//    int addTest = addTwoSum();
//    printf("x + y = %d\n", addTest);
//    printf("Pi = %f\n", Pi);
//    bitOperator();
    
    return 0;
}

