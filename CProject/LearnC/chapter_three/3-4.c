/**
 * Author@ Cheng Feitian
 * Date: 2020-3-1
 * Description: 本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。
 * Input Format: 输入为10个字符。最后一个回车表示输入结束，不算在内。
 * Output Format: letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    char c[10];
    int cnt = 0;
    int letter = 0,blank = 0,digit = 0,other = 0;
    /* 主逻辑 */
    do
    {
        c[cnt] = getchar(); 
        if (c[cnt] >= 'a' && c[cnt] <= 'z')
        {
            letter++;
        }else if (c[cnt] >= 'A' && c[cnt] <= 'Z')
        {
            letter++;
        }else if (c[cnt] == ' ' || c[cnt] == '\n')
        {
            blank++;
        }else if (c[cnt] >= '0' && c[cnt] <= '9')
        {
            digit++;
        }else {
            other++;
        }
        cnt++;
    } while (cnt != 10);
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);    
    return 0;
}
