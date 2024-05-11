#pragma once
#include "pch.h"

namespace NS_Models
{
	ref class CLmaps abstract
	{
	public:
		virtual String^ INSERT(void) = 0;
		virtual String^ SELECT(void) = 0;
		virtual String^ UPDATE(void) = 0;
		virtual String^ DELETE(void) = 0;
	};
}

