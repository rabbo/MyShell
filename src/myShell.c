//My shell
//this is only a test of a shell.
//The license is the GPLv3

#include <stdio.h>
#include <string.h>

const int TRUE = 1;
const int FALSE = 0;

char user[35];
char client[35];
char dir[25];

char eingabe[55];

int main()
{
        
        int end = FALSE;
        
        config("peter","eragon","home");
        
        printf("Welcome at %s\n", dir);
        while(end == FALSE){
                char ein[55];
                promt();
                scanf("%s",ein);
		strcpy(eingabe, ein);
		if(strcmp(eingabe,"EXIT")==0) end=TRUE;
		else if(strcmp(eingabe,"CONFIG")==0) configIn();
		else printf("You write %s\n",eingabe);
        }
        
}

int promt(){
        printf("%s@%s:%s ", user, client, dir);
}

int config(char puser[], char pclient[], char pdir[]){
        strcpy(user, puser);
        strcpy(client, pclient);
        strcpy(dir, pdir);
}

int configIn(){
  printf("Welcome at the config\n");
  
}
