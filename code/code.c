#include <stdio.h>

int main()
{
    // 在用完一个指针变量后，可将其设为NULL，以免发生问题。记得在使用之前判断这个指针是否为NULL


    // assert()函数可以检测是否为空指针（需要include assert.h）
    // 例子：
    // assert(zhizhen != NULL);
    //        如果这个表达式是假，则报错
    // 这个函数非常友善，它不仅可以显示出有问题的行号，还可以随时关闭检测机制，只需要difine NDEBUG就可以



    // 数组名就是数组首元素的地址
    // 但是有两个例外：
    // 1.sizeof(数组名)计算的是整个数组的大小，单位是字节（这里的数组名表示整个数组）

    // 2.&数组名，取出的是整个数组的地址（这里的数组名表示整个数组）
    //   但是整个数组的地址就是第一个元素的地址
    //   区分方法
    int arr[10] = {1, 2, 3, 4, 5, 6 ,7, 8, 9 ,10};
    printf("&arr[0]     = %p\n", &arr[0]);     //&arr[0]      = 0x16fdfe950
    printf("&arr[0] + 1 = %p\n", &arr[0] + 1); // &arr[0] + 1 = 0x16fdfe954  (+4)

    printf("arr         = %p\n", arr);         // arr         = 0x16fdfe950
    printf("arr + 1     = %p\n", arr + 1);     // arr + 1     = 0x16fdfe954  (+4)

    printf("&arr        = %p\n", &arr);        // &arr        = 0x16fdfe950
    printf("&arr + 1    = %p\n", &arr + 1);    // &arr + 1    = 0x16fdfe978  (+0x28，即40)

    // 区别：&arr[0]和arr加上一都是一样的，但&arr则加了40，即整个数组的大小




    return 0;
}
