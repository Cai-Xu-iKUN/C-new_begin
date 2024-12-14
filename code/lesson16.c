#include <stdio.h>

int main()
{
    int a_int = 10; // 芝士一个变量，值为10

    int * z_a_int = &a_int; // 芝士一个指针变量，值为a_int的地址，它是一级指针
    // 指针变量占用4/8字节的内存，也有自己的地址，&z_a_int就是取它的地址

    int* * z_z_a_int = &z_a_int; // z_z_a_int也是一个指针变量，它的类型是int*，值为z_a_int的地址，它是二级指针

    









    return 0;
}
