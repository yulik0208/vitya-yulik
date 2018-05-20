#ifndef VARIABLE
#define VARIABLE


#include <string>
#include <vector>
#include "Statement.h"


class Variable : public Statement
{
private:
	std::string type;
	std::string name;
	float value = 0;
	//todo check of limits!!
	float maxValue = 1000000000;
	float minValue = 1000000000;
	//
public:
	//static std::vector<Variable> AllVariables;
	Variable(std::string typeToSet, std::string nameToSet, float valueToSet = 0);
	std::string GetType();
	std::string GetName();
	float GetValue();
};



#endif //VARIABLE