
#include "gene.h"
#include <fstream>
#include <cassert>
 
gene::gene(allele&  x, allele& y){
	this->alleleA =x;
	this->alleleB =y;
}

void gene::OutputToFile(ofstream& of){
	of << name << ",";
}

gene testGene ("nameTest", "traitTest", "alleleATest", "alleleBTest");
	assert(testGene.GetName() == "nameTest" );
	assert(testGene.GetTraitType() == "traitTypeTest");
	assert(testGene.SetAlleleA() == "alleleATest");
	assert(testGene.SetAlleleB() == "alleleBTest");