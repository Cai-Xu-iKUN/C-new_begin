#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    // quost函数是用来对数据进行排列的（不论类型）
    // 定义
    // void qsort (void* base,  // 要排序的数组的第一个元素的地址
                                    // 因为qsort函数无法预测数组中元素的类型，所以只能用void *类型的指针来接收
    //             size_t num,  // 数组中元素的个数
    //             size_t size, // 数组中每个元素的大小，单位是字节
    //             int (*compar)(const void*,const void*)  // 指向比较（任意两个元素的大小）函数的指针
    //            ); 


    // strcmp函数是用来比较两个字符串的大小的（不是比较字符串的长度）
    // 是按照对应字符的ASCII码值来比较的
    // 定义
    // int strcmp(const char *str1, const char *str2);
    // 返回值
    // 如果str1 < str2，返回值 < 0
    // 如果str1 = str2，返回值 = 0
    // 如果str1 > str2，返回值 > 0
    


//qsort函数的使用示例
    
struct Stu 
{
    char name[20];
    int  age;
};




//按照名字比较大小
int test_qsort_by_name(const void *e1, const void *e2)  // e1指向的是一个arr数组中的元素（结构体），e2指向的是另一个arr数组中的元素（结构体）
{
    return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name); 
}

void test_qsort_name()
{
    struct Stu arr[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    qsort(arr, (sizeof (arr) / sizeof (arr[0])), sizeof(arr[0]), test_qsort_by_name);
}




//按照年龄比较大小
void test_qsort_age()
{
    struct Stu arr[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    qsort(arr, (sizeof (arr) / sizeof (arr[0])), sizeof(arr[0]), test_qsort_by_name);
}

int test_qsort_by_age(const void *e1, const void *e2)
{
    return (*(struct Stu*)e1).age - (*(struct Stu*)e2).age;
}



// sizeof()和strlen()

// sizeof()
//  关键字
// 计算变量所占空间大小，单位字节（只会关注大小，不会关注存放的数据）


// strlen()
//  库函数
// 求字符串的长度
// 函数原型：size_t strlen ( const char * str );
// 统计的是从参数 str 这个char * 的地址开始向后，一直到\0前的字符的个数
//     注意：由于strlen()会一直寻找\0，所以可能会产生越界查找


// sizeof()和strlen()的区别
// 示例：
char test_sizeof_strlen[] = "abcdef";
//元素：[abcdef\0](共7个)
int test_sizeof_strlen_print()
{
    printf("%zu\n", sizeof(test_sizeof_strlen)); // 结果是7，包含\0
    printf("%zu\n", strlen(test_sizeof_strlen)); // 结果是6，不包含\0
}



int main() {



























    return 0;

}
