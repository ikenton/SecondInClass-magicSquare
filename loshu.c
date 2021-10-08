#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>



int main(){
    int loShu[3][3] /*= {{4,9,2} , {3,5,7}, {8,1,6}}*/;

    srand(time(0));
    int squares =0;
    //loads stuff onto the array
    
    for(int i =0; i<3; i++){
        for(int j = 0;j < 3; j++){
            loShu[i][j] =  rand() % 8 +1;
            
            //printf("%d\n", loShu[i][j]);
        }
    }
    
    for(int i =0; i<3; i++){
        for(int j = 0;j < 3; j++){
            
            if(loShu[i][j] == loShu[0][0] && i!= 0 || j!= 0){
                loShu[i][j]=rand() % 8 +1;
                squares++;
            }  
            
            //printf("%d\n", loShu[i][j]);
        }
    }

    //check for duplicates
    
    printf("Number of squares generated %d\n", squares);
   
    //count columns, rows and diagonals.
    int column;
    if(loShu[0][0]+loShu[0][1]+loShu[0][2] == 15 && loShu[1][0]+loShu[1][1]+loShu[1][2] == 15 && loShu[2][0]+loShu[2][1]+loShu[2][2] == 15  && loShu[0][0]+loShu[1][0]+loShu[2][0]==15 
    && loShu[0][1]+loShu[1][1]+loShu[2][1] == 15 && loShu[0][2]+loShu[1][2]+loShu[2][2] == 15 && loShu[0][0] + loShu[1][1]+ loShu[2][2]){
        printf("the square is a magic square: \n");
        for(int i = 0; i < 3; i++){
            printf("[ ");
            for(int j =0; j <3; j++){
                printf("%d ", loShu[i][j]);
            }
            printf("]\n");
        }
        
    }else printf("this is not a magic square\n");
    for(int i = 0; i < 3; i++){
            printf("[ ");
            for(int j =0; j <3; j++){
                printf("%d ", loShu[i][j]);
            }
            printf("]\n");
        }

}