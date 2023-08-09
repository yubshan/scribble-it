#include<stdio.h>
#include<stdlib.h> 
#include<windows.h> 

void menu(){
    fflush(stdin);
    system("cls");
    int choice;
    
    printf("\n\n\t**********   I got your book   **********\n\n");
    Sleep(100);
    printf("\t\t      ,         ,  \n");
    Sleep(100);
    printf("\t\t      |\\\\\\\\\\ ////|  \n");
    Sleep(100);
    printf("\t\t      | \\\\\\\\V/// |  \n");
    Sleep(100);
    printf("\t\t      |  |~~~~|  |  \n");
    Sleep(100);
    printf("\t\t      |  |====|  |  \n");
    Sleep(100);
    printf("\t\t      |  |N   |  |  \n");
    Sleep(100);
    printf("\t\t      |  | O  |  |  \n");
    Sleep(100);
    printf("\t\t      |  |  T |  |  \n");
    Sleep(100);
    printf("\t\t       \\ |   E| /  \n");
    Sleep(100);
    printf("\t\t        \\|====|/  \n");
    Sleep(100);
    printf("\t\t         '----'  \n");
    Sleep(100);
    printf("\n\n**********   Welcome To The Main Menu   **********\n\n");
    Sleep(100);
	printf("1: Write\n2: Read\n3: Update\n4: Exit\n\nSelect An Option : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Program is going to write");
        // write();
        break;
    case 2:
        printf("Program is going to read");
        // read();
        break;
    case 3:
        printf("Program is going to update");
        // update();
        break;
    case 4:
        printf("Program is going to be closed....\n");
        system("pause");
        Sleep(500);
        exit(0);
        break;
    
    default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        Sleep(1000); 
        printf("Program is in main menu now\n");
        // menu();
        break;
    }
}