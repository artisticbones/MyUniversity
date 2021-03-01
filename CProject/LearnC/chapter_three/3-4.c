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
        int code = 0;
        if (scanf("%c",&c[cnt]) != EOF)
        {   
            code = c[cnt] - 0;
            if (code >= 65 && code <= 90)
            {
                letter++;
            }else if (code >= 97 && code <= 122)
            {
                letter++;
            }else if (code == 13 || code == 32)
            {
                blank++;
            }else if (code >= 48 && code <= 57)
            {
                digit++;
            }else {
                other++;
            }
        }
        cnt++;

    } while (cnt != 10);
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);    
    printf("cnt\tcharacter\n");
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\t%c\n",i,c[i]);
    }
    return 0;
}
