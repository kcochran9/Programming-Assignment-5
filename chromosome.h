#pragma once

#include <iostream>
#include "gene.h"
#include <vector>

using namespace std;

class chromosome
{

  public:
	chromosome();

	void AddGene(gene g);

	void AnalyzeGenotype();

	gene FindGene(string n);

	chromosome operator+(chromosome rhs);

  private:
	vector<gene> genes;
};