#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

void printMenuList(unsigned int i);
void myColor(char colorID);
void showSelected(unsigned int i);

int main()
{
    char chKey;
    unsigned int selector = 1;
    unsigned int numberOfItemInList = 10;

    while (true)
    {
        system("cls");
        printf("Use 'W-S' key to to navigate and 'enter' to select or use 'esc' to quit program.\n");
        printf("What story do you want to read...\n\n");
        printMenuList(selector);

        chKey = getch();
        if (chKey == 27)
            exit(0);
        if (chKey == 'W' || chKey == 'w')
            (selector == 1) ? selector = numberOfItemInList : selector--;
        else if (chKey == 'S' || chKey == 's')
            (selector == numberOfItemInList) ? selector = 1 : selector++;
        else if (chKey == 13)
        {
            system("cls");
            showSelected(selector);
            break;
        }
    }
    return 0;
}

void myColor(char colorID)
{
    switch (colorID)
    {
    case '1':
        printf("\033[1;0m  ");
        break;
    case 'g':
        printf("\033[1;32m> ");
        break;
    default:
        break;
    }
    // \033[1;0m for normal
    // \033[1;30m for gray
    // \033[1;31m for red
    // \033[1;32m for green
    // \033[1;33m for yellow
    // \033[1;34m for indigo
    // \033[1;35m for pink
    // \033[1;36m for blue
    // \033[1;37m for white
}

void printMenuList(unsigned int i)
{
    (i == 1) ? myColor('g') : myColor('1');
    printf("Picture\n");
    (i == 2) ? myColor('g') : myColor('1');
    printf("Music\n");
    (i == 3) ? myColor('g') : myColor('1');
    printf("Videos\n");
    (i == 4) ? myColor('g') : myColor('1');
    printf("Documents\n");
    (i == 5) ? myColor('g') : myColor('1');
    printf("Downloads\n");
    (i == 6) ? myColor('g') : myColor('1');
    printf("OneDrive\n");
    (i == 7) ? myColor('g') : myColor('1');
    printf("Google Drive\n");
    (i == 8) ? myColor('g') : myColor('1');
    printf("Dropbox\n");
    (i == 9) ? myColor('g') : myColor('1');
    printf("CodeSapce\n");
    (i == 10) ? myColor('g') : myColor('1');
    printf("Recycle Bin\n");
    myColor('1');
}

void showSelected(unsigned int i)
{
    printf("\n\nYou are in - ");
    switch (i)
    {
    case 1:
        printf("Picture");
        break;
    case 2:
        printf("Music");
        break;
    case 3:
        printf("Videos");
        break;
    case 4:
        printf("Documents");
        break;
    case 5:
        printf("Downloads");
        break;
    case 6:
        printf("OneDrive");
        break;
    case 7:
        printf("Google Drive");
        break;
    case 8:
        printf("Dropbox");
        break;
    case 9:
        printf("CodeSapce");
        break;
    case 10:
        printf("Recycle Bin");
        break;
    }
    printf(" folder.\n");
}