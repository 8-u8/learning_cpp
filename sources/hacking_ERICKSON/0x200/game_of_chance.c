// 写経0x287 運試しゲーム
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>
#include <stdlib.h>
#include "hacking.h"

// ユーザデータの格納用ファイル(らしい)
#define DATAFILE "/var/chance.data"

// ユーザに関する情報を入れる構造体(struct)
struct user {
    int uid;
    int credits;
    int highscore;
    char name[100];
    int (*current_game) ();
};

// prototype function
int get_player_data();

//todo: make these functions.
void register_new_player();
void update_player_data();
void show_highscore();
void jackpot();
void input_name();
void print_cards(char * , char *, int);

int take_wager(int, int);

void play_the_game();
int pick_a_number();
int dealer_no_match();
int find_the_ace();

void fatal(char *);

// global function
struct user player; //player structures

int main(){
    int choice, last_game;

    srand(time(0)); //シード値。現在時刻を与える

    if(get_player_data == -1) //if no player data
        register_new_player(); // add the player

    while(choice != 7){
        printf("-=[運試しゲーム: メニュー]=-\n");
        printf("1: 数字選びゲーム\n");
        printf("2: 数字よけゲーム\n");
        printf("3: エースを探すゲーム\n");
        printf("4: ハイスコア\n");
        printf("5: ユーザー名変更\n");
        printf("6: 所持金のリセット\n");
        printf("7: しゅうりょう\n");
        printf("[名前: %s]\n", player.name);
        printf("[所持金: %u]\n", player.credits);

        scanf("%d", &choice);

        if((choice < 1)||(choice > 7))
            //例外処理。1〜7でない数字の時は
            printf("\n[!!]メニューに %d はありません\n\n", choice);
        else if (choice < 4){
            if(choice != last_game){
                if(choice == 1)
                    player.current_game = pick_a_number;
                else if(choice == 2)
                    player.current_game = dealer_no_match;
                else
                    player.current_game = find_the_ace;
                last_game = choice;
            }
        play_the_game();
        }
        else if(choice == 4)
            show_highscore();
        else if(choice == 5){
            printf("\n ユーザー名の変更\n");
            printf("ユーザ名を入力: ");
            input_name();
            printf("ユーザー名変更\n");
        }
        else if(choice == 6){
            printf("所持金のリセット: 完了");
            player.credits = 100;
        }
    }//while end
    update_player_data();
    printf("\n thank you for your playing!\n");
}//main end

// load player data
int get_player_data(){
    int fd, uid, read_bytes;
    struct user entry;

    uid = getuid();

    fd = open(DATAFILE, O_RDONLY);
    if(fd == -1)
        return -1;
    
    read_bytes = read(fd, &entry, sizeof(struct user));
    while(entry.uid != uid && read_bytes > 0){
        read_bytes = read(fd, &entry, sizeof(struct user));
    }//while statement end
    close(fd);
    if(read_bytes < sizeof(struct user))
        return -1;
    else
        player = entry;
    return 1;
}//get_player_data end