#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
void add_todo();
void add_journal();
void add_notes();
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