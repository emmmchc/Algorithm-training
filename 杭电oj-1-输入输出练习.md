### 杭电oj---输入输出练习

- 1000

![image-20210227111722186](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227111722186.png)

``` c
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a + b);
    return 0;
}
```



- 1089

  ![image-20210227112010613](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227112010613.png)

```c
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a + b);
    return 0;
}
```



- 1090

![image-20210227121608204](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227121608204.png)

```C
#include <stdio.h>

int main()
{
    int a, b, n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
```



- 1091

![image-20210227122504787](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227122504787.png)

```c
#include <stdio.h>
int main()
{
    int a, b;
    while((scanf("%d %d", &a, &b)!=EOF) && (a!=0||b!=0))
        printf("%d\n", a + b);
    return 0;
} 
// 注意a和b中可能只有一个为0，所以连接符号为“||”而不是“&&”。
```



- 1092

![image-20210227125454366](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227125454366.png)

```c
#include <stdio.h>
int main()
{
    int a,n;
    while ((scanf("%d", &n)!=EOF) && n)
    {
        int sum = 0;
        while(n--)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    return 0;
}
```



- 1093

![image-20210227142828979](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227142828979.png)

```c
#include <stdio.h>
int main()
{
    int a,n,m,sum;
    scanf("%d", &n);
    while (n--)
    {
        sum = 0;
        scanf("%d", &m);
        while (m--)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    return 0;
}
```



- 1094

![image-20210227143348035](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227143348035.png)

```C
#include <stdio.h>
int main()
{
    int a,n,sum;
    while ((scanf("%d", &n)!=EOF) && n)
    {
        sum = 0;
        while (n--)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    return 0;
}
```



- 1095

![image-20210227164915997](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227164915997.png)

```C
#include <stdio.h>
int main()
{
    int a,b;
    while (scanf("%d %d", &a,&b)!=EOF)
        printf("%d\n\n", a+b);
    return 0;
}
```



- 1096

![image-20210227165148968](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227165148968.png)

```C
#include <stdio.h>
int main()
{
    int a,n,m,sum;
    scanf("%d", &n);
    while (n--)
    {
        sum = 0;
        scanf("%d", &m);
        while (m--)
        {
            scanf("%d", &a);
            sum += a;
        }
        if (n != 0)
            printf("%d\n\n", sum);
        else
            printf("%d\n", sum);
    }  
    return 0;
}
//最后一个结果不输出空行
```



- 1001

![image-20210227170757636](C:\Users\12400\AppData\Roaming\Typora\typora-user-images\image-20210227170757636.png)

```c
#include <stdio.h>
int main()
{
    int a,n,sum;
    
    while (scanf_s("%d", &n) != EOF)
    {
        sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;
        printf("%d\n\n", sum);
    }
    return 0;
}
//这一题最后一个结果可以有空行？
```

