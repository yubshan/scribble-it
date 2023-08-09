#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
void update_todo();
void update_journal();
void edit_todo(); 
void delete_todo(); 
void edit_journal();
void delete_journal();
void update{
    fflush(stdin);
    system("cls");
    printf("\tUpdate Function Is Activated\n\n");
    Sleep(100);
    printf("                  .___       __             ._. ._. ._.         \n");
    Sleep(100);
    printf("  __ ________   __| _/____ _/  |_  ____     | | | | | |         \n");
    Sleep(100);
    printf(" |  |  \\____ \\ / __ |\\__  \\   __\\/ __ \\     | | | | | |         \n");
    Sleep(100);
    printf(" |  |  /  |_> > /_/ | / __ \\|  | \\  ___/     \\|  \\|  \\|         \n");
    Sleep(100);
    printf(" |____/|   __/\\____ |(____  /__|  \\___  >    __  __  __         \n");
    Sleep(100);
    printf("       |__|        \\/     \\/          \\/     \\/  \\/  \\/         \n\n\n");
    Sleep(100);
     int choice;
     printf("Available functions are:\n");
     printf("\n1: Update Todo List\n2: Update journal\n3: Go to main menu\n\nSelect An Option : ");
    scanf("%d",&choice);
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
        printf("going to menu");
            // menu();
            break;
        default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        Sleep(1000); 
        printf("Program is in Updating menu now\n");
        // menu();
        break;
 
    }
    return 0;


}


void update_todo(){
     fflush(stdin);
    system("cls");
    printf("\tUpdate todo List Function Is Activated\n\n");
    int choice;
     printf("Available functions are:\n");
     printf("\n1: Edit Todo List\n2: delete Todo List\n3: Go to update menu\n\nSelect An Option : ");
    scanf("%d",&choice);
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
        printf("going to update menu");
            main();
            break;
        default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        Sleep(1000); 
        printf("Program is in Updating menu now\n");
        // menu();
        break;
    }
}
void edit_todo(){
    fflush(stdin);
    system("cls");
    printf("\tEdit Todo List Function Is Activated\n\n");
    Sleep(100);
    printf("      __________________   __________________    \n");
    Sleep(100);
    printf("  .-/|                  \\ /                  |\\-.    \n");
    Sleep(100);
    printf("  ||||                   |                   ||||    \n");
    Sleep(100);
    printf("  ||||                   |       ~~*~~       ||||    \n");
    Sleep(100);
    printf("  ||||    --==*==--      |                   ||||    \n");
    Sleep(100);
    printf("  ||||                   |                   ||||    \n");
    Sleep(100);
    printf("  ||||                   |                   ||||    \n");
    Sleep(100);
    printf("  ||||                   |     --==*==--     ||||    \n");
    Sleep(100);
    printf("  ||||                   |                   ||||    \n");
    Sleep(100);
    printf("  ||||                   |                   ||||    \n");
    Sleep(100);
    printf("  ||||                   |                   ||||    \n");
    Sleep(100);
    printf("  ||||                   |                   ||||    \n");
    Sleep(100);
    printf("  ||||__________________ | __________________||||    \n");
    Sleep(100);
    printf("  ||/===================\\|/===================\\||    \n");
    Sleep(100);
    printf("  `--------------------~___~-------------------''    \n\n\n");
    Sleep(100);

    struct task_list
{
    int sn;
    char task[200];
};
    char date[12];
    fflush(stdin);
    printf("Enter the Date [dd-mm] of the file that you want to update: ");
    gets(date);
     struct task_list tl1;
    FILE *fp1,*fp2;
    fp1=fopen(date,"r+");
    fp2=fopen("copy.txt","a+");
    if(fp1==NULL){
        printf("Error opening the file");
        exit(1);
    }
    int sn;
    printf("Enter the task number you want to update: ");
    scanf("%d",&sn);
    while(fread(&tl1, sizeof(tl1),1,fp1)){
        if(tl1.sn!=sn){
            fwrite(&tl1, sizeof(tl1),1,fp2);

        }
        if(tl1.sn==sn){
            fflush(stdin);
              printf("\nEnter the new updated task for task %d:\n",tl1.sn);
              printf("->");
             fgets(tl1.task,200,stdin);
              fwrite(&tl1, sizeof(tl1),1,fp2);
        }
    }  
   
     fclose(fp1);
     fclose(fp2);
     remove(date);
     rename("copy.txt",date);
     printf("Task updated sucessfully");
     system("pause");
	int i;
	printf("Continue updating ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){
	
		case 1 :{
		main();
		break;}
	
		case 2 :{
		printf("Okay, Returning To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
		
		default :{
		printf("Error Selection, Lets Go To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
	}
}

void delete_todo(){
     fflush(stdin);
    system("cls");
    printf("\tDelete Todo List Function Is Activated\n\n");
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

    struct task_list
        {
            int sn;
            char task[200];
        };
    struct task_list tl1;
      char date[12];
    fflush(stdin);
    printf("\nEnter the Date [dd-mm] of the file that you want to update: ");
    gets(date);
    FILE *fp1,*fp2;
    int sn;
    fp1=fopen(date,"r");
    fp2=fopen("copy.txt","a+");
     if(fp1==NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("\nEnter the task number you want to delete:");
    scanf("%d",&sn);
    while(fread(&tl1,sizeof(tl1),1,fp1)){
        if(sn!=tl1.sn){

         
            fwrite(&tl1,sizeof(tl1),1,fp2);
            

        }
        
    }
    fclose(fp1);
    fclose(fp2);
    remove(date);
    rename("copy.txt",date);
    printf("\ndeleted succefully");
    system("pause");
	int i;
	printf("Want to delete more task ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){
	
		case 1 :{
		delete_todo();
		break;}
	
		case 2 :{
		printf("Okay, Returning To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
		
		default :{
		printf("Error Selection, Lets Go To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
	}
    return 0;

}


void update_journal(){
     fflush(stdin);
    system("cls");
    printf("\tUpdate  journal List Function Is Activated\n\n");
    int choice;
     printf("Available functions are:\n");
     printf("\n1: Continue Journal\n2: delete journal\n3: Go to update menu\n\nSelect An Option : ");
    scanf("%d",&choice);
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
        printf("going to update menu");
            main();
            break;
        default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        Sleep(1000); 
        printf("Program is in Updating menu now\n");
        // menu();
        break;
    }
}

void edit_journal(){
    fflush(stdin);
    system("cls");
    printf("\tContinue Journal Function Is Activated\n\n");
    Sleep(100);
    printf( "         _________   _________    \n");
    Sleep(100);
    printf( "    ____/      452\\ /     453 \\____    \n");
    Sleep(100);
    printf( "  /| ------------- |  ------------ |\\    \n");
    Sleep(100);
    printf( " ||| ------------- | ------------- |||    \n");
    Sleep(100);
    printf( " ||| ------------- | ------------- |||    \n");
    printf( " ||| ------- ----- | ------------- |||    \n");
    Sleep(100);
    printf( " ||| ------------- | ------------- |||    \n");
    Sleep(100);
    printf( " ||| ------------- | ------------- |||    \n");
    printf( " |||  ------------ | ----------    |||    \n");
    Sleep(100);
    printf( " ||| ------------- |  ------------ |||    \n");
    Sleep(100);
    printf( " ||| ------------- | ------------- |||    \n");
    Sleep(100);
    printf( " ||| ------------- | ------ -----  |||    \n");
    printf( " ||| ------------  | ------------- |||    \n");
    Sleep(100);
    printf( " |||_____________  |  _____________|||    \n");
    printf( " L/_____/--------\\_//W-------\\_____\\J    \n\n\n");
    Sleep(100);
    
    FILE *fp;
    char date[12];
    char text[500];
    char text2[500];
    printf("Journal's Date [dd-mm-yyyy]: ");
	gets(date);
	fp=fopen(date,"a+");
	fflush(stdin);
    while(fgets(text, 500, fp)!=NULL){
        sscanf(text, "%[^\n]",text2);
        printf("%s",text);
    }
    printf("\nContinue writing today\'s journal [%s]\n:",date);
    fgets(text, 500, stdin);
    fprintf(fp,"%s",text);
    fclose(fp);
    printf("Update Sucessfully...\n");
    system("pause");
	int i;
	printf("Continue Updating ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){
	
		case 1 :{
		main();
		break;}
	
		case 2 :{
		printf("Okay, Returning To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
		
		default :{
		printf("Error Selection, Lets Go To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
	}
}

void delete_journal()
{
    fflush(stdin);
    system("cls");
    printf("\tDelete Todo List Function Is Activated\n\n");
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
    FILE *fp;
    char date[12];
    char text[500];
    char text2[500];
    printf("\nJournal's Date [dd-mm-yyyy]: ");
	gets(date);
	fp=fopen(date,"a+");
	fflush(stdin);
    while(fgets(text, 500, fp)!=NULL){
        sscanf(text, "%[^\n]",text2);
        printf("%s",text);
    } 
    int i;
    char choice;
    printf("You are going to delete Jorunal of [%s]",date);
    printf("\nAre You Sure to delete this journal (y/n):\n");
    printf("->");
    scanf("%c",&choice);
    if(choice=='y'){
        int fch;
        printf("Once you delete you can't access it's content.\n");
        printf("Are you sure?(y/n)\n");
        printf("->");
        scanf("%c",&fch);
        if(fch=='y'){
            remove(date);
            printf("\nYour journal have been sucessfully deleted..");
        }
        else{
            printf("operation has been canceled..");
            printf("You are redirecting to the main menu.....\n");
            // menu();
        }
    }
     else{
            printf("operation has been canceled..");
            printf("You are redirecting to the main menu.....\n");
            // menu();
        }


    fflush(stdin);
    system("cls");
    printf("Continue Updating ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){
	
		case 1 :{
		main();
		break;}
	
		case 2 :{
		printf("Okay, Returning To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
		
		default :{
		printf("Error Selection, Lets Go To The Main Menu\n");
		system("pause");
		// menu();
		break;
		}
	}

}