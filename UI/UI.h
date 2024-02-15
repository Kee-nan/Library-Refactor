#pragma once
#include "UI_Exports.h"


#include "..\App\App.h"
#include "..\App\App2.h"

/// <summary>
/// This class has the UI functionality for our Application
/// </summary>
class UI_API UI
{
public:

	UI();


	void Init();

	void StartGUILoop();

private:
	MyApplication1* m_application1;
	MyApplication2* m_application2;
};
