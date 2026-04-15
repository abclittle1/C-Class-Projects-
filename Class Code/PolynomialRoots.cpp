#include "PolynomialRoots.h"

CPolyNomial::CPolyNomial()
{
    this->m_fCoeffcients = nullptr;
    this->m_fFunctionValue = { 0.0f };
    this->m_fFunctionDervValue = { 0.0f };
    this->m_fXInitial = { 0.0f };
    this->m_nIterationCount = { 0 };
    this->m_nPolyOrder = { 0 };
    this->m_fTolerance = 0.0001;
}

void CPolyNomial::CreatePolynomial()
{
    std::cout << "Enter the order of the Polyomial: ";
    std::cin >> this->m_nPolyOrder;

   
}

void CPolyNomial::SetPolyNomialCoeffs()
{
    for (size_t i{}; i < this->m_nPolyOrder + 1; i++)
    {
        std::cout << "Enter Coefficient a" << "(" << i << "): ";
        std::cin >> this->m_fCoeffcients[i];
    }
}

void CPolyNomial::SetInitialValue()
{
    std::cout << "Enter the Initial Value: ";
    std::cin >> this->m_fXInitial; 
}

double CPolyNomial::OnFunctionValue()
{
    return this->m_fFunctionValue;
}

double CPolyNomial::OnFunctionDervValue()
{
    return this->m_fFunctionDervValue;
}

double CPolyNomial::OnTolerance(double fTolerance)
{
    this->m_fTolerance = fTolerance;
    return this->m_fTolerance;
}

double CPolyNomial::ComputeFunct_DervValue()
{
    
}

void CPolyNomial::OnEvaluateRoot()
{
    this->m_fXInitial = this->m_fXInitial - (this->m_fFunctionValue / this->m_fFunctionDervValue);
    this->m_nIterationCount++;
}

void CPolyNomial::OnDisplayPolynomial()
{
    std::cout << "Polynomial" << std::endl;
    for (unsigned int i = this->m_nPolyOrder; i>0; i--)
    {
        std::cout << std::showpos << this->m_fCoeffcients[i] << "X^" << i;
    }
    std::cout << std::showpos << this->m_fCoeffcients[0] << std::endl;
}

void CPolyNomial::OnDisplayRoot()
{
    std::cout << this->m_nIterationCount << '\t' << this->m_fXInitial << '\t' << this->m_fFunctionValue << std::endl;
}