//
//  main.c
//  c语言
//
//  Created by 贺韵洁 on 2017/6/13.
//  Copyright © 2017年 贺韵洁. All rights reserved.
//
/***********************************************指针
#include <stdio.h>

int main()
{
    int score[] = {12,14,23,45};
    int i;
    for(i=0;i<4;i++)
    {
    int*ptr_score = &score[i];                  “&” 表示取地址
    printf("第%d个数的指针是%p\n",i+1,ptr_score);
    printf("第%d个数值是%d\n",i+1,*ptr_score);    ”*“ 表示取这个地址对应的值
    }
}
 
************************************************
 SUMMARY:
 &array[0]=array   &array[1] = array+1   
 1.int*ptr_array = array   2.array[0] = *ptr_array  3.array[1] = *(ptr_array+1)
 下一个数值：*(ptr_array+1)   下一个数值的指针：ptr_array+1 = array+1
 ***********************************************
int main()
{
    int array[] ={12,13,14,15};
    int i;
    int * ptr_array = array;
    for(i=0;i<4;i++)
    {
        printf("第%d个元素的值是%d地址是%p\n",i+1,*(ptr_array),ptr_array);
        ptr_array++;//结束后记得重置数组
    }
}
*********************************************
//数组逆序 第i个元素和第N-i-1个元素相交换  注意：必须是N-i-1 针对N是奇数的情况
#include <stdio.h>
int main()
{
    int array[4] = {12,13,14,15};
    int temp;
    int i;
    for(i=0;i<4;i++)
    {
        temp = array[i];
        array[i] = array[4-i-1];                  常规方法
        array[4-i-1] = temp;
        
    }
    for(i=0;i<4;i++)
    {
        printf("%d  ",array[i]);
    
    }

}
*******************************************************/
//ptr1对应array[i]   ptr2对应array[N-i-1]
int main()
{
    int array[4] = {12,13,14,15};
    int i;
    for(i=0;i<2;i++)
    {
        int * ptr1 = array+i;//指向首元素的指针
        int * ptr2 = array+4-1-i;//指向末元素的指针
        array[i] = *(ptr2);
        array[4-1-i] = *(ptr1);
    }
    for(i=0;i<4;i++)
    {
        printf("%d  ",array[i]);
    }
 
}











