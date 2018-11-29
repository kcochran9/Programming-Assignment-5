
#include "allele.h"
#include <string>
#include <cassert>

allele newAllele;

allele::allele(string v, string t, string s){
	this-> varientName = v;
	this-> varientType = t;
	this-> nucleotideSequence = s;
}

allele testAllele1("variationTest", "typeTest", "sequenceTest");
	assert(testAllele1.GetNucleotide() == "sequenceTest");
	assert(testAllele1.GetVariation() == "variationTest");
    assert(testAllele1.GetExpressionType() == "typeTest");


allele testAllele2("variationTest", "typeTest", "sequenceTest");
    assert(testAllele2.GetNucleotide() == "sequenceTest");
    assert(testAllele2.GetVariation() == "variationTest");
    assert(testAllele2.GetExpressionType() == "typeTest");


