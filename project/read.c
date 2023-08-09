#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void display_todo();
void display_journal();
int  main() {
    fflush(stdin);
    system("cls");
	printf("Read Function Is Activated\n\n");
    Sleep(100);
    printf("      _.--._  _.--._\"  \n");
    Sleep(100);
    printf(",-=.-\":;:;:;':;:;:;\"-._   \n");
    Sleep(100);
    printf("\\\\:;:;:;:;:;\\:;:;:;:;:;\\  \n");
    Sleep(100);
    printf(" \\\\:;:;:;:;:;\\:;:;:;:;:;\\  \n");
    Sleep(100);
    printf("  \\\\:;:;:;:;:;\\:;:;:;:;:;\\  \n");
    Sleep(100);
    printf("   \\\\:;:;:;:;:;\\:;::;:;:;:\\  \n");
    Sleep(100);
    printf("    \\\\;:;::;:;:;\\:;:;:;::;:\\  \n");
    Sleep(100);
    printf("     \\\\;;:;:_:--:\\:_:--:_;:;\\  \n");    
    Sleep(100);
    printf("      \\\\_.-\"      :      \"-._\\  \n");
    Sleep(100);
    printf("       \\`_..--""--.;.--""--.._=>  \n");
    Sleep(100);
    int choice;
     printf("Available functions are:\n");
      printf("\n1: Read Todo List\n2: Read journal\n3: Go to main menu\n\nSelect An Option : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            display_todo();
            break;
        case 2:
            // printf("display journal");
            display_journal();
            break;
        case 3:
        printf("going to menu");
            // menu();
            break;
        default:
        printf("Invalid input \nPlease recheck your input.\n");
        printf("You are redirecting to the main menu.....\n");
        Sleep(1000); 
        printf("Program is in reading menu now\n");
        // menu();
        break;
 
    }
    return 0;
    
}



void display_todo(){
    fflush(stdin);
     system("cls");
	printf("Reading Todo list Function Is Activated\n\n");

    Sleep(100);
    printf("      ______ ______     \n");
    Sleep(100);
    printf("    _/      Y      \\_   \n");
    Sleep(100);
    printf("   // ~~ ~~ | ~~ ~  \\   \n");
    Sleep(100);
    printf("  // ~ ~ ~~ | ~~~ ~~ \\   \n");      
    Sleep(100);
    printf(" //________.|.________\\   \n");     
    Sleep(100);
    printf("`----------`-'----------'   \n\n\n");
    Sleep(100);

    struct task_list
{
    int sn;
    char task[200];
};
       struct task_list temp;
    struct task_list arr[30];

    int i, j,k=0;
    FILE *fp;
      char date[12];
    fflush(stdin);
    printf("Check task for Date [dd-mm]:");
    gets(date);
    fp=fopen(date,"r");
    printf("\nTask for %s are:\n\n",date);
    if(fp==NULL){
        printf("Error: Can't open file");
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
	printf("Continue Reading ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&ch);

	switch (ch){
	
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



void display_journal(){
    	fflush(stdin);
        system("cls");
	printf("Reading journal Function Is Activated\n\n\n");
    Sleep(100);
	printf("                 .--.   _\n");
    Sleep(100);
	printf("             .---|__| .\(\(\\-.\n");
    Sleep(100);
	printf("          .--|===|--|/    , \\\n");
    Sleep(100);
	printf("          |  |===|  |\\      y\n");			
    Sleep(100);
	printf("          |  |   |  | `.__,'\n");
    Sleep(100);
	printf("          |  |   |  | /  \\\\\\\n");
    Sleep(100);
	printf("          |  |   |  |/|  | \\`----.\n");
    Sleep(100);
	printf("          |  |   |  ||\\  \\  |___.'_\n");
    Sleep(100);
	printf("         _|  |   |__||,\\  \\-+-._.' )_\n");				
    Sleep(100);
	printf("        / |  |===|--|\\  \\  \\      /  \\\n");
    Sleep(100);
	printf("       /  `--^---'--' `--`-'---^-'    \\\n");	
    Sleep(100);
	printf("      '================================`\n\n");		
    Sleep(100);
    

    FILE *fp;
    char date[12];
    char text[500];
    char text2[500];
    printf("Journal's Date [dd-mm-yyyy]: ");
	gets(date);
	fp=fopen(date,"r");
	fflush(stdin);
    while(fgets(text, 500, fp)!=NULL){
        sscanf(text, "%[^\n]",text2);
        printf("%s",text);
    }
    fclose(fp);
	system("pause");
	int i;
	printf("Continue Reading ?\n\n1 :Yes\n2: No\nChoice : ");
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