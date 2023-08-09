#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void add_todo();
void add_journal();
void add_notes();
// Write function
void write()
{
	int choice;
	fflush(stdin);
    system("cls");
	printf("Write Function Is Activated\n\n");
    Sleep(100);
    printf("	  __  \n");
    Sleep(100);
    printf(" (`/\\  \n");
    Sleep(100);
    printf(" `=\\/\\ __...--~~~~~-._   _.-~~~~~--...__  \n");
    Sleep(100);
    printf("  `=\\/\\               \\ /               \\  \n");
    Sleep(100);
    printf("   `=\\/                V                 \\  \n");
    Sleep(100);
    printf("   //_\\___--~~~~~~-._  |  _.-~~~~~~--...__\\  \n");
    Sleep(100);
    printf("  //  ) (..----~~~~._\\ | /_.~~~~----.....__\\  \n");
    Sleep(100);
    printf(" ===( INK )==========\\|//====================  \n");
    Sleep(100);
    printf("_____\\___/___________`---`____________________________________________  \n\n\n");
    Sleep(100);
    printf("\n\n**********   Welcome To The Write Menu   **********\n\n");
    printf("\n1: Write Todo List\n2: Write journal\n3: Go to main menu\n\nSelect An Option : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            add_todo();
            break;
        case 2:
            add_journal();
            break;
        case 3:
        printf("going to menu");
            // menu();
            break;
        default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        Sleep(1000); 
        printf("Program is in write menu now\n");
        // menu();
        break;
 
    }
    return 0;
}

void add_todo()
{
    fflush(stdin);
    system("cls");
	printf("Writing TODO Function Is Activated\n\n\n");
    Sleep(100);
	printf("\t\(\\\n");
    Sleep(100);
	printf("\t\\'\\\n");
    Sleep(100);
	printf("\t \\'\\     __________ \n");
    Sleep(100);
	printf("\t / '|   \()_________)\n");
    Sleep(100);
	printf("\t \\ '/    \\ ~~~~~~~~ \\\n");
    Sleep(100);
	printf("\t   \\       \\ ~~~~~~   \\\n");	
    Sleep(100);
	printf("\t   ==).      \\__________\\\n");	
    Sleep(100);
	printf("\t \(__)       \()__________)\n\n\n");
    Sleep(100);
    struct task_list
        {
            int sn;
            char task[200];
        };
    struct task_list tl;
    char choice='y';
    char date[12];
    printf("Today\'s Date [dd-mm]:");
    gets(date);
    FILE *fp;
    fp=fopen(date,"a+");
    while(choice=='y'){
        printf("Enter the sn number:");
        scanf("%d",&tl.sn);
        fflush(stdin);
        printf("Enter the task %d",tl.sn);
        fgets(tl.task, 200, stdin);
        fwrite(&tl,sizeof(tl),1,fp);
        printf("do you want to add new record?(y/n)\n");
        scanf("%c",&choice);
    }
    fclose(fp);

}


void add_journal()
{ 
    fflush(stdin);
    system("cls");
	printf("Writing Journal Function Is Activated\n\n\n");
    Sleep(100);
	printf("\t\(\\\n");
    Sleep(100);
	printf("\t\\'\\\n");
    Sleep(100);
	printf("\t \\'\\     __________ \n");
    Sleep(100);
	printf("\t / '|   \()_________)\n");
    Sleep(100);
	printf("\t \\ '/    \\ ~~~~~~~~ \\\n");
    Sleep(100);
	printf("\t   \\       \\ ~~~~~~   \\\n");	
    Sleep(100);
	printf("\t   ==).      \\__________\\\n");	
    Sleep(100);
	printf("\t \(__)       \()__________)\n\n\n");
    Sleep(100);
    time_t ctime;
	struct tm*timeinfo;
	time(&ctime);
	timeinfo=localtime (&ctime);
	printf("\nLocal Date And Time: %s\n",asctime(timeinfo));
	fflush(stdin);


    //journal writing
    FILE *fp;
    char date[12];
    char text[500];
    printf("Today\'s Date [dd-mm-yyyy]:");
    gets(date);
    fp=fopen(date,"a");
    fflush(stdin);
    printf("\nStart writing today\'s journal [%s]\n:",date);
    fgets(text, 500, stdin);
    printf("Written Content:%s\n",text);
    fprintf(fp,"%s\n%s",asctime(timeinfo),text);
    fclose(fp);
    
}

void add_notes(){
      time_t ctime;        // variable declaration for current time
    struct tm *timeinfo; // storing diff variable of time into struct throug timeinfo pointer
    time(&ctime);
    timeinfo = localtime(&ctime);
    printf("\nLocal Date And Time: %s\n", asctime(timeinfo));
       //journal notes
    FILE *fp;
    struct notes{
    char time
    char date[12];
    char text[500];
    }
    struct notes n;

    printf("Today\'s Date [dd-mm-yyyy]:");
    gets(n.date);
    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%s_notes",n.date)
    fp=fopen(buffer,"a");
    fflush(stdin);
    printf("\nStart writing today\'s journal [%s]\n:",n.date);
    fgets(text, 500, stdin);
    printf("Written Content:%s\n",text);
    fprintf(fp,"%s\n%s",asctime(timeinfo),text);
    fclose(fp);

}
void add_notes(){
      time_t ctime;        // variable declaration for current time
    struct tm *timeinfo; // storing diff variable of time into struct throug timeinfo pointer
    time(&ctime);
    timeinfo = localtime(&ctime);
    printf("\nLocal Date And Time: %s\n", asctime(timeinfo));
       //journal notes
    struct notes{
    char time[10];
    char topic[12];
    char text[500];
    };
    struct notes n;
    
     char choice='y';
    char date[12];
    printf("Today\'s Date [dd-mm]:");
    gets(date);
    FILE *fp;

    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%s_notes",date);
    
    fp=fopen(buffer,"ab");
    fflush(stdin);
     while(choice=='y'){
        fflush(stdin);
         printf("Enter the topic number:");
    fgets(n.topic, 20, stdin);
        fflush(stdin);
    printf("\nStart writing your thought\n:");
    fgets(n.text, 500, stdin);
    printf("Written Content:%s\n",n.text);
    int hour=timeinfo->tm_hour;
    int min=timeinfo->tm_min;
    int sec=timeinfo->tm_sec;
    char time[20];
    snprintf(time,sizeof(time),"%d-%d-%d",hour, min, sec);
    printf("%s\n",time);
    
    sscanf(time,"%s",n.time);
    fwrite(&n,sizeof(n),1,fp);
        printf("do you want to add new record?(y/n)\n");
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
