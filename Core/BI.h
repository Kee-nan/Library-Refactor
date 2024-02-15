#pragma once
#include "Core_Exports.h"

#include <string>
/// <summary>
/// Utility class for our Business Intelligence module
/// </summary>
class CORE_API BusinessIntelligence
{
public:


	void LogSomething(std::string something);

private:

	BusinessIntelligence();
};

extern CORE_API BusinessIntelligence* GetBusinessIntelligence();