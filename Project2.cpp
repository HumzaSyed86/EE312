// matrix-multiplication <Project2.cpp>
// EE 312 Project 2 submission by
// Humza Syed
// hms2729
// Slip days used: <0>
// Spring 2021



#include <stdio.h>
#include <stdint.h>
#include "MatrixMultiply.h"

void multiplyMatrices(
        double a[], //
        const uint32_t a_rows,
        const uint32_t a_cols,
        double b[],
        const uint32_t b_cols,
        double c[]) { // use as result
    // https://en.wikipedia.org/wiki/Row-_and_column-major_order



      for(int j = 0; j<a_rows*b_cols ; j++){ // M * K
          c[j] = 0; // clears c
      }



for(int i = 0;i<a_rows;i++){ // 0-M, # of rows A  I
    for(int j = 0;j<b_cols;j++){ // 0-K, # of in col bB, J
        for(int k = 0;k<a_cols;k++){ // 0-N, # of col a    , K

            c[i * b_cols + j] += a[i * a_cols + k] * b[k * b_cols + j]; // why does it be k not j.

            // c is M*K a is M*N b is N*K

        }
    }
}


}

double** multiplyMatricesPtr(
        double** a,
        const uint32_t a_rows,
        const uint32_t a_cols,
        double** b,
        const uint32_t b_cols) {

//malloc
//double** c = (double**)malloc(sizeof(double))

// code seems the same you can change and do stuff.
for(int x = 0; x<b_cols;x++){
    for(int y = 0; y<a_cols; y++){

    }
}


    //return c;
    return NULL;
}

// https://en.wikipedia.org/wiki/Transpose
double** transposeMatrix(
        double** a,
        const uint32_t a_rows,
        const uint32_t a_cols) {
//malloc

    return NULL;
}
