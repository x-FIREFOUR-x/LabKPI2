#include "SolutionPrinterTriangle.h"
#include <iostream>
#include <vector>
using namespace std;

void SolutionPrinterTriangle::printFirstSolution(std::vector<float> results)
{
	cout << "Angle B = arccos((AB^2 + BC^2 - AC^2)/(2*AB*BC)) = " << results[0] << endl;
	cout << "Angle C = arccos((AC^2 + BC^2 - AB^2)/(2*AC*BC)) = " << results[1] << endl;
	cout << "Angle A = 180 - B - C = " << results[2] << endl;
}

void SolutionPrinterTriangle::printSecondSolution(std::vector<float> results)
{
	cout << "Side AC = sqrt(AB^2 + BC^2 - 2*AB*BC * cos(B * PI/180)) = " << results[0] << endl;
	cout << "Angle C = arccos((AC^2 + BC^2 - AB^2)/(2*AC*BC)) = " << results[1] << endl;
	cout << "Angle A = 180 - B - C = " << results[2] << endl;
}

void SolutionPrinterTriangle::printThirdSolution(std::vector<float> results)
{
	cout << "Angle B = 180 - B - A = " << results[0] << endl;
	cout << "Side AC = AB * sin(A * PI / 180) / sin (C * PI / 180) = " << results[1] << endl;
	cout << "Side BC = AB * sin(A * PI / 180) / sin(C * PI / 180) = " << results[2] << endl;
}
