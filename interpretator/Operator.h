#ifndef OPERATION
#define OPERATION
#include "Statement.h"
#include <string>

class Operation: public Statement 
{
private:
	std::string operation;
public:
	Operation();
	std::string IsVaidOperation(std::string operationToCheck);
};



#endif //STATEMENT