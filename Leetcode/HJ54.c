/**
 * Author@ Cheng Feitian
 * Date: 2020-3-10
 * Description: 给定一个字符串描述的算术表达式，计算出结果值。
 * 输入字符串长度不超过100，合法的字符包括”+, -, *, /, (, )”，”0-9”，
 * 字符串内容的合法性及表达式语法的合法性由做题者检查。本题目只涉及整型计算。
 * Input Format: 输入算术表达式
 * Output Format: 计算出结果值
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    char str[101];
    int result = 0;
    /* 主逻辑 */
    if (gets(str) != EOF)
    {
        result = exProcess(str);
    }
    printf("%d\n",result);
    return 0;
}

int exProcess(char* str){
    /**
     * @brief 算法思想：中缀转后缀表达式
     * 1. 将字符串转换成后缀表达式，一个栈用来存储操作数，另一个栈用来存储操作符
     * 2. 操作符栈非空之前，弹出一个操作符，并弹出相应的操作数，运算后的结果压入操作数栈
     * 3. 重复第二步
     */
    int result = 0;
    int operatorStack[100];
    int operandStack[100];
    int a,b;
    char operator;
    doCal(a,b,operator);
    return result;
}

int doCal(int a, int b, char operator){
    int result = 0;
    switch (operator)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        break;
    }
    return result;
}
