//
//  defVista.h
//
//
//  Created by Ramón Orraca on 17/03/2021.
//

#ifndef defVista_h
#define defVista_h

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "defMotor.h"

/* Function prototypes. */

FILE *openFile(char *fileName);
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

browserFloatMatrix readCSV(FILE *fp);
/*
 *
 * The function convertCSV reads the .csv file the user entered and converts it to a .txt, it returns the FILE* of the created file.
 *
 * @params
 *      fp (FILE*):
            This is the file pointer of the file we're reading.

 * @returns
        browser (browserFloatMatrix)
            This is the browser with the array's information.
*/

void printMatrix(browserFloatMatrix browser);
/*
 *
 * The function printMatrix prints the content of our matrix.
 *
 * @params
        browser (browserFloatMatrix):
            This is the browser with our array's information.

 * @returns
        void
*/

void requestChar();
/*
 *
 * The function request char uses asks the user to press [ENTER].
 *

 * @returns
        void
*/

#endif

