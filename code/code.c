#include <stdio.h>

int main(void) {
    // 位段

    // 位段是一种结构体成员的声明方式，用于对结构体成员的位宽进行限定
    // 位段的声明格式如下：
    // struct {
    //     type member_name : width;
    //     type member_name : width;
    //     ...
    // } variable_list;
    // 其中，type 表示位段的类型，member_name 表示位段的名称，width 表示位段的位宽，variable_list 表示位段的变量名
    // 位段的类型只可以是 int、unsigned int、signed int、char、unsigned char、signed char



    // 联合体

    // 联合体是一种特殊的结构体，它的所有成员共用同一块内存空间
    // 内存空间依据最大的成员的大小决定
    // 联合体的声明格式如下：
    // union {
    //     type member_name1;
    //     type member_name2;
    //     ...
    // } variable_list;
    // 其中，type 表示联合体的成员类型，member_name 表示联合体的成员名称，variable_list 表示联合体的变量名
    // 联合体的成员可以是任意类型



    // 动态内存

    // 动态内存分配是在程序运行时动态分配内存空间
    // 动态内存分配的函数有 malloc()、calloc()、realloc() 和 free()
    // malloc() 函数用于分配指定字节数的内存空间，其函数原型为 void *malloc(size_t size)
    // calloc() 函数用于分配指定数量、指定大小的内存空间，其函数原型为 void *calloc(size_t num, size_t size)
    // 和 malloc() 函数不同的是，calloc() 函数会将分配的内存空间初始化为 0
    // realloc() 函数用于重新分配内存空间，其函数原型为 void *realloc(void *ptr, size_t size)
    // free() 函数用于释放动态分配的内存空间，其函数原型为 void free(void *ptr)









    
    return 0;
}
