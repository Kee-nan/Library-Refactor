#include "pch.h"
#include "unittest.h"

// Initialize method
TEST_MODULE_INITIALIZE(ModuleInitialize)
{
    Logger::WriteMessage("Unit test module initialized.\n");
}

// Clean-up method
TEST_MODULE_CLEANUP(ModuleCleanup)
{
    Logger::WriteMessage("Unit test module cleaned up.\n");
}