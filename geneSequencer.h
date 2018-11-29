#pragma once

#include <iostream>
#include "chromosome.h"

using namespace std;

class geneSequencer
{
  public:
	chromosome CreateChromosome();

	void SequenceChromosome(chromosome c);

	chromosome ImportChromosome(const string &fileName = "chromosome.h");

	void ExportChromosome(chromosome c, const string &fileName = "chromosome.h");

	chromosome DoMeiosis(chromosome x, chromosome y);

	void PowerOnSelfTest();

};
