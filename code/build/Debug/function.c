#include <stdio.h>

int main()
{
    // 函数分为库函数和自定义函数


    // 库函数

    // 库函数通过编译器厂商（Microsoft、Apple、gcc等）依照C语言库函数标准实现的
    // 在不同编译器上的库函数可能有细节差异，但总体的功能基本都是一样的
    // 库函数随着功能划分，在不同的头文件中声明。如printf、scanf在stdio.h中声明


    // 自定义函数

    // func_type func_name(parameter)  函数头
    // {
    //                                 函数体
    // }

    // func_type代表这个函数的返回值类型。返回值类型有两类：void和其它。void代表什么都不返回
    // func_name代表这个函数的名字
    // parameter代表参数。如果不需要参数，要填void（在msvc编译器中，可不写）
    // { }大括号括起来的是函数体，就是编写程序的地方



    // 运用return语句可直接退出运行函数

























    return 0;
}
