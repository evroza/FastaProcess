#include "stdafx.h"
#include "Fasta.h"

using namespace std;

Fasta::Fasta(string filePath) : myfileName(filePath)
{
	string line;
	ifstream myReadFile;
	myReadFile.open(filePath); // File path example: 'myFasta.txt'

	if (myReadFile.is_open()) {
		while (getline(myReadFile, line))
		{
			std::cout << line << '\n';
		}
		myReadFile.close();
	}
	system("pause");
}

Fasta::~Fasta()
{
}
/*
string Fasta::parse()
{
	cout << "parsed ...";
}
*/
