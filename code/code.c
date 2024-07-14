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
            play_game();1
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
    printf("%d\n", play_game_rand);
}













