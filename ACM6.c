/*
    上三角蛇形矩阵
样例输入
5

样例输出
1 3 6 10 15
2 5 9 14
4 8 13
7 12
11
*/

/*  Num表示矩阵边长
    第i行首元素start=(0+1+2+...+i)+1
    第i行元素个数num=Num-i；
    第i行元素起始间距gap=i+2（往每右移，多加1）

*/
#include <stdio.h>
#include <stdlib.h>

void set_snake_matrix(int Num,int *Matrix)
{
    int i,j,index=0;
    int start,gap,num;
    for(i=0; i<Num; i++)
    {
        start = (i*(i+1))/2 +1;
        num = Num - i;
        gap = i+2;
        Matrix[index++]=start;
        for(j=1; j<num; j++)
        {
            Matrix[index] = Matrix[index-1] + gap;
            index++;
            gap++;
        }
    }
}

void print_snake_Matrix(int Num,int *Result)
{

    int i,j,num,index=0;
    for(i=0; i<Num; i++)
    {
        num = Num-i;
        for(j=0; j<num-1; j++)
            printf("%d ",Result[index++]);
        printf("%d\n",Result[index++]);//每行最后一个元素单独拿出来，加换行符，index还要加1
    }
}

int main()
{
    int Num;
    scanf("%d",&Num);
    int Result[10000];
    set_snake_matrix(Num,Result);
    print_snake_Matrix(Num,Result);
    return 0;
}
