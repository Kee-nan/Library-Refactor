#pragma once

#include "..\Core\LinkedList.h"
#include "App_Exports.h"

/// <summary>
/// This class does something entirely different thatn MyAppplication1
/// </summary>
class APP_API MyApplication2
{
public:
	MyApplication2();
	virtual ~MyApplication2();

	void DoWork();

private:
	PointerBasedLinkedList* m_pointerBasedLinkedList;

};
