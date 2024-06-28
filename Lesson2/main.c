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
    
    
    
    
    
    
    
    
    
    
    return 0;
    
    
}


