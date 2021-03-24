//
//  defMotor.h
//
//
//  Created by Ramón Orraca on 22/03/2020.
//

#ifndef defMotor_h
#define defMotor_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct browser{
   int x, y;
   size_t used;
   float *matrix;
}browserFloatMatrix;

/* Function prototypes. */

void menu();
/*
 *
 * The function menu gives the user action posibilities.
 *

 * @returns
        void
            This function has no return.
*/

int verifyX(int i, int xTemp, int currentX);
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

void appendToMatrix(char *number, browserFloatMatrix browser, int xCurrent);
/*
 *
 * The function appendToMatrix sends the information we read from the file to a matrix.
 *
 * @params
 *      number (string):
            This is the number we want to add to the matrix as a string.
        browser (browserFloatMatrix):
            This is the first memory location of our matrix.
        xCurrent (int):
            This is the column we're in right now.

 * @returns
        void
*/

#endif
