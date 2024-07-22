#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// define区

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EZ_COUNT 10

// 函数声明区

void menu(void);
void play_game(void);
void init_board(char init_board_board[ROWS][ROWS], int init_board_rows, int init_board_cols, char init_board_set);
void display_board(char display_board_board[ROWS][ROWS], int display_board_row, int display_board_col);
void set_mine(char set_mine_mine[ROWS][COLS], int set_mine_row, int set_mine_col);
void find_mine(char find_mine_mine[ROWS][COLS], char find_mine_show[ROWS][COLS], int row, int col);
int get_mine_count(char get_mine_count_mine[ROWS][COLS], int get_mine_count_x, int get_mine_count_y);


// 变量声明区

int menu_input;

// 函数定义区

int main(void)
{
    srand((unsigned int)time(NULL)); // 初始化随机数
    do
    {
        menu();
        printf("请选择：>");
        scanf("%d", &menu_input);
        switch (menu_input)
        {
        case 1:
            play_game();
            break;
        
        case 0:
            printf("正在退出…");
        default:
            printf("选择错误，重新选择");
            break;
        }
    } while (menu_input);
    



}

void menu(void)
{
    printf("**************************\n");
    printf("*********1.play***********\n");
    printf("*********0.quit***********\n");
    printf("**************************\n");
}

void play_game(void)
{
    // 数组
    char game_mine[ROWS][COLS];
    char game_show[ROWS][COLS];
    init_board(game_mine, ROWS, COLS, '0');
    init_board(game_show, ROWS, COLS, '*');

    // 棋盘打印
    // display_board(game_mine, ROW, COL);
    display_board(game_show, ROW, COL);

    // 布置雷
    set_mine(game_mine, ROW, COL);

    // 排查雷
    find_mine(game_mine, game_show, ROW, COL);
}

void init_board(char init_board_board[ROWS][ROWS], int init_board_rows, int init_board_cols, char init_board_set)
{
    int init_board_i;
    for (init_board_i = 0; init_board_i < init_board_rows; init_board_i++)
    {
        int init_board_j;
        for (init_board_j = 0; init_board_j < init_board_cols; init_board_j++)
        {
            init_board_board[init_board_i][init_board_j] = init_board_set;
        }
        
    }
    
}

void display_board(char display_board_board[ROWS][ROWS], int display_board_row, int display_board_col)
{
    int display_board_i = 0;
    printf("------------扫雷------------\n");
    for (display_board_i = 0; display_board_i <= display_board_col; display_board_i++)
    {
        printf("%d ", display_board_i);
    }
    printf("\n");
    
    for (display_board_i = 1; display_board_i <= display_board_row; display_board_i++)
    {
        printf("%d ", display_board_i);
        int display_board_j = 0;
        for (display_board_j = 1; display_board_j <= display_board_col; display_board_j++)
        {
            printf("%c ", display_board_board[display_board_i][display_board_j]);
        }
        printf("\n");
        
    }
}

void set_mine(char set_mine_mine[ROWS][COLS], int set_mine_row, int set_mine_col)
{
    int count = EZ_COUNT;

    while (count)
    {
        int set_mine_x = rand() % (set_mine_row + 1);
        int set_mine_y = rand() % (set_mine_col + 1);
        
        if (set_mine_mine[set_mine_x][set_mine_y] == '0')
        {
            set_mine_mine[set_mine_x][set_mine_y] = '1';
            count--;
        }
        
    }
    
}

void find_mine(char find_mine_mine[ROWS][COLS], char find_mine_show[ROWS][COLS], int row, int col)
{
    int fine_mine_x, find_mine_y, win_times;
    while (win_times < row * cow - EZ_COUNT)
    {
        printf("请输入要排查的坐标:>");
        scanf("%d %d", &fine_mine_x, &find_mine_y);
        if(fine_mine_x >= 1 && fine_mine_x <= row && find_mine_y >= 1 && find_mine_y <= col)
        {
            if(find_mine_mine[fine_mine_x][find_mine_y] == '1')
            {
                printf("恭喜，你被炸死了");
                display_board(find_mine_mine, ROW, COL);
                break;
            }
            else
            {
                int find_mine_get_mine_count_count = get_mine_count(find_mine_mine, fine_mine_x, find_mine_y);
                find_mine_show[fine_mine_x][find_mine_y] = find_mine_get_mine_count_count + "0";
                display_board(find_mine_show, ROW, COL);
                win_times++;

            }
        }
        else
        {
            printf("非法，重新输入");
        }
    }
    if (win_times = row * col - EZ_COUNT)
    {
        printf("恭喜，成功！");
        display_board(find_mine_mine, ROW, COL);
    }
    
}

int get_mine_count(char get_mine_count_mine[ROWS][COLS], int get_mine_count_x, int get_mine_count_y)
{
    return (get_mine_count_mine[get_mine_count_x + 1][get_mine_count_y] + 
            get_mine_count_mine[get_mine_count_x - 1][get_mine_count_y - 1] + 
            get_mine_count_mine[get_mine_count_x][get_mine_count_y - 1] + 
            get_mine_count_mine[get_mine_count_x + 1][get_mine_count_y - 1] + 
            get_mine_count_mine[get_mine_count_x - 1][get_mine_count_y] + 
            get_mine_count_mine[get_mine_count_x + 1][get_mine_count_y + 1] + 
            get_mine_count_mine[get_mine_count_x][get_mine_count_y + 1] + 
            get_mine_count_mine[get_mine_count_x - 1][get_mine_count_y + 1] - 
            8 * '0');

}
