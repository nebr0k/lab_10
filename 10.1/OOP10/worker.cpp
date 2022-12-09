#include "worker.h"

Series::Series(int hours, int sh)
{
	this->hours = hours;
	this->sh = sh;
}

void Series::sethours(int hours)
{
	this->hours = hours;
}

void Series::setsh(int sh)
{
	this->sh = sh;
}

int Series::gethours()
{
	return hours;
}

int Series::getsh()
{
	return sh;
}

