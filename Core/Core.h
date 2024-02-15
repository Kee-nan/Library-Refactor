#pragma once

#include "Core_Exports.h"

#include <string>

/// <summary>
/// Core utilities that are useful to all our applications.
/// </summary>
class CORE_API CCore {
public:
	CCore(void);
	// TODO: add your methods here.
};


std::string CORE_API combinesString(const std::string& stringOne, const std::string& stringTwo);


extern CORE_API int nCore;

CORE_API int fnCore(void);
