#ifndef YEAR_H
#define YEAR_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include "month.h"

using namespace std;

class year{
public:
	int this_year;
	vector<month> month_vec;
};

#endif