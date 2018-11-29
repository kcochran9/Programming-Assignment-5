#pragma once

#include <iostream>

using namespace std;

class allele
{
  private:
	string nucleotideSequence;
	string varientName;
	string varientType;

  public:
	allele(string v, string t, string s);
	allele();
};