#pragma once
#pragma "Profile.h"
class WorkWithTests
{
	int ID;
	bool isControlTest;
	int count;
public:
	WorkWithTests(int ID, bool control) {
		this->ID = ID;
		isControlTest = control;
	}
	void rightTriangleFirst();
	void rightTriangleSecond();
	void rightTriangleThird();
	void rightTriangleFourth();
	void rightTriangleFifth();
	void arbitraryTriangleFirst();
	void arbitraryTriangleSecond();
	void arbitraryTriangleThird();
	void controlTest();
	void setIsControlTest(bool control) { isControlTest = control; }
};