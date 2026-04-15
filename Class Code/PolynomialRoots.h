#pragma once
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

class CPolyNomial
{
private:
    double *m_fCoeffcients;
    double m_fFunctionValue;
    double m_fFunctionDervValue;
    double m_fXInitial;
    double m_fTolerance;
    unsigned int m_nIterationCount;
    unsigned int m_nPolyOrder;

public:
    CPolyNomial();
    void CreatePolynomial();
    void SetInitialValue();
    void SetPolyNomialCoeffs();
    double ComputeFunct_DervValue();
    void OnEvaluateRoot();
    double OnFunctionValue();
    double OnFunctionDervValue();
    double OnTolerance(double fTolerance = 0.0001);

    void OnDisplayPolynomial();
    void OnDisplayRoot();
};