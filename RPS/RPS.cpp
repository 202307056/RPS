#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int user = 0;
    int com = 0;
    int res = 0;
    int cnt = 0;
    Game game;

    while (true)
    {
        cout << "가위(0) 바위(1) 보(2) 종료(3) 입력: ";
        cin >> user;

        if (!(user == 0 || user == 1 || user == 2 || user == 3))
        {
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
            continue;
        }

        if (cnt < 15)
        {
            com = game.DrawGame(user);
        }
        else
        {
            com = game.normalGame();
        }
        cnt++;
        res = game.GetGameResult(user, com);

        if (user == 3)
            break;

        printf("%d %d\n", user, com);

        switch (res)
        {
        case 0:
            printf("이겼다!\n");
            game.userWin();
            break;
        case 1:
            printf("졌다!\n");
            game.comWin();
            break;
        case 2:
            printf("비겼다!\n");
            game.allDraw();
            break;
        }
        game.printGame();
    }

}