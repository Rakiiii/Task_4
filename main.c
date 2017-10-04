#include <windef.h>
#include "Include_and_constants.h"

int main() {
    while(TRUE)
    {
        system("cls");
        printf("1.Choose1\n2.Choose2\n3.Exit\n");
        char Choose = getch();
        switch (Choose)
        {
            case '1' :
                system("cls");
                printf("You choose first point\nPress any button to restart the programme_ ");
                getch();
                break;
            case '2' :
                system("cls");
                printf("You choose second point\nPress any button to restart the programme_ ");
                getch();
                break;
            case '3' :
                return 0;
            default:
                break;
        }

    }
}