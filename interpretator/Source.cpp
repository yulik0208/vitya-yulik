#include <vector>
#include <string>
#include <iostream>

#include "Variable.h"

using namespace std;


int a;
int main()
{
	std::vector<Variable> AllVariables;
	std::string line[] = { "$int a12 = 1021$" , "$int b = 100$"};
	for(int i = 0; i < line->size(); ++i)
	{
		if ('$' == line[i].at(0))
		{
			if ("int" == line[i].substr(1, 3))
			{
				if (std::string::npos == line[i].find('='))
				{
					int a = line[i].length();
					Variable var("int", line[i].substr(5, line[i].length() - 6));
					AllVariables.push_back(var);
				}
				else
				{
					Variable var("int", line[i].substr(5, line[i].find('=') - 6), 
						std::stof(line[i].substr(line[i].find('=') + 2, line[i].length() - line[i].find('=') + 3)));
					AllVariables.push_back(var);
				}
			}
			else if ("flt" == line[i].substr(1, 3))
			{
				if (std::string::npos == line[i].find('='))
				{
					int a = line[i].length();
					Variable var("flt", line[i].substr(5, line[i].length() - 6));
					AllVariables.push_back(var);
				}
				else
				{
					Variable var("flt", line[i].substr(5, line[i].find('=') - 6),
						std::stof(line[i].substr(line[i].find('=') + 2, line[i].length() - line[i].find('=') + 3)));
					AllVariables.push_back(var);
				}
			}
		}
	}
	std::vector<Statement> statement;
	std::string stat[] = { "a = a + b;","b = b + a;" };
	for (int i = 0; i < stat->size(); ++i)
	{
	//todo parse string and add operations or variables to vector 
	//	if (stat[i].substr(stat[i].find(' ')
	//
    //
	}
	system("pause");
	return 0;
}