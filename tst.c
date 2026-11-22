#include <stdio.h>


#define RESET "\033[0;0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[0;33m"

int 
main (){
    for (int row =0 ; row<=10 ; row++){
    
        for (int col=0 ; col<=10 ; col++){
            if(!row && !col){
                printf("%4c",' ');
                continue;
            }
            if (!row)
                printf(RED "%4d" RESET,col);
            else if (!col)
                printf(GREEN "%4d" RESET,row);
            else 
                printf(YELLOW "%4d" RESET, row*col);
        }
        puts("");
    }
    return 0;
}
