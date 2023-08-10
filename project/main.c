#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
void logo();
int password();
void menu();
void write();
void read();
void update();
void add_todo();
void add_journal();
void add_notes();
void display_journal();
void display_todo();
void display_after_todo(char *date); ///used function pass by refrence.
void update_todo();
void display_notes();
void display_after_notes();
void update_journal();
void edit_todo();
void delete_todo();
void delete_notes();
void edit_journal();
void delete_journal();
int main()
{

    logo();
    system("Color 03");
    int c;
    fflush(stdin);
    system("cls");
    Sleep(75);
    printf("\n\n 	************   Welcome To The Personal Diary   ************\n\n");
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
        gets(p.user);
        fflush(stdin);
        printf("Enter your password (for eg: Ram123): ");
        gets(p.pass);
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
    gets(user);
    fflush(stdin);
    printf("Password:");
    // while((ch=_getch())!=13){
    //     fflush(stdin);
    //     pass[i]=ch;
    //     fflush(stdin);
    //     i++;
    //     printf("*");
    // }
    gets(pass);

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

///**********************************int password() function finished and void menu() function starts*****************************
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

///**********************************void menu() function finished and void write () function starts*****************************
void write()
{
    int choice;
    fflush(stdin); // clearing the buffer value or garbage value
    system("cls"); // clearing the terminal
    printf("Write Function Is Activated\n\n");
    Sleep(75);
    printf("	  __  \n");
    Sleep(75);
    printf(" (`/\\  \n");
    Sleep(75);
    printf(" `=\\/\\ __...--~~~~~-._   _.-~~~~~--...__  \n");
    Sleep(75);
    printf("  `=\\/\\               \\ /               \\  \n");
    Sleep(75);
    printf("   `=\\/                V                 \\  \n");
    Sleep(75);
    printf("   //_\\___--~~~~~~-._  |  _.-~~~~~~--...__\\  \n");
    Sleep(75);
    printf("  //  ) (..----~~~~._\\ | /_.~~~~----.....__\\  \n");
    Sleep(75);
    printf(" ===( INK )==========\\|//====================  \n");
    Sleep(75);
    printf("_____\\___/___________`---`____________________________________________  \n\n\n");
    Sleep(75);
    printf("\n\n**********   Welcome To The Write Menu   **********\n\n");
    printf("\n1: Write Todo List\n2: Write journal\n3: Write Notes \n4: Go to main menu\n\nSelect An Option : ");
    scanf("%d", &choice); // storing the value for switching between function of write function
    switch (choice)
    {
    case 1:
        add_todo(); // adding list
        break;
    case 2:
        add_journal(); // adding journal
        break;
    case 3:
        add_notes();
        break;
    case 4:
        printf("Returning to the main menu");
        system("pause");
        menu(); // return to main menu
        break;
    default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        menu(); // return to main menu
        break;
    }
}
///**********************************void write() function finished and void add_todo () function starts*****************************

void add_todo() // adding list
{
    fflush(stdin); // clearing the buffer value or garbage value
    system("cls"); // clearing the terminal
    printf("Writing TODO Function Is Activated\n\n\n");
    Sleep(75);
    printf("\t\(\\\n");
    Sleep(75);
    printf("\t\\'\\\n");
    Sleep(75);
    printf("\t \\'\\     __________ \n");
    Sleep(75);
    printf("\t / '|   \()_________)\n");
    Sleep(75);
    printf("\t \\ '/    \\ ~~~~~~~~ \\\n");
    Sleep(75);
    printf("\t   \\       \\ ~~~~~~   \\\n");
    Sleep(75);
    printf("\t   ==).      \\__________\\\n");
    Sleep(75);
    printf("\t \(__)       \()__________)\n\n\n");
    Sleep(75);
    struct task_list // taking task as struct
    {
        int sn;
        char task[200];
    };
    struct task_list tl;
    time_t ctime;        // variable declaration for current time
    struct tm *timeinfo; // storing diff variable of time into struct throug timeinfo pointer
    time(&ctime);
    timeinfo = localtime(&ctime);
    printf("\nLocal Date And Time: %s\n", asctime(timeinfo));
    fflush(stdin);
    char choice = 'y'; // varible for while loop
    char date[12];
    printf("Today\'s Date [dd-mm]:");
    gets(date); // storing date for unique name file creation
    FILE *fp;
    fp = fopen(date, "a+"); // opening the file into append + mode
    if (fp == NULL)
    {
        printf("ERROR: Can't open the file. \nFile not found \n you are redirecting to main menu");
        system("pause");
        menu();
    }
    while (choice == 'y')
    { // looping the store of sn and task into structure untill false
        printf("Enter the task sn number: ");
        scanf("%d", &tl.sn);
        fflush(stdin);
        printf("Enter the task %d: ", tl.sn);
        fgets(tl.task, 200, stdin);
        fwrite(&tl, sizeof(tl), 1, fp);
        printf("do you want to more task?(y/n): \n");
        scanf("%c", &choice);
    }
    fclose(fp);
    int ch;
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\n Do you want to go to write menu?\n\n1: Yes\n2: No\nChoice : ");
    scanf("%d", &ch);

    switch (ch)
    {

    case 1:
    {
        write();
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

///**********************************void add_todo() function finished and void add_notes() function starts*****************************
void add_notes(){
    fflush(stdin);
    system("cls");
        printf("Writing notes Function Is Activated\n\n");
    Sleep(75);
    printf("	  __  \n");
    Sleep(75);
    printf(" (`/\\  \n");
    Sleep(75);
    printf(" `=\\/\\ __...--~~~~~-._   _.-~~~~~--...__  \n");
    Sleep(75);
    printf("  `=\\/\\               \\ /               \\  \n");
    Sleep(75);
    printf("   `=\\/                V                 \\  \n");
    Sleep(75);
    printf("   //_\\                |                 \\  \n");
    Sleep(75);
    printf("  //  ) (..----~~~~._\\ | /_.~~~~----.....__\\  \n");
    Sleep(75);
    printf(" ===( INK )==========\\|//====================  \n");
    Sleep(75);
    printf("_____\\___/___________`---`____________________________________________  \n\n\n");
    Sleep(75);
      time_t ctime;        // variable declaration for current time
    struct tm *timeinfo; // storing diff variable of time into struct throug timeinfo pointer
    time(&ctime);
    timeinfo = localtime(&ctime);
    printf("\nLocal Date And Time: %s\n", asctime(timeinfo));
       //journal notes
    struct notes{
    char time[10];
    char topic[20];
    char text[500];
    };
    struct notes n;
    
     char choice='y';
    FILE *fp;

   
    fp=fopen("notes.txt","ab");
    fflush(stdin);
     while(choice=='y'){
    int hour=timeinfo->tm_hour;
    int min=timeinfo->tm_min;
    int sec=timeinfo->tm_sec;
    char time[20];
    snprintf(time,sizeof(time),"%d:%d:%d",hour, min, sec);
    sscanf(time,"%s",n.time);
        fflush(stdin);
         printf("Enter the topic:");
    fgets(n.topic, 20, stdin);
        fflush(stdin);
    printf("\nStart writing your thought:\n:");
    fgets(n.text, 500, stdin);
    printf("Written Content:%s\n",n.text);
    fwrite(&n,sizeof(n),1,fp);
        printf("do you want to add new notes?(y/n)\n");
        scanf("%c",&choice);
    }
    fclose(fp);
        fclose(fp);
    system("pause");
    fflush(stdin);
    int ch;
	printf("Want to go back to Write function ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&ch);

	switch (ch){
	
		case 1 :{
		write();
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
///**********************************void add_notes() function finished and void add_journal() function starts*****************************

void add_journal()
{
    fflush(stdin); // clearing the buffer value or garbage value
    system("cls"); // clearing the terminal
    printf("Writing Journal Function Is Activated\n\n\n");
    Sleep(75);
    printf("\t\(\\\n");
    Sleep(75);
    printf("\t\\'\\\n");
    Sleep(75);
    printf("\t \\'\\     __________ \n");
    Sleep(75);
    printf("\t / '|   \()_________)\n");
    Sleep(75);
    printf("\t \\ '/    \\ ~~~~~~~~ \\\n");
    Sleep(75);
    printf("\t   \\       \\ ~~~~~~   \\\n");
    Sleep(75);
    printf("\t   ==).      \\__________\\\n");
    Sleep(75);
    printf("\t \(__)       \()__________)\n\n\n");
    Sleep(75);
    time_t ctime;        // variable declaration for current time
    struct tm *timeinfo; // storing diff variable of time into struct throug timeinfo pointer
    time(&ctime);
    timeinfo = localtime(&ctime);
    printf("\nLocal Date And Time: %s\n", asctime(timeinfo));
    fflush(stdin);

    // journal writing
    FILE *fp;
    char date[12];  // varibles for storing date and name of file
    char text[500]; // variables for storing content
    printf("Today\'s Date [dd-mm-yyyy]:");
    gets(date);
    fp = fopen(date, "a");
    fflush(stdin);
    if (fp == NULL)
    {
        printf("ERROR: Can't open the file.\n File not found \n you are redirecting to main menu");
        system("pause");
        menu();
    }
    printf("\nStart writing today\'s journal [%s]\n:", date);
    fgets(text, 500, stdin);
    printf("Written Content:\n%s", text);
    fprintf(fp, "%s\n%s", asctime(timeinfo), text); // writing content in file
    fclose(fp);
    int ch;
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
    printf("\n\n Do you want to go to write menu?\n\n1 :Yes\n2: No\nChoice : ");
    scanf("%d", &ch);

    switch (ch)
    {

    case 1:
    {
        write();
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

///**********************************void add_journal() function finished and void read() function starts*****************************
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
    fflush(stdin);
    fp=fopen("notes.txt","rb");
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
    fflush(stdin);
    printf("Enter the Date [dd-mm] of the file that you want to update: ");
    gets(date);
    struct task_list tl1;
    FILE *fp1, *fp2;
    fp1 = fopen(date, "r+");
    fp2 = fopen("copy.txt", "a+");
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
    while (fread(&tl1, sizeof(tl1), 1, fp1))
    {
        if (tl1.sn != sn)
        {
            fwrite(&tl1, sizeof(tl1), 1, fp2);
        }
        if (tl1.sn == sn)
        {
            fflush(stdin);
            printf("\nEnter the new updated task for task %d:\n", tl1.sn);
            printf("->");
            fgets(tl1.task, 200, stdin);
            fwrite(&tl1, sizeof(tl1), 1, fp2);
        }
    }

    fclose(fp1);
    //displaying new updated task...
    fclose(fp2);
    remove(date);
    fflush(stdin);
    rename("copy.txt", date);
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
    fflush(stdin);
    printf("\nEnter the Date [dd-mm] of the file that you want to update: ");
    gets(date);
    FILE *fp1, *fp2;
    int sn;
    fp1 = fopen(date, "r");
    fp2 = fopen("copy.txt", "a+");
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
        rename("copy.txt", date);
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
            if (fch == 'y')
            {
                fclose(fp1);
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
   
    FILE *fp1,*fp2,*fp;
    char topic[20];
    fp1=fopen("notes.txt","rb");
    fp2=fopen("copy.txt","ab+");
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
    fflush(stdin);
    while(fread(&n,sizeof(n),1,fp1)==1){
        if(strcmp(topic,n.topic)!=0){
               fwrite(&n,sizeof(n),1,fp2);
        }
        
    }
    fclose(fp1);
    fclose(fp2);
    remove("notes.txt");
    rename("copy.txt","notes.txt");
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
    FILE *fp;
    char date[12];
    char text[500];
    char text2[500];
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
    fclose(fp);
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

///****** void delete_journal() function finished and finally end of program too*****************************
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

void logo(){


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
   printf("\n\n\t\t\t\t\t\t  Getting ready for you:\t\n");
        Sleep(100);
        Sleep(100);
   printf("        \t\t\t\t\t");
    for(int j=0 ; j<=25; j++){
        printf("%c",b);
        Sleep(110);
    }


                                   
}