### Tom数


总时间限制：1000ms 内存限制：128MB

#### 描述           	                                        

正整数的各位数字之和被Tom称为Tom数。求输入数（<2^32）的Tom数！

#### 输入

每行一个整数(<2^32)

#### 输出

每行一个输出,对应该数的各位数之和

#### 样例输入

12345
56123
82

#### 样例输出

15
17
10

​	                                        

``` c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long N[1000];
    long sum[1000]={0};
    int i=0,j=0;
    while((scanf("%ld",&N[i]))!=EOF)i++;
    for(j=0; j<i; j++)
    {
        while(N[j])//通过取余取整，将数从个位开始一个个切下来，切完后数为0
        {
            sum[j] = sum[j] + N[j]%10;
            N[j] = N[j]/10;
        }
    }
    for(j=0; j<i; j++)
        printf("%ld\n",sum[j]);
    return 0;
}
```