//My shell
//this is only a test of a shell.
//The license is the GPLv3

//This file contains the basic commands of the shell.

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

//Changing the actual directory
int changeDir(char pdirC[]){
  strcpy(dir,pdirC);
  printf("Dir was changed to %s \n",dir);
}
