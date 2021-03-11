#include <stdio.h>
#include<string.h>
#include<cmd_line.h>


 void funtion_passer(cmd_line * arr_cmd,char const * s){
        int i=0;
        if(strlen(s)){
            while(arr_cmd[i].cmd!=0){
                if (strcmp(arr_cmd[i].cmd,s)== 0){
                    arr_cmd[i].func(s);
                    printf("%s\n",arr_cmd[i].note);
                    break;
                }
                i++;
            }
        }
    }

