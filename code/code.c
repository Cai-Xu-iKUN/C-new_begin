#include <stdio.h>

int main() {
    // 文件的使用（包括打开，写入和关闭）

    // 打开文件
    FILE *fp = fopen("test.txt", "w"); // w 表示写入，如果文件不存在则创建，如果文件存在则清空文件内容

    if (fp == NULL) {
        printf("文件打开失败\n");
        return 1;
    }


    // 写入文件
    fprintf(fp, "Hello, World!\n");


    // 关闭文件
    fclose(fp);
    fp = NULL;



    // printf() fprintf() sprintf()
    // scanf() fscanf() sscanf()


    // printf()  针对stdin的格式化输入函数
    // scanf()   针对stdin的格式化输出函数

    // fprintf() 针对 所有输入流 的格式化输入函数
    // fscanf()  针对 所有输出流 的格式化输出函数

    // sprintf() 将带有格式的数据转换成字符串
    // sscanf()  从字符中按照格式提取格式化的数据



    return 0;
}