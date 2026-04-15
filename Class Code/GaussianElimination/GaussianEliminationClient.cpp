#include "GaussianElimination.h"

int main()
{
	int nNumberOfVar; //Understand why it is not size_t later 
	std::cout<<"Enter number of unknowns: ";
	std::cin>>nNumberOfVar;

	CLinearEquations leSystem(nNumberOfVar);
	leSystem.InputEquations();
	leSystem.DisplayEquations();
	//leSystem.OnTriangulate();
	//leSystem.DisplayEquations(); //This one will display the upper triangluar matrix 
	//std::cout<<"Number of floating point operations before Back Substitution"<<std::endl;
	//std::cout<<"Determinant of the Coefficient matrix: "<<leSystem.OnComputeDeterminant()<<std::endl;
	//leSystem.OnDisplayFlops();
	//leSystem.OnBackSubtitute();
	//std::cout<<"Number of floating point operations after Back Substitution"<<std::endl;
	//leSystem.OnDisplayFlops();

	leSystem.OnFormIdentity();
	leSystem.OnComputeInverse();
	std::cout<<"Number of floating point operations after Inverse"<<std::endl;
	leSystem.OnDisplayFlops();

	leSystem.OnComputeSolution();
	std::cout<<"Number of floating point operations after Solution"<<std::endl;
	leSystem.OnDisplayFlops();
	return 0;
}
