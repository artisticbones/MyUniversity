#include <stdio.h>
 
int max(int a, int b)
{
    return a > b ? a:b;
}
 
int main(void)
{
    int N,m,i,j,k;
 
    int val[60][3] = {0};
    int cst[60][3] = {0};
    int tot[3200] = {0};
    int v,p,q;
    unsigned int mask, cur_val, cur_cst;
     
    scanf("%d %d",&N, &m);
     
    for(i = 1; i <= m; i++)
    {
        scanf("%d %d %d",&v,&p,&q);
        if(q != 0)
        {
            if(val[q][0] == 0)
            {
                val[q][0] = v*p;
                cst[q][0] = v;
            }
            else
            {
                val[q][1] = v*p;
                cst[q][1] = v;
            }
        }
        else
        {
            val[i][2] = v*p;
            cst[i][2] = v;
        }
    }
 
    for(i = 1; i <= m; i++)
    {
        for(j = N/10; j >= cst[i][2]/10; j--)
        {
            for(mask = 0; mask < 4; mask++)
            {
                cur_val = val[i][2];
                cur_cst = cst[i][2];
                for(k = 0; k < 2; k++)
                {
                    if(mask == 0)
                    {
                        continue;
                    }
                    if(mask & (1 << k))
                    {
                        cur_val += val[i][k];
                        cur_cst += cst[i][k];
                    }
                }
                if(cur_cst <= (j*10))
                {
                    tot[j] = max(tot[j], tot[j - cur_cst/10] + cur_val);
                }
            }
        }
    }
 
    printf("%d\r\n",tot[N/10]);
}