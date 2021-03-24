//
//  controlador.c
//
//
//  Created by Ramón Orraca on 19/03/2020.
//

#include "defControlador.h"

/*
 *
 * The function openFile opens the file the user entered and returns it's FILE*.
 *
 * @params
 *      fileName (string):
            This is the name of the file we're going to use.

 * @returns
        fp (FILE*)
            This is the file pointer of the file we just opened.
*/
FILE *openFile(char *fileName){
   FILE *fp;

   fp = fopen(fileName, "r");
   if(fp == NULL){
      printf("\n\tArchivo no disponible.");
      exit(1);
   }

return(fp);
}

/*
 *
 * The function verifyX verifies that the file's format is consistant in it's number of columns.
 *
 * @params
 *      i (int):
            This is the iteration we're in right now.
        xTemp (int):
            This is the number of columns in the current iteration
        xCurrent (int):
            When i=0 it takes the value of xTemp from that iteration an compares that number on the following iterations, it's the variable browser.x.

 * @returns
        fpConvert (FILE*)
            This is the file pointer of the new file we created.
*/
int verifyX(int i, int xTemp, int xCurrent){

   if(i==0) xCurrent = xTemp;
   if(xCurrent != xTemp){
      printf("\n\n\tInconsistent file, columns are not consistent.\n");
      exit(1);
   }

return(xCurrent);
}

/*
 *
 * The function request char uses asks the user to press [ENTER].
 *

 * @returns
        void
*/
void requestChar(){
   printf("\n\n\tPress [ENTER] to continue.");
   getchar();
   system("clear");

return;
}
