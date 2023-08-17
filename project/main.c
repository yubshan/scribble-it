#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include "header.h"
void e_logo();
void i_logo();
int password();
int main()
{

    i_logo();
    system("Color 03");
    int c;
    atexit(e_logo);
    fflush(stdin);
    system("cls");
    Sleep(75);
    printf("\n\n 	************   Welcome To The Scribble-it   ************\n\n");
    Sleep(75);
    printf("\t  -------------------------------------------------------  \n");
    Sleep(75);
    printf("\t||.--.    .-._                        .----.             ||\n");
    Sleep(75);
    printf("\t|||==|____| |H|___            .---.___|""""|_____.--.___     ||\n");
    Sleep(75);
    printf("\t|||  |====| | |xxx|_          |+++|=-=|_  _|-=+=-|==|---|||\n");
    Sleep(75);
    printf("\t|||==|    | | |   | \\         |   |   |_\\/_|Black|  | ^ |||\n");
    Sleep(75);
    printf("\t|||  |    | | |   |\\ \\   .--. |   |=-=|_/\\_|-=+=-|  | ^ |||\n");
    Sleep(75);
    printf("\t|||  |    | | |   |_\\ \\_( oo )|   |   |    |Magus|  | ^ |||\n");
    Sleep(75);
    printf("\t|||==|====| |H|xxx|  \\ \\ |''| |+++|=-=|""""|-=+=-|==|---    |||\n");
    Sleep(75);
    printf("\t||`--^----'-^-^---'   `-' ""  '---^---^----^-----^--^---^  ||\n");
    Sleep(75);
    printf("\t||-------------------------------------------------------||\n");
    Sleep(75);
    printf("\t||-------------------------------------------------------||\n");
    Sleep(75);
    printf("\t||               ___                   .-.__.-----. .---.||\n");
    Sleep(75);
    printf("\t||              |===| .---.   __   .---| |XX|<(*)>|_|^^^|||\n");
    Sleep(75);
    printf("\t||         ,  /(|   |_|III|__|''|__|:x:|=|  |     |=| Q |||\n");
    Sleep(75);
    printf("\t||      _a'{ / (|===|+|   |++|  |==|   | |  |Illum| | R |||\n");
    Sleep(75);
    printf("\t||       '/\\/ _(|===|-|   |  |''|  |:x:|=|  |inati| | Y |||\n");
    Sleep(75);
    printf("\t||_____  -\\{___(|   |-|   |  |  |  |   | |  |     | | Z |||\n");
    Sleep(75);
    printf("\t||       _(____)|===|+|[I]|DK|''|==|:x:|=|XX|<(*)>|=|^^^|||\n");
    Sleep(75);
    printf("\t||              `---^-^---^--^--'--^---^-^--^-----^-^---^||\n");
    Sleep(75);
    printf("\t||-------------------------------------------------------||\n");
    Sleep(75);
    printf("\t||_______________________________________________________||\n\n\n\n");
    Sleep(75);

    printf("\t  \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    Sleep(75);
    char ch;
    printf("	       Do you have stored your book in my library(y/n)		     \n");
    printf("->");
    scanf("%c", &ch);
    if (ch == 'y')
    {
        fflush(stdin);
        printf("	              Lets pick up your dairy		     \n\n\n");
        Sleep(75);
        system("pause");

        c = password();
        if (c == 1)
        {
            printf("\n\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");

            printf("\n\"Verification Successful\"\n");

            system("pause");
            menu();
        }
        else
        {
            printf(" \n\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
            printf("\"Verification Error: Please make sure you have stored your book.\"\n");
            printf("Recheck your username or password...\n");
            printf("PROGRAM IS GOING TO BE RESTART");
            system("pause");
            system("cls");
            main();
        }
    }
    else if (ch == 'n')
    {
        printf("	              No worries let's store it now...		     \n\n\n");
        struct password
        {
            char user[30];
            char pass[18];
        };
        struct password p;

        FILE *fp;
        fp = fopen("password.txt", "ab+");
        if (fp == NULL)
        {
            printf("ERROR: Can't open the file. Recheck the Input");
            system("pause");
            menu();
        }
        fflush(stdin);
        printf("Enter your Username (for eg: Ram): ");
        scanf("%s",p.user);
        fflush(stdin);
        printf("Enter your password (for eg: Ram123): ");
        scanf("%s",p.pass);
        //   while((ch=_getch())!=13){
        //     fflush(stdin);
        //     p.pass[i]=ch;
        //     fflush(stdin);
        //     i++;
        //     printf("*");
        // }
        fwrite(&p, sizeof(p), 1, fp);
        fclose(fp);
        printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
        printf("\n\n CONGRATULATION YOU HAVE SUCESSFULLY STORE YOUR BOOK...\n\n");
        printf("You are redirecting to the welcome page.\n");
        printf("You can edit your book after Program reload........\n");
        system("pause");
        main();
    }
    else
    {
        printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
        printf("ERROR: Invalid input\n Program if terminating. \n");
        system("pause");
        exit(1);
    }
    return 0;
}
///**********************************int main function finished and password function starts*****************************

int password()
{
    struct password
    {
        char user[30];
        char pass[18];
    };
    char user[30];
    char pass[18];
    fflush(stdin);
    printf("Username:");
     scanf("%s",user);
    fflush(stdin);
    printf("Password:");
    // while((ch=_getch())!=13){
    //     fflush(stdin);
    //     pass[i]=ch;
    //     fflush(stdin);
    //     i++;
    //     printf("*");
    // }
    scanf("%s",pass);

    FILE *fp;
    fp = fopen("password.txt", "rb");

    if (fp == NULL)
    {
        printf("ERROR: Can't open the file.\n File not found");
        printf("you are redirecting to main menu");
        system("pause");

        menu();
    }
    struct password p;
    fflush(stdin);
    while (fread(&p, sizeof(p), 1, fp) == 1)
    {
        fflush(stdin);

        if (strcmp(user, p.user) == 0)
        {
            if (strcmp(pass, p.pass) == 0)
            {

                return 1;
            }
        }
    }

    return 0;
}


///****** void delete_journal() function finished and finally end of program too*****************************

void i_logo(){


system("cls");
system("color 03");

        Sleep(1500);
printf("\n\n\n\n\n\n\n\n\n");
        Sleep(100);
printf("\t\t\t\t\t               _ _     _     _            _ _       \n");
        Sleep(100);
printf("\t\t\t\t\t ___  ___ _ __(_) |__ | |__ | | ___      (_) |_     \n");
        Sleep(100);
printf("\t\t\t\t\t/ __|/ __| '__| | '_ \\| '_ \\| |/ _ \\_____| | __|    \n");
        Sleep(100);
printf("\t\t\t\t\t\\__ \\ (__| |  | | |_) | |_) | |  __/_____| | |_     \n");
        Sleep(100);
printf("\t\t\t\t\t|___/\\___|_|  |_|_.__/|_.__/|_|\\___|     |_|\\__|    \n");
        Sleep(100);
                  
   char b=219;
   printf("\n\n\t\t\t\t\t\t  Getting ready for you:\t\n");
        Sleep(100);
        Sleep(100);
   printf("        \t\t\t\t\t");
    for(int j=0 ; j<=25; j++){
        printf("%c",b);
        Sleep(110);
    }


                                   
}
void e_logo(){


system("cls");
system("color 03");
printf("\n\n\n\n\n\n\n\n\n");
        Sleep(100);
printf("\t\t\t\t\t               _ _     _     _            _ _       \n");
        Sleep(100);
printf("\t\t\t\t\t ___  ___ _ __(_) |__ | |__ | | ___      (_) |_     \n");
        Sleep(100);
printf("\t\t\t\t\t/ __|/ __| '__| | '_ \\| '_ \\| |/ _ \\_____| | __|    \n");
        Sleep(100);
printf("\t\t\t\t\t\\__ \\ (__| |  | | |_) | |_) | |  __/_____| | |_     \n");
        Sleep(100);
printf("\t\t\t\t\t|___/\\___|_|  |_|_.__/|_.__/|_|\\___|     |_|\\__|    \n");
        Sleep(100);
                  
   char b=219;
   printf("\n\n\t\t\t\t\t\t  See You Later....\t\n");
        Sleep(100);
        Sleep(100);
 


                                   
}