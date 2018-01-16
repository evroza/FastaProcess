#pragma once

#include <iostream>
#include "stdafx.h"
#include <string>
#include <fstream>

using namespace std;

//DNA recognition constants
const string START_CORDON = "ATG";
const string  END_CORDON[] = { "TAA", "TAG", "TGA" };

// Parses the fasta files
class Fasta
{
public:
	string myfileName, content;

	Fasta(string);
	~Fasta();
	string parse() {};

};

