//MyShell - a fun shell-emulation

//Copyright (C) 2010 Rabben Ohmal

//This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.

//This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

//You should have received a copy of the GNU General Public License along with this program; if not, see <http://www.gnu.org/licenses/>.

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
		if(strcmp(eingabe,"exit")==0) end=TRUE;
		else if(strcmp(eingabe,"config")==0) configIn();
		else printf("You write %s\n",eingabe);
        }
        
}

int promt(){
        printf("%s@%s:%s ", user, client, dir);
}

//Config with params
int config(char puser[], char pclient[], char pdir[]){
        strcpy(user, puser);
        strcpy(client, pclient);
        strcpy(dir, pdir);
}

//Config with user-input
int configIn(){
  printf("Welcome at the config\n");
  printf("Please type in the new user:");
  scanf("%s",user);
  printf("Please type in the new client:");
  scanf("%s",client);
  printf("Please type in the new dir:");
  scanf("%s",dir);
  printf("New config was created.\n");
}

int changeDir(char pdirC[]){
  strcpy(dir,pdirC);
  printf("Dir was changed to %s \n",dir);
}
