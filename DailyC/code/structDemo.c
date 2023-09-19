//
//  structDemo.c
//  DailyC
//
//  Created by mac on 2023/9/18.
//

#include <string.h>
#include "structDemo.h"

// 初始化结构体
void initializeMyStructure(struct myStructure *s, int num, char letter, const char *myString) {
    s->num = num;
    s->letter = letter;
    strncpy(s->myString, myString, sizeof(s->myString) - 1);
    s->myString[sizeof(s->myString) - 1] = '\0'; // 确保字符串以 null 终止
}

// 修改结构体的某些成员
void updateMyStructure(struct myStructure *s, int newNum, char newLetter, const char *newString) {
    s->num = newNum;
    s->letter = newLetter;
    strncpy(s->myString, newString, sizeof(s->myString) - 1);
    s->myString[sizeof(s->myString) - 1] = '\0'; // 确保字符串以 null 终止
}

// 打印结构体的内容
void printMyStructure(const struct myStructure *s) {
    printf("Number: %d\n", s->num);
    printf("Letter: %c\n", s->letter);
    printf("String: %s\n", s->myString);
}
