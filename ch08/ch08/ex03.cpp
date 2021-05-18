#include <stdio.h>

enum {
    MAINMENU_STATE,
    PLAYING_STATE,
    PAUSED_STATE,
    GAMEOVER_STATE
};

int main() {
    printf("%d\n", MAINMENU_STATE);
    printf("%d\n", PLAYING_STATE);
    printf("%d\n", PAUSED_STATE);
    printf("%d\n", GAMEOVER_STATE);
}
