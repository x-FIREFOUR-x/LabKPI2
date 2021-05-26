#include "SolutionPrinterRightTriangle.h"
#include <iostream>
#include <vector>

using namespace std;

void SolutionPrinterRightTriangle::printFirstSolution(vector<float> results)
{
	cout<<"Angle A=arcsin(BC/AB)*180.0/PI="<<results[0]<<endl;
	cout<<"Angle B=90-A="<<results[1]<<endl;
	cout<<"Cathet AC=sqrt(AB^2-BC^2)="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printSecondSolution(vector<float> results)
{
	cout<<"Hypothenuse AB=sqrt(AC^2+BC^2)="<<results[0]<<endl;
	cout<<"Angle A=arcsin(BC/AB)*180.0/PI="<<results[1]<<endl;
	cout<<"Angle B=90-A="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printThirdSolution(std::vector<float> results)
{
	cout<<"Hypothenuse AC=AB/cos(A)="<<results[0]<<endl;
	cout<<"Cathet BC=AB*tang(A)="<<results[1]<<endl;
	cout<<"Angle C=90-A="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printFourthSolution(std::vector<float> results)
{
	cout<<"Hypothenuse AC="<<results[0]<<endl;
	cout<<"Angle A=90-C="<<results[1]<<endl;
	cout<<"Cathet BC=AB*tang(a)="<<results[2]<<endl;
}

void SolutionPrinterRightTriangle::printFifthSolution(std::vector<float> results)
{
	cout<<"Cathet AC=AB*cos(A)="<<results[0]<<endl;
	cout<<"Cathet BC=AB*sin(A)="<<results[1]<<endl;
	cout<<"Angle B=90-A="<<results[2]<<endl;
}
