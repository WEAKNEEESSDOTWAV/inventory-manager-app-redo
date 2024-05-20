#pragma once
#include "IRepository.h"
#include "User.h"

namespace InventoryManagerApp {
	namespace Repositories {
		ref class UserRepository : Interfaces::IRepository
		{
		public:
			UserRepository();
			virtual Object^ FindById(int);
			virtual DataSet^ FindBy(Dictionary<String^, String^>);
			virtual void Add(Object^);
			virtual void AddOrModify(Object^);
			virtual void Remove(Object^);
			virtual void RemoveById(int);
		};
	}
}
