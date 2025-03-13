#include <stdio.h>


int main(void) {
    // 宏和函数

    // 宏和函数可被视为同一种类型
    // 当只有一个表达式时，宏和函数的区别不大(甚至宏的运行效率更高）
    // 但是，当有多个表达式时，函数的效率更高

    // 所以，当只有一个表达式时，宏更适合
    // 当有多个表达式时，函数更适合


    // #undef 取消宏定义
    #define PI 3.14159
    printf("PI = %f\n", PI);
    #undef PI
    // printf("PI = %f\n", PI); // 错误：PI未定义



    // #include

    // #include <stdio.h>  // 引入标准输入输出库
    // #include "myheader.h"  // 引入自定义头文件，会在当前工程目录下查找myheader.h文件

    
    return 0;
}
