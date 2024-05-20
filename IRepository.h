#pragma once
#using <System.dll>
#using <System.Data.dll>
#include "DbManager.h"

using namespace System;
using namespace System::Data;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace InventoryManagerApp {
	namespace Interfaces {

		public interface class IRepository
		{
		public:
			Object^ FindById(int);
			DataSet^ FindBy(Dictionary<String^, String^>);
			void Add(Object^);
			void AddOrModify(Object^);
			void Remove(Object^);
			void RemoveById(int);
		};

	}
}