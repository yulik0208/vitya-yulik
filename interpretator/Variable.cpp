#include "Variable.h"


Variable::Variable(std::string typeToSet, std::string nameToSet, float valueToSet)
{
	type = typeToSet;
	name = nameToSet;
	value = valueToSet;	
}

std::string Variable::GetType()
{
	return type;
}

std::string Variable::GetName()
{
	return name;
}

float Variable::GetValue()
{
	return value;
}
