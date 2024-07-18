#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

    // rand() 函数可以生成一个伪随机值，需include stdlib.h 。
    // 随机值的生成基于“种子”，它的默认值是1。
    // 如果不修改“种子”，每次以“种子”的默认值（1）生成的随机数都是一样的。
    // 我们可以使用时间戳来更改“种子”的默认值


    // 如果想生成一个0-100的随机数，可以将随机数取除以101的余数，
    // a + rand() % (b-a+1) 可以生成a-b的随机数



// 变量声明区
int start_menu_val;
int play_game_rand;
int guess_num;
int times_count;


// 函数事前声明区
void start_menu(void);
void play_game(void);



// 函数声明区
int main(void)
{
    srand((unsigned int)time(NULL));
    do
    {
        start_menu(); //打印菜单，用于确认是否玩游戏
        printf("请选择：> ");
        scanf("%d", &start_menu_val);
        switch(start_menu_val)
        {
            case 1:
            
            printf("载入中……\n ");
            play_game();
                break;
            case 0:
            printf("正在退出\n ");
                break;
            default:
            printf("选择错误，请重新选择\n ");
                break;
            
        }

    } while (start_menu_val);
    


    return 0;
}

void start_menu(void)
{
    printf("*********************************\n");  
    printf("*********************************\n");
    printf("********    1.play    ***********\n");
    printf("********    0.quit    ***********\n");
    printf("*********************************\n");
    printf("*********************************\n");
}

void play_game(void)
{
    // 生成随机数
    play_game_rand = (rand() % 100) + 1;
    // printf("%d\n", play_game_rand);
    // 设置次数
    times_count = 6;
    
    while (times_count)
    {
        // 猜数字
        printf("你还有%d次机会，", times_count);
        printf("请猜数字：");
        scanf("%d", &guess_num );
        

        if (guess_num > play_game_rand)
        {
            printf("猜大了\n");
        }
        else if (guess_num < play_game_rand)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
        times_count--;
    }
    // 跳出while有两种可能：猜对数字或者次数用完
    if (times_count == 0) // 判断次数是否用完
    {
        printf("你失败了，正确的值是%d\n", play_game_rand);
    }
    
    

}













