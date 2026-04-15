#include "PolynomialRoots.h"

int main()
{
    bool bContinue;
    CPolyNomial Equation;
    do 
    {
        Equation.CreatePolynomial();
        Equation.SetPolyNomialCoeffs();
        Equation.OnDisplayPolynomial();

        std::cout << "Tolerance = " << Equation.OnTolerance() << std::endl;
        Equation.SetInitialValue();

        while (fabs(Equation.ComputeFunct_DervValue()) > Equation.OnTolerance())
        {
            Equation.OnEvaluateRoot();
            Equation.OnDisplayRoot();
        }
        std::cout << "Press 1 to continue or 0 to exit ";
        std::cin >> bContinue;
    } while (bContinue);
    return 0;
}