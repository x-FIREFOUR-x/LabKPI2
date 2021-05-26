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
/*
void SolutionPrinterRightTriangle::printSecondSolution(vector<float> taskData)
{
	cout<<"A=arcsin("<<taskData[4]<<"/"<<taskData[3]<<")*180.0/PI="<<taskData[0]<<endl;
	cout<<"B=90-A"<<taskData[0]<<"="<<taskData[1]<<endl;
	cout<<"AC=sqrt("<<taskData[3]<<"^2-"<<taskData[4]<<"^2)="<<taskData[2]<<endl;
}*/
