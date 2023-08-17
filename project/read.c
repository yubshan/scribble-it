#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void display_journal();
void display_todo();
void display_after_todo(char *date);
void update_todo();
void display_notes();
void display_after_notes();
void read()
{                  // displaying content of diff file
    fflush(stdin); // clearing the buffer value or garbage value
    system("cls"); // clearing the terminal
    printf("Read Function Is Activated\n\n");
    Sleep(75);
    printf("      _.--._  _.--._\"  \n");
    Sleep(75);
    printf(",-=.-\":;:;:;':;:;:;\"-._   \n");
    Sleep(75);
    printf("\\\\:;:;:;:;:;\\:;:;:;:;:;\\  \n");
    Sleep(75);
    printf(" \\\\:;:;:;:;:;\\:;:;:;:;:;\\  \n");
    Sleep(75);
    printf("  \\\\:;:;:;:;:;\\:;:;:;:;:;\\  \n");
    Sleep(75);
    printf("   \\\\:;:;:;:;:;\\:;::;:;:;:\\  \n");
    Sleep(75);
    printf("    \\\\;:;::;:;:;\\:;:;:;::;:\\  \n");
    Sleep(75);
    printf("     \\\\;;:;:_:--:\\:_:--:_;:;\\  \n");
    Sleep(75);
    printf("      \\\\_.-\"      :      \"-._\\  \n");
    Sleep(75);
    printf("       \\`_..--" "--.;.--" "--.._=>  \n");
    Sleep(75);
    int choice;
    printf("Available functions are:\n");
    printf("\n1: Read Todo List\n2: Read Journal\n3: Read Notes\n4: Go to main menu\n\nSelect An Option : ");
    scanf("%d", &choice); // storing choice for switching different function of read function
    switch (choice)
    {
    case 1:
        display_todo(); // display todo list
        break;
    case 2:
        // printf("display journal");
        display_journal(); // display journal
        break;
      case 3:
        display_notes();
        break;
    case 4:
        printf("Returning to the main menu");
        system("pause");
        menu(); // return to main menu
        break;
    default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        system("pause");
        menu(); // redirecting to main meanu after invalid input
        break;
    }
}

///********************************** void read()  function finished and void display_todo() function starts*****************************

void display_todo(){  //display to do list
    fflush(stdin);  //clearing the buffer value or garbage value
    system("cls"); //clearing the terminal
	printf("Reading Todo list Function Is Activated\n\n");

    Sleep(75);
    printf("      ______ ______     \n");
    Sleep(75);
    printf("    _/      Y      \\_   \n");
    Sleep(75);
    printf("   // ~~ ~~ | ~~ ~  \\   \n");
    Sleep(75);
    printf("  // ~ ~ ~~ | ~~~ ~~ \\   \n");      
    Sleep(75);
    printf(" //________.|.________\\   \n");     
    Sleep(75);
    printf("`----------`-'----------'   \n\n\n");
    Sleep(75);

    struct task_list   //declared to store the data read from file
{
    int sn;
    char task[200];
};
       struct task_list temp;  //temp struct created for sorting
    struct task_list arr[30];  //array of scructure is used for easy sorting

    int i, j,k=0;
    FILE *fp;
      char date[12];
    fflush(stdin);
    printf("Check task for Date [dd-mm]:");
    gets(date);
    fp=fopen(date,"r");
    printf("\nTask for %s are:\n\n",date);
        if(fp==NULL){
            printf("ERROR: Can't open the file. \n File not found \n you are redirecting to main menu");
            system("pause");
            menu();
            }
    i=0;
    while(fread(&arr[i],sizeof(arr[i]),1,fp)==1){
        i++;
        k++;
    }
    for(int i=0; i<k;i++){
        for(j=0; j<k-i-1;j++){
            if(arr[j].sn>arr[j+1].sn){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<k; i++){
        printf(" -> %s\n", arr[i].task);
    }
    fclose(fp);
    system("pause");
    fflush(stdin);
    int ch;
      printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
	printf("\n\nDo you want to go to read menu ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&ch);

	switch (ch){
	
		case 1 :{
		read();
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

///********************************** void display_todo()  function finished and display_notes() function starts*****************************

void display_notes(){
        fflush(stdin);
     system("cls"); 
      printf("Reading note list Function Is Activated\n\n");

    Sleep(75);
    printf("      ______ ______     \n");
        Sleep(75);
    printf("    _/      Y      \\_     \n");
        Sleep(75);
    printf("   // ~~ ~~ | ~~ ~  \\     \n");
        Sleep(75);
    printf("  // ~ ~ ~~ | ~~~ ~~ \\           \n");
        Sleep(75);
    printf(" //________.|.________\\          \n");
        Sleep(75);
    printf("`----------`-'----------'    \n");
    Sleep(75);
    struct notes
{
    char time[10];
    char topic[20];
    char text[500];
};
    struct notes n;
    FILE *fp;
    char date[12];
    fp=fopen("notes.txt","r");
    printf("\nNotes are:\n\n");
    if(fp==NULL){
        printf("Error: Can't open file");
    }
    while(fread(&n,sizeof(n),1,fp)==1){
        printf(" Note Written at: %s\n", n.time);
        printf(" Topic of Written content: %s\n",n.topic);
        printf("  Written content: \n");
        printf(" -> %s\n", n.text);
    }
    fclose(fp);
    system("pause");
    fflush(stdin);
    int ch;
	printf("Continue Reading ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&ch);

	switch (ch){
	
		case 1 :{
		read();
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

///********************************** void display_notes()  function finished and display_journal() function starts*****************************

void display_journal()
{
    fflush(stdin);
    system("cls");
    printf("Reading journal Function Is Activated\n\n\n");
    Sleep(75);
    printf("                  .--.   _\n");
    Sleep(75);
    printf("              .---|__| .\\(\\(\\-.\n");
    Sleep(75);
    printf("          .---|===|--|/    , \\\n");
    Sleep(75);
    printf("          | J |===|  |\\      y\n");
    Sleep(75);
    printf("          | O |   |  | `.__,'\n");
    Sleep(75);
    printf("          | U |   |  | /  \\\\\\\n");
    Sleep(75);
    printf("          | R |   |  |/|  | \\`----.\n");
    Sleep(75);
    printf("          | N |   |  ||\\  \\  |___.'_\n");
    Sleep(75);
    printf("         _| A |   |__||,\\  \\-+-._.' )_\n");
    Sleep(75);
    printf("        / | L |===|--|\\  \\  \\      /  \\\n");
    Sleep(75);
    printf("       /  `---^---'--' `--`-'---^-'    \\\n");
    Sleep(75);
    printf("      '================================`\n\n");
    Sleep(75);

    FILE *fp;
    char date[12];
    char text[500];
    char text2[500];
    printf("Journal's Date [dd-mm-yyyy]: ");
    gets(date);
    fp = fopen(date, "r");
    fflush(stdin);
    if (fp == NULL)
    {
        printf("ERROR: Can't open the file. |n File not found \n you are redirecting to main menu\n");
        system("pause");
        menu();
    }
    while (fgets(text, 500, fp) != NULL)
    {
        sscanf(text, "%[^\n]", text2);
        printf("%s", text);
    }
    fclose(fp);
    system("pause");
    int i;
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\nDo you want to go to read menu ?\n\n1 :Yes\n2: No\nChoice : ");
    scanf("%d", &i);
    switch (i)
    {

    case 1:
    {
        read();
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

///********************************** void display_journal()  function finished and void update() function starts*****************************
void display_after_todo(char *date){
   struct task_list   //declared to store the data read from file
{
    int sn;
    char task[200];
};
       struct task_list temp;  //temp struct created for sorting
    struct task_list arr[30];  //array of scructure is used for easy sorting

    int i, j,k=0;
    FILE *fp;
    fp=fopen(date,"r");
        if(fp==NULL){
            printf("ERROR: Can't open the file. \n File not found \n you are redirecting to main menu");
            system("pause");
            menu();
            }
    i=0;
    while(fread(&arr[i],sizeof(arr[i]),1,fp)==1){
        i++;
        k++;
    }
    for(int i=0; i<k;i++){
        for(j=0; j<k-i-1;j++){
            if(arr[j].sn>arr[j+1].sn){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<k; i++){
        printf(" -> %s\n", arr[i].task);
    }
    fclose(fp);
}
void display_after_notes(){
        struct notes
{
    char time[10];
    char topic[20];
    char text[500];
};

    struct notes t;
    FILE *fp;
    fp=fopen("notes.txt","rb");
       while(fread(&t,sizeof(t),1,fp)==1){
        printf(" Note Written at: %s\n", t.time);
        printf(" Topic of Written content: %s\n",t.topic);
        printf("  Written content: \n");
        printf(" -> %s\n", t.text);
    }
    fclose(fp);

}
