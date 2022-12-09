#pragma once
#include"worker.h"
#include<cmath>
class salary : public Series
{
public:
	salary(int hours, int sh) : Series(hours, sh) {}
	int calculatesalary(int n) override;
	int check(int n) override;
};

