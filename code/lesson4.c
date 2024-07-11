#include <stdio.h>

int main(void){

    // 逻辑运算符：
    // ! 逻辑取反运算符，改变单个表达式的真假（0变为1，1变为0）
    // || 或运算符，两侧表达式至少要有一个为真
    // && 与运算符，两侧表达式都要为真 



    // switch语句：
    // switch(条件（运算）)  // 条件中如果有变量，必须要是int类型 
    // {
    //  case 得数:

    //     break;  // 如果要实现分支的效果，就要在case里面加上break

    //  case 得数:

    //     break;

    //  default:  // 如果case没有一个匹配上的话，就会执行default里的语句

    //     break;
    // }
    


    // if和switch的区别是：if可以判断任何类型的值，而switch只能判断整型，而且判断的条件中必须要有一个明确的值



    // while语句：
    // while() // 如果在括号内填1，则可以实现无线循环的效果，所以while可以实现循环的效果 
    // {
        
    // }


    // 使用while循环的例子（打印从0到10的数）：
    int testwhile = 0;
    while (testwhile <= 10)
    {
        printf("%d\n", testwhile);
        testwhile++;
    }



    // for循环：
    // for (表达式1;表达式2;表达式3;) // 表达式1用于变量的初始化，表达式2用于循环结束条件的判断，表达式3用于循环变量的调整
    // {
        
    // }


    // 使用for循环例子（打印从0到11的数）：
    for (int testfor = 0; testfor <= 11; testfor++) // 使用for能让代码便捷，和
    {
        printf("%d\n", testfor);
    }
    
    // 使用for循环例子（100内所有3倍数之和）：
    int fortest_sum = 0;
    int fortest_num = 0;
    for (int fortest_sum = 0; fortest_num <= 100; fortest_num++)
    {
        if (fortest_num % 3 == 0)
        {
            fortest_sum += fortest_num;
        }

    }
    printf("%d\n", fortest_sum);
    
    

    // do-while语句： // 和while基本相同，只不过do-while首先就会执行一次语句
    // do
    //     语句; // 首先执行语句（不管下面的表达式）
    // while(表达式); // 当表达式成立，再回到上面的语句，再判断……以此类推



    // break和continue关键字：
    // break：跳出整个循环，不再执行和判断
    // continue：跳出当前循环，但仍继续判断，如果判断值为真，则再执行新的语句


































    return 0;
}
