//
//  main.c
//  Lesson2
//
//  Created by Qu Xuan on 28/6/2024.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    int len = strlen("abcdefg");//strlen函数，用来检测string的长度（需include stdbool.h）
    printf("%d\n", len);
    

    
    _Bool lp = true; //_Bool类型，只有0和1两个值
    printf("%d\n", lp);
    
  
 
    signed int temperatuere0 = 30; //signed关键字，用来修饰string和int
    signed int temperatuere1 = -30;//signed 修饰后的int，可正可负
    //int默认带有正负号，signed关键字一般不用写
    unsigned int age0 = 114;//unsigned关键字，用来修饰string和int；unsigned 修饰后的int，不可负，只可正！
    
    
    
    printf("%lu\n", sizeof(long long ));//sizeof是一个操作符，用于计算变量（类型创建的变量）的大小，单位是KB
    
    
    
int glo_val = 114514;//全局变量（写到函数外部）
    int func_val = 1919810;//局部变量，只能于设置函数内使用



    int num1 = 7 + 20;  // + 运算符
    printf("%d\n", num1);


    int num2 = 20 - 7;  // - 运算符
    printf("%d\n", num2); 

    
    int num3 = 20 * 7;  // * 运算符
    printf("%d\n", num3); 

    
    int num4 = 20 / 7;  // / 运算符(商取整数)(如果除法运算符到两端都是整数，商也是整数，如果商是小数的话取整数部分)
    printf("%d\n", num4); 

    // 如果想输出精确到商的话，至少要有一个数和商的小数位数一样
    float num5 = 7.0f / 2;
    printf("%f\n", num5); 
 

    int num6 = 20 % 7;  // % 运算符(取余数)（两端只能是整数）
    printf("%d\n", num6); 



    // 前置++：先++，后使用。例子：
    int fuck = 5;
    int fucku = ++fuck;
    printf("fuck = %d\n", fuck); // fuck变量先增加了1，然后赋值给fucku变量，输出6
    printf("fucku = %d\n", fucku); // 输出6

 
    // 后置++：先使用，后++。例子： 
    int fuck1 = 5;
    int fucku1 = fuck1++;
    printf("fuck1 = %d\n", fuck1); // fuck1变量先赋值给fucku1，然后fuck1增加了1，输出6
    printf("fucku1 = %d\n", fucku1); // fuck1变量先赋值给fucku1，输出5（不变）
    

    // --运算符与++运算符相似，换汤不换药
    


    // 强制类型转换
    int jb = (int)3.14;// 如果要强制转换，需要在被转换数前加上要转换成的类型 

    
    
    return 0;
    
    
}


