/**
 * Author@ Cheng Feitian
 * Date: 2020-2-2
 * Description: 接力break使用办法
 * Input Format: int
 * Output Format: 
 */

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1024

int main(void) {
    /* 初始化 */
    int x;
    int one,two,five;
    int exit = 0;
    if (scanf("%d",&x) != EOF)
    {
        for ( one = 0; one < x*10; one++)
        {
            for ( two = 0; two < x*10/2; two++)
            {
                for ( five = 0; five < x*10/5; five++)
                {
                    if (one + two * 2 + five * 5 == x*10)
                    {
                        printf("%d one percent plus %d two percent plus %d five percent equals %d yuan\n",one,two,five,x);
                        exit = 1;
                        break;
                    }
                    if (exit) break;
                }
                if (exit) break;
            }
            
        }
        
    }
    
    return 0;
}
