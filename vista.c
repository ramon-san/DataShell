//
//  vista.c
//
//
//  Created by Ramón Orraca on 17/03/2021.
//

#include "defVista.h"

/*
 *
 * The function menu gives the user action posibilities.
 *

 * @returns
        void
*/
void menu(){
   char option = '0';
   char file[25];
   FILE *fp;
   int verifier=0;
   browserFloatMatrix browser;

   while(option != 'E'){
//      system("clear");
      printf("\n\tPlease select one of the following options and click [Enter]: ");
      printf("\n\t  [S]elect file\n\t  [P]rint data\n\t  [E]xit\n -> ");
      scanf(" %c", &option);
      option = toupper(option);

      if(option == 'E'){
         printf("\n\tProgram terminated\n");
         if(verifier == 1) free(browser.matrix);
      }
      else if(option == 'S'){
         if(verifier == 0){
            printf("\n\tPlease enter the name of the file you'll transform (CSV with floats)\n -> ");
            scanf(" %s", file);
            fp = openFile(file);
            browser = readCSV(fp);
            verifier = 1;
         }
         else printf("\n\tThis demo is only capable of reading one file.");
      }
      else if(option == 'P'){
         if(verifier != 0){
            printMatrix(browser);
            requestChar();
	 }
         else{
	    printf("\n\tYou first have to enter a file.\n");
	    requestChar();
	 }
      }
   }

return;
}
