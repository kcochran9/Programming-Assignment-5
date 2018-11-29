
#include "chromosome.h"
#include <cassert>

void chromosome::AddGene(gene g){
	genes.push_back(g);
}

void OutputToFile(ofstream &ofs);  

chromosome testChromosome();
	assert(testChromosome.SetOutput() == "outputTest"); 