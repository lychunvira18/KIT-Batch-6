#include <stdio.h>
int load_menu();
void input();
void show();
void again();
void cleardb();
char name[50];
int height=0;
char data[10000];

int main(){
  load_menu();
  return 0;
}

int load_menu() {
  int choice;
  printf("--------------------------------------------------------------------------------------\n           1.Input\n           2.Show\n           3.Clear DB\n           4.Exit\n");
  printf("Input --> ");
  scanf("%d",&choice);
  fflush(stdin);
  if (choice == 1) {
    input();
  }else if (choice == 2) {
    show();
  }else if (choice ==3){
    cleardb();
  }else{
    return 0;
  }
}

void input() {
  FILE *heightdb = fopen("heightdb.txt","a");
  if (heightdb==NULL){
    printf("Sorry, we can't find the file!!\nPlease Try Again later!!");
  }else {
    printf("Please enter your name:\n");
    printf("Input --> ");
    scanf("%[^\n]*c",name);
    fflush(stdin);
    printf("Please enter your height(cm)(valid:0-500):\n");
    do {
    printf("Input --> ");
    scanf("%d",&height);
    fflush(stdin);
  }while (height<=0&&height>500);
    printf("Info Saved Successfully!!");
    fprintf(heightdb,"\nName: %s             Height: %dcm",name,height);
  }
  fclose(heightdb);
  again();
}
void show () {
  FILE *heightdb = fopen("heightdb.txt","r");
  if (heightdb==NULL){
    printf("Sorry, we can't find the file!!\nPlease Try Again later!!");
  }else {
    printf("-------------------------------------------------------------------\nDatabase: \n\t");
    while(fgets(data,10000,heightdb)!=NULL){
      printf("%s",data );
    }
    printf("\n-------------------------------------------------------------------");
    fclose(heightdb);
    again();
  }
}

void again(){
  int choice;
  printf("\nWould you like to go back to the menu???\n\t1.Yes\t2.No");
  printf("\nInput --> ");
  scanf("%d",&choice);
  fflush(stdin);
  if (choice==1) {
    load_menu();
  }
}
void cleardb() {
  FILE *heightdb = fopen("heightdb.txt","w");
  if(remove("heightdb.txt")){
    printf("Database Cleared!!\n");
  }else{
    printf("It seem like we have some problem to perform the task!!!\n");
  }
  load_menu();
}
