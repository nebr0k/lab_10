#pragma once
class Series abstract
{
protected:
	int hours;
	int sh;
public:
	Series(int hours, int sh);
	void sethours(int hours);
	void setsh(int sh);
	int gethours();
	int getsh();

	virtual int calculatesalary(int n) abstract;
	virtual int check(int n) abstract;
};


