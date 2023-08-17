#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <stdlib.h>
void menu()
{
    fflush(stdin); // clearing the buffer value or garbage value
    system("cls"); // clearing the terminal
    int choice;    // initilizing variable for switch case
    printf("\n\n\t**********   I got your book   **********\n\n");
    Sleep(75);
    printf("\t\t      ,         ,  \n");
    Sleep(75);
    printf("\t\t      |\\\\\\\\\\ ////|  \n");
    Sleep(75);
    printf("\t\t      | \\\\\\\\V/// |  \n");
    Sleep(75);
    printf("\t\t      |  |~~~~|  |  \n");
    Sleep(75);
    printf("\t\t      |  |====|  |  \n");
    Sleep(75);
    printf("\t\t      |  |N   |  |  \n");
    Sleep(75);
    printf("\t\t      |  | O  |  |  \n");
    Sleep(75);
    printf("\t\t      |  |  T |  |  \n");
    Sleep(75);
    printf("\t\t       \\ |   E| /  \n");
    Sleep(75);
    printf("\t\t        \\|====|/  \n");
    Sleep(75);
    printf("\t\t         '----'  \n");
    Sleep(75);
    printf("\n\n**********   Welcome To The Main Menu   **********\n\n");
    Sleep(75);
    printf("\n\n**********   Available functions are as follow   **********\n\n");
    printf("0: How to use it?\n");
    printf("1: Write\n2: Read\n3: Update\n4: Exit\n\nSelect An Option : "); // printing option for switch case
    scanf("%d", &choice);
    switch (choice) // switching fucntion of the program
    {
    case 0:
        system("cls");
        printf("\n\n**********   HOW PROGRAM WORKS...   **********\n\n");
        printf("--> If you want to add or write your journal, notes  or task then ENTER: 1 which let you in to writing function.\n--> If you want to read your content that you have written previously then ENTER: 2 then reading function is activated.\n--> If you want to update your task ,notes or journal then ENTER: 3 then update function is activated \n    '-> \"you can Edit, notes and delete your task and journal form this function.\"\n--> If you want to leave program then ENTER: 4 which will let you exit program.  ");
        fflush(stdin);
        printf("\n\n\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
        printf("\nYou can Enter ESC to go back to main menu, OR you can simply: ");
        system("pause");
        menu();
        break;
    case 1:
        write(); // write fucction call to add list or journal
        break;
    case 2:
        read(); // read fucction call to display list or journal
        break;
    case 3:
        update(); // read fucction call to update list or journal
        break;
    case 4:
        printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
        printf("Program is going to be closed....\n"); // to exit the program after all function completion
        system("cls");
        system("pause"); // holding a screen of terminal for user input
        exit(0);
        break;

    default:
        printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        system("pause");
        menu(); // if input is invalid then redirecting the user to main menu
        break;
    }
}