#pragma once
#include <iostream>
#include <string>

#define MAX_ROWS 10
#define MAX_COLS 10

bool OnContinue();
bool OnGetMatrixDimension(std::string name, int *nRowsTemp, int *nColsTemp);//Check if user selected size is less than the max
bool OnCheckDimensions(int nRowsTemp, int nColsTemp); //Check the dimensions for

bool OnCheckDimForAddition(int nRowsTemp_A, int nColsTemp_A, int nRowsTemp_B, int nColsTemp_B, int *pRowsC, int* pColsC); //Check inner matrix
bool OnCheckDimForMultiplication(int nRowsTemp_A, int nColsTemp_A, int nRowsTemp_B, int nColsTemp_B,int *pRowsC,int* pColsC); //Accesses the array using the address of the first element

void OnGetMatrix(std::string name,int Matrix[][MAX_COLS], int nRowsTemp, int nColsTemp);
void OnDisplayMatrix(std::string name,int Matrix[][MAX_COLS], int nRowsTemp, int nColsTemp);

void OnMatrixAddition(int MatrixTempA[][MAX_COLS], int nRowsTemp_A, int nColsTemp_A,
	int MatrixTempB[][MAX_COLS], 
	int MatrixTempC[][MAX_COLS]);

void OnMatrixMultiplication(int MatrixTempA[][MAX_COLS], int nRowsTemp_A, int nColsTemp_A,
	int MatrixTempB[][MAX_COLS], int nRowsTemp_B, int nColsTemp_B,
	int MatrixTempC[][MAX_COLS]);

