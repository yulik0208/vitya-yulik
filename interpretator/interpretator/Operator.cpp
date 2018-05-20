#include "Operator.h"

static std::string operationsArray[] = { "=","+","-","*","/" };

Operation::Operation()
{

}
std::string Operation::IsVaidOperation(std::string operationToCheck)
{
	for (int i = 0; i < operationsArray->size(); ++i)
	{
		if (operationToCheck == operationsArray[i])
		{
			operation = operationsArray[i];
			return operationsArray[i];
		}
	}
	return nullptr;
}
