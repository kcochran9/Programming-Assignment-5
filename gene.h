#pragma once

#include <iostream>
#include "allele.h"

using namespace std;

class gene
{
	private:
		string name;
		string traitType;
		allele alleleA, alleleB;

	public:
		gene(allele&, allele&);
		
		void OutputToFile(ofstream& of);
};