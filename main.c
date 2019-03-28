//
//  main.c
//  c
//
//  Created by 贺韵洁 on 2017/6/28.
//  Copyright © 2017年 贺韵洁. All rights reserved.
//

#include<stdio.h>

int main()
{
    int i;
    int sum = 0;
    int x[21] ={212,236,262,272,286,311,336,340,412,446,449,614,670,686,786,811,836,936,978,1335,1678};
    double output;
    for(i=0;i<21;i++)
    {
        sum = sum + ((x[i]-614)*(x[i]-614)*(x[i]-614));
        
    }
    output = sum/(21*755.3*755.3*755.3);
    printf("%lf",output);
}
