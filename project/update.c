#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
void update_journal();
void edit_todo();
void delete_todo();
void delete_notes();
void edit_journal();
void delete_journal();
void update()
{
    fflush(stdin);
    system("cls");
    printf("\tUpdate Function Is Activated\n\n");
    Sleep(75);
    printf("                  .___       __             ._. ._. ._.         \n");
    Sleep(75);
    printf("  __ ________   __| _/____ _/  |_  ____     | | | | | |         \n");
    Sleep(75);
    printf(" |  |  \\____ \\ / __ |\\__  \\   __\\/ __ \\     | | | | | |         \n");
    Sleep(75);
    printf(" |  |  /  |_> > /_/ | / __ \\|  | \\  ___/     \\|  \\|  \\|         \n");
    Sleep(75);
    printf(" |____/|   __/\\____ |(____  /__|  \\___  >    __  __  __         \n");
    Sleep(75);
    printf("       |__|        \\/     \\/          \\/     \\/  \\/  \\/         \n\n\n");
    Sleep(75);
    int choice;
    printf("Available functions are:\n");
    printf("\n1: Update Todo List\n2: Update journal\n3: Delete Notes \n4: Go to main menu\n\nSelect An Option : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        update_todo();
        break;
    case 2:
        // printf("display journal");
        update_journal();
        // delete_todo();

        break;
   case 3:
        delete_notes();
        break;
    case 4:
        printf("Returning to the main menu");
        system("pause");
        menu(); // return to main menu
        break;
    default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        Sleep(1000);
        printf("Program is in Updating menu now\n");
        menu();
        break;
    }
}

///********************************** void update()  function finished and void update_todo() function starts*****************************

void update_todo()
{
    fflush(stdin);
    system("cls");
    printf("\tUpdate todo List Function Is Activated\n\n");
    int choice;
    printf("Available functions are:\n");
    printf("\n1: Edit Todo List\n2: delete Todo List\n3: Go to update menu\n\nSelect An Option : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        edit_todo();
        break;
    case 2:

        // printf("display journal");

        delete_todo();

        // delete_todo();

        break;
    case 3:
        update();
        break;
    default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        menu();
        break;
    }
}

///********************************** void update_todo() function finished and void edit_todo() function starts*****************************

void edit_todo()
{
    fflush(stdin);
    system("cls");
    printf("\tEdit Todo List Function Is Activated\n\n");
    Sleep(75);
    printf("      __________________   __________________    \n");
    Sleep(75);
    printf("  .-/|                  \\ /                  |\\-.    \n");
    Sleep(75);
    printf("  ||||                   |                   ||||    \n");
    Sleep(75);
    printf("  ||||                   |       ~~*~~       ||||    \n");
    Sleep(75);
    printf("  ||||    --==*==--      |                   ||||    \n");
    Sleep(75);
    printf("  ||||                   |                   ||||    \n");
    Sleep(75);
    printf("  ||||                   |                   ||||    \n");
    Sleep(75);
    printf("  ||||                   |     --==*==--     ||||    \n");
    Sleep(75);
    printf("  ||||                   |                   ||||    \n");
    Sleep(75);
    printf("  ||||                   |                   ||||    \n");
    Sleep(75);
    printf("  ||||                   |                   ||||    \n");
    Sleep(75);
    printf("  ||||                   |                   ||||    \n");
    Sleep(75);
    printf("  ||||__________________ | __________________||||    \n");
    Sleep(75);
    printf("  ||/===================\\|/===================\\||    \n");
    Sleep(75);
    printf("  `--------------------~___~-------------------''    \n\n\n");
    Sleep(75);

    struct task_list
    {
        int sn;
        char task[200];
    };
    char date[12];
    printf("Enter the Date [dd-mm] of the file that you want to update: ");
    gets(date);
    struct task_list tl1;
    FILE *fp1, *fp2;
    fp1 = fopen(date, "r");
    fp2 = fopen("copy", "a+");
    if (fp1 == NULL)
    {
        printf("Error opening the file. \n File not found \n You are redirecting to main menu\n");
        system("pause");
        menu();
    }
    printf("Your previously stored task:\n");
    display_after_todo(date);
    int sn;
    printf("Enter the task number you want to update: ");
    scanf("%d", &sn);
    fflush(stdin);
    while (fread(&tl1, sizeof(tl1), 1, fp1))
    {
        if (tl1.sn != sn)
        {
            fflush(stdin);
            fwrite(&tl1, sizeof(tl1), 1, fp2);
        }
        if (tl1.sn == sn)
        {
            printf("\nEnter the new updated task for task %d:\n", tl1.sn);
            printf("->");
            fgets(tl1.task, 200, stdin);
            fflush(stdin);
            fwrite(&tl1, sizeof(tl1), 1, fp2);
        }
    }


    fclose(fp1);
    //displaying new updated task...
    fclose(fp2);
    remove(date);
    rename("copy", date);
    printf("Task updated sucessfully\n");
    printf("Your new task list is:\n");
    display_after_todo(date);
    system("pause");
    int i;
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\nDo you want to go to update menu ?\n\n1 :Yes\n2: No\nChoice : ");
    scanf("%d", &i);
    switch (i)
    {

    case 1:
    {
        update();
        break;
    }

    case 2:
    {
        printf("Okay, Returning To The Main Menu\n");
        system("pause");
        menu();
        break;
    }

    default:
    {
        printf("Error Selection, Lets Go To The Main Menu\n");
        system("pause");
        menu();
        break;
    }
    }
}
///********************************** void edit_todo() function finished and void delete_todo() function starts*****************************

void delete_todo()
{
    fflush(stdin);
    system("cls");
    printf("\tDelete Todo List Function Is Activated\n\n");
    Sleep(75);
    printf("     .___     .__          __           ._. ._. ._. \n");
    Sleep(75);
    printf("   __| _/____ |  |   _____/  |_  ____   | | | | | | \n");
    Sleep(75);
    printf("  / __ |/ __ \\|  | _/ __ \\   __\\/ __ \\  | | | | | | \n");
    Sleep(75);
    printf(" / /_/ \\  ___/|  |_\\  ___/|  | \\  ___/   \\|  \\|  \\| \n");
    Sleep(75);
    printf(" \\____ |\\___  >____/\\___  >__|  \\___  >  __  __  __ \n");
    Sleep(75);
    printf("      \\/    \\/          \\/          \\/   \\/  \\/  \\/  \n\n\n");
    Sleep(75);
    struct task_list
    {
        int sn;
        char task[200];
    };
    struct task_list tl1;
    char date[12];
    printf("\nEnter the Date [dd-mm] of the file that you want to update: ");
    gets(date);
    FILE *fp1, *fp2;
    int sn;
    fp1 = fopen(date, "r");
    fp2 = fopen("copy1", "a+");
    if (fp1 == NULL)
    {
        printf("Error opening the file;\n File not found..\n");
        printf("You are redirecting to main menu\n");
        system("pause");
        menu();
    }
    int ch5;
    printf("Enter What you want to do?\n");
    printf("1. Delete task\n");
    printf("2. Delete file\n");
    scanf("%d", &ch5);
    if (ch5 == 1)
    {
        printf("Your previously stored task:\n");
        display_after_todo(date);
        printf("\nEnter the task number you want to delete:");
        scanf("%d", &sn);
        fflush(stdin);
        while (fread(&tl1, sizeof(tl1), 1, fp1))
        {
            if (sn != tl1.sn)
            {

                fwrite(&tl1, sizeof(tl1), 1, fp2);
            }
        }
        fclose(fp1);
        fclose(fp2);
        remove(date);
        rename("copy1", date);
        printf("\ndeleted succefully\n");
        printf("Your new task list :\n");
        display_after_todo(date);
        system("pause");
    }
    else if (ch5 == 2)
    {
        char choice;
        printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
        printf("\n\n\nYou are going to delete todo of [%s]", date);
        printf("\nAre You Sure to delete this todo (y/n):\n");
        printf("->");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == 'y')
        {
            char fch;
            fflush(stdin);
            printf("Once you delete you can't access it's content.\n");
            printf("Are you sure?(y/n)\n");
            printf("->");
            scanf("%c", &fch);
            fflush(stdin);
            if (fch == 'y')
            {
                fclose(fp1);
                fclose(fp2);
                remove(date);
                printf("\nYour todo has been sucessfully deleted..\n");
                

            }
            else
            {

                printf("operation has been canceled..\n");
                printf("You are redirecting to the main menu.....\n");
                system("pause");
                menu();
            }
        }
        else
        {
            printf("operation has been canceled..\n");
            printf("You are redirecting to the main menu.....\n");
            system("pause");
            menu();
        }
    }
    else
    {
        printf("ERROR: Invalid input\n");
        printf("you are redirecting to delete menu\n");
        delete_todo();
    }
        int i;
        printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
        printf("\n\n Do you want to delete more task ?\n\n1 :Yes\n2: No\nChoice : ");
        scanf("%d", &i);
        switch (i)
    {

        case 1:
        {
            delete_todo();
            break;
        }

        case 2:
        {
            printf("Okay, Returning To The Main Menu\n");
            system("pause");
            menu();
            break;
        }

        default:
        {
            printf("Error Selection, Lets Go To The Main Menu\n");
            system("pause");
            menu();
            break;
        }
     }
    
}

///********************************** void delete_todo() function finished and delete_notes() function starts*****************************
void delete_notes(){
     fflush(stdin);
    system("cls");
    printf("\tDelete Notes List Function Is Activated\n\n");
    Sleep(100); 
    printf( "     .___     .__          __           ._. ._. ._. \n");
    Sleep(100); 
    printf( "   __| _/____ |  |   _____/  |_  ____   | | | | | | \n");
    Sleep(100); 
    printf( "  / __ |/ __ \\|  | _/ __ \\   __\\/ __ \\  | | | | | | \n");\
    Sleep(100); 
    printf( " / /_/ \\  ___/|  |_\\  ___/|  | \\  ___/   \\|  \\|  \\| \n");
    Sleep(100); 
    printf( " \\____ |\\___  >____/\\___  >__|  \\___  >  __  __  __ \n");
    Sleep(100); 
    printf( "      \\/    \\/          \\/          \\/   \\/  \\/  \\/  \n\n\n");
    Sleep(100); 

     struct notes
{
    char time[10];
    char topic[20];
    char text[500];
};

    struct notes n;
   
    FILE *fp1,*fp2;
    char topic[20];
    fp1=fopen("notes.txt","r");
    fp2=fopen("copy2.txt","a+");
     if(fp1==NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("previously saved notes are:\n");
    display_after_notes();
    fflush(stdin);
    printf("\nEnter the topic of note you want to delete\n");
    printf("->");
    fgets(topic,20,stdin);
    while(fread(&n,sizeof(n),1,fp1)==1){
        if(strcmp(topic,n.topic)!=0){
               fwrite(&n,sizeof(n),1,fp2);
        }
        else if(strcmp(topic, n.topic)==0){
            printf("You have deleted:");
            printf("Topic:%s\n Written Content: %s", n.topic , n.text);
        }
        
    }
    fclose(fp1);
    fclose(fp2);
    remove("notes.txt");
    rename("copy2.txt","notes.txt");
    printf("\ndeleted succefully\n");
    printf("You can check your updated notes from reading function.");
    system("pause");
	int i;
	printf("Want to delete more notes ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){
	
		case 1 :{

		delete_notes();
		break;}
	
		case 2 :{
		printf("Okay, Returning To The Main Menu\n");
		system("pause");
		menu();
		break;
		}
		
		default :{
		printf("Error Selection, Lets Go To The Main Menu\n");
		system("pause");
		menu();
		break;
		}
	}

}
///********************************** void delete_notes() function finished and update_journal() function starts*****************************

void update_journal()
{
    fflush(stdin);
    system("cls");
    printf("\tUpdate  journal List Function Is Activated\n\n");
    int choice;
    printf("Available functions are:\n");
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\n1: Continue Journal\n2: delete journal\n3: Go to update menu\n\nSelect An Option : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        edit_journal();
        break;
    case 2:
        // printf("display journal");
        delete_journal();
        // delete_todo();

        break;
    case 3:
        printf("going to update menu\n");
        system("pause");
        update();
        break;
    default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the update menu.....\n");
        system("pause");
        update();
        break;
    }
}
///********************************** void update_journal() function finished and uvoid edit_journal() function starts*****************************

void edit_journal()
{
    fflush(stdin);
    system("cls");
    printf("\tContinue Journal Function Is Activated\n\n");
    Sleep(75);
    printf("         _________   _________    \n");
    Sleep(75);
    printf("    ____/      452\\ /     453 \\____    \n");
    Sleep(75);
    printf("  /| ------------- |  ------------ |\\    \n");
    Sleep(75);
    printf(" ||| ------------- | ------------- |||    \n");
    Sleep(75);
    printf(" ||| ------------- | ------------- |||    \n");
    printf(" ||| ------- ----- | ------------- |||    \n");
    Sleep(75);
    printf(" ||| ------------- | ------------- |||    \n");
    Sleep(75);
    printf(" ||| ------------- | ------------- |||    \n");
    printf(" |||  ------------ | ----------    |||    \n");
    Sleep(75);
    printf(" ||| ------------- |  ------------ |||    \n");
    Sleep(75);
    printf(" ||| ------------- | ------------- |||    \n");
    Sleep(75);
    printf(" ||| ------------- | ------ -----  |||    \n");
    printf(" ||| ------------  | ------------- |||    \n");
    Sleep(75);
    printf(" |||_____________  |  _____________|||    \n");
    printf(" L/_____/--------\\_//W-------\\_____\\J    \n\n\n");
    Sleep(75);

    char date[12];
    char text[500];
    char text2[500];
    FILE *fp;
    printf("Journal's Date [dd-mm-yyyy]: ");
    gets(date);
    fp = fopen(date, "a+");
    fflush(stdin);
    if (fp == NULL)
    {
        printf("ERROR: Can't open the file. \n File not found.\nyou are redirecting to main menu\n");
        system("pause");
        menu();
    }
    while (fgets(text, 500, fp) != NULL)
    {
        sscanf(text, "%[^\n]", text2);
        printf("%s", text);
    }
    printf("\nContinue writing today\'s journal [%s]\n:", date);
    fgets(text, 500, stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Update Sucessfully...\n");
    printf("Your updated journal:\n\n");
    FILE *fp4;
    fp4=fopen(date,"r");
     fflush(stdin);
    if (fp4 == NULL)
    {
        printf("ERROR: Can't open the file. \n File not found.\nyou are redirecting to main menu\n");
        system("pause");
        menu();
    }
    while (fgets(text, 500, fp4) != NULL)
    {
        sscanf(text, "%[^\n]", text2);
        printf("%s", text);
    }
    system("pause");
    int i;
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\nDo you want to go back to update menu ?\n\n1 :Yes\n2: No\nChoice : ");
    scanf("%d", &i);
    switch (i)
    {

    case 1:
    {
        update();
        break;
    }

    case 2:
    {
        printf("Okay, Returning To The Main Menu\n");
        system("pause");
        menu();
        break;
    }

    default:
    {
        printf("Error Selection, Lets Go To The Main Menu\n");
        system("pause");
        menu();
        break;
    }
    }
}

///********************************** void edit_journal() function finished and void delete_journal() function starts*****************************

void delete_journal()
{
    fflush(stdin);
    system("cls");
    printf("\tDelete Todo List Function Is Activated\n\n");
    Sleep(75);
    printf("     .___     .__          __           ._. ._. ._. \n");
    Sleep(75);
    printf("   __| _/____ |  |   _____/  |_  ____   | | | | | | \n");
    Sleep(75);
    printf("  / __ |/ __ \\|  | _/ __ \\   __\\/ __ \\  | | | | | | \n");
    Sleep(75);
    printf(" / /_/ \\  ___/|  |_\\  ___/|  | \\  ___/   \\|  \\|  \\| \n");
    Sleep(75);
    printf(" \\____ |\\___  >____/\\___  >__|  \\___  >  __  __  __ \n");
    Sleep(75);
    printf("      \\/    \\/          \\/          \\/   \\/  \\/  \\/  \n\n\n");
    Sleep(75);
    char date[12];
    char text[500];
    char text2[500];
    FILE *fp;
    printf("\nJournal's Date [dd-mm-yyyy]: ");
    gets(date);
    fp = fopen(date, "r");
    fflush(stdin);
    if (fp == NULL)
    {
        printf("ERROR: Can't open the file.\n File not found\n you are redirecting to main menu");
        system("pause");
        menu();
    }
    while (fgets(text, 500, fp) != NULL)
    {
        sscanf(text, "%[^\n]", text2);
        printf("%s", text);
    }
    int i;
    char choice;
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\n\nYou are going to delete Jorunal of [%s]", date);
    printf("\nAre You Sure to delete this journal (y/n):\n");
    printf("->");
    scanf("%c", &choice);
    if (choice == 'y')
    {
        char fch;
        fflush(stdin);
        printf("Once you delete you can't access it's content.\n");
        printf("Are you sure?(y/n)\n");
        printf("->");
        scanf("%c", &fch);
        fflush(stdin);
        if (fch == 'y')
        {
            fclose(fp);
            remove(date);
            printf("\nYour journal has been sucessfully deleted..\n");
            
        }
        else
        {

            printf("operation has been canceled..");
            printf("You are redirecting to the main menu.....\n");
            system("pause");
            menu();
        }
    }
    else
    {
        printf("operation has been canceled..");
        printf("You are redirecting to the main menu.....\n");
        system("pause");
        menu();
    }
    fclose(fp);
    fflush(stdin);
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\nDo you want to go back to update menu ?\n\n1 :Yes\n2: No\nChoice : ");
    scanf("%d", &i);
    switch (i)
    {

    case 1:
    {
        update();
        break;
    }

    case 2:
    {
        printf("Okay, Returning To The Main Menu\n");
        system("pause");
        menu();
        break;
    }

    default:
    {
        printf("Error Selection, Lets Go To The Main Menu\n");
        system("pause");
        menu();
        break;
    }
    }
}
