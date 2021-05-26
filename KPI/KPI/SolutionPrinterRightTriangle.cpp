#include "SolutionPrinterRightTriangle.h"
#include <iostream>
#include <vector>

using namespace std;

void SolutionPrinterRightTriangle::printFirstSolution(vector<float> results)
{
	cout<<"A=arcsin(BC/AB)*180.0/PI="<<results[0]<<endl;
	cout<<"B=90-A="<<results[1]<<endl;
	cout<<"AC=sqrt(AB^2-BC^2)="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printSecondSolution(vector<float> results)
{
	cout<<"AB=sqrt(AC^2+BC^2)="<<results[0]<<endl;
	cout<<"A=asin(BC/AB)*180.0/PI="<<results[1]<<endl;
	cout<<"B=90-A="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printThirdSolution(std::vector<float> results)
{
	cout<<"AC=AB/cos(A)="<<results[0]<<endl;
	cout<<"BC=AB*tang(A)="<<results[1]<<endl;
	cout<<"C=90-A="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printFourthSolution(std::vector<float> results)
{
	cout<<"AC="<<results[0]<<endl;
	cout<<"A=90-C="<<results[1]<<endl;
	cout<<"BC=AB*tang(a)="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printFifthSolution(std::vector<float> results)
{
	cout<<"AC=AB*cos(A)="<<results[0]<<endl;
	cout<<"BC=AB*sin(A)="<<results[1]<<endl;
	cout<<"B=90-A="<<results[2]<<endl;
}
