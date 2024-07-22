#include <stdio.h>

int func_do_add(int func_do_add_1, int func_do_add_2);

int main(void)
{
    // 为了使代码更渐变，一般把函数的声明放在头文件中，函数的实现放在另一个源文件中
    // 例子（使input的两个数做加法）：

    printf("%d\n", 32);
    int func_add1, func_add2;
    scanf("%d %d", &func_add1, &func_add2);
    int func_add_val = func_do_add(func_add1, func_add2);
    printf("%d\n", func_add_val);

    return 0;
}

int func_do_add(int func_do_add_1, int func_do_add_2)
{
    return func_do_add_1 + func_do_add_2;
}



// 作用域指的是一个变量（函数）能被使用的范围
// 局部变量的作用域是变量所在的范围
// 全局变量的作用域是整个工程

// 如果要在不同源文件中使用一个全局变量，要在使用的源文件中的变量声明前加上extern关键字


// 如果在一个变量的声明前加上static关键字，这个变量就会被存储到内存的静态区，变为静态变量，生命周期和程序一样。但是作用域不变
// 一个全局变量可以被其它源文件使用，只需要在变量的声明前加上static关键字。但如果一个全局变量被static修饰，这个变量的作用域就只限于这个源文件




