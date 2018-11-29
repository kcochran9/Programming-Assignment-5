/*	Project:    Programming Assignment 5
	Name:       Katie Cochran
    Partner:    N/A
    Class:      CSC 1810 - Section 1
*/

#include <iostream>
#include <allele.h>
#include <chromosome.h>
#include <gene.h>
#include <geneSequencer.h>
#include <string>

using namespace std;

int getMenuChoice()
{
	int menuChoice = 0;

	cout << "MENU" << endl;
	cout << "1 – Create chromosome" << endl;
	cout << "2 – Analyze chromosome" << endl;
	cout << "3 – Output chromosome to file" << endl;
	cout << "4 – Input chromosome from file" << endl;
	cout << "5 – Combine chromosomes" << endl;
	cout << "6 – Exit" << endl;

	while (menuChoice != 1 && menuChoice != 2 && menuChoice != 3 && menuChoice != 4 && menuChoice != 5 && menuChoice != 6)
	{
		cout << "Please choose a menu item (1-6):" << endl;
		cin >> menuChoice;
	}

	cout << "User choice: " << menuChoice << endl;
	return menuChoice;
}

int main(int argc, char *argv[])
{

	geneSequencer sequencer;
    chromosome newChromosome;
    int curSelection = EXIT;

	while ((menuChoice = getMenuChoice()) != 6)
	{
		switch (menuChoice)
		{
			case CREATE:
				newChromosome = sequencer.createChromosome();

				string name;
        		string trait;
        		string variantType;
        		string nucleotideSequence;
        		string variantName;

        		cout << "What is the gene name?";
        		cin >> name;
        		cout << "What is the gene trait?";
        		cin >> trait;
        		cout << "What is allele 1 variant?";
        		cin >> variantName;
        		cout << "What is allele 1 Type (dominant/ recessive)?";
        		cin >> variantType;
        		cout << "What is allele 1 nucleotide sequence?";
        		cin >> nucleotideSequence;

        		allele alleleA(variantName, variantType, nucleotideSequence);

        		cout << "What is allele 2 variant?";
        		cin >> variantName;
        		cout << "What is allele 2 Type (dominant/recessive)?";
        		cin >> variantType;
        		cout << "What is allele 2 nucleotide sequence?";
        		cin >> nucleotideSequence;

        		allele alleleB(variantName, variantType, nucleotideSequence);
				break;

				bool variantType; 
				if (variantType = dominant){
					variantName = true;
					cout << "Expressed Allele: " << variantName; 
				else {
					variantName = false;
				}

			case ANALYZE:
				sequencer.SequenceChromosome();
				break;

			case OUTPUT:
				sequencer.ExportChromosome();
				break;

			case INPUT:
				sequencer.ImportChromosome();
				break;

			case EXIT: 
				sequencer.DoMeosis();
		}
		
	}

	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}