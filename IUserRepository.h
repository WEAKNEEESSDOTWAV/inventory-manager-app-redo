#pragma once
#include "User.h"

using namespace System::Collections::Generic;
using namespace InventoryManagerApp::Models;

namespace InventoryManagerApp {
    namespace Interfaces {
        namespace IClassRepository {

            public interface class IUserRepository
            {
                User^ GetUserById(int id);
                List<User^>^ GetAllUsers();
                void AddUser(User^ user);
                void UpdateUser(User^ user);
                void DeleteUser(int id);
            };

        }
    }
}