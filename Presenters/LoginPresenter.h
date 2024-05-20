#pragma once
#include "IConnectionView.cpp"

using namespace InventoryManagerApp::Interfaces;

namespace InventoryManagerApp {
	namespace Presenters {
		ref class LoginPresenter {
			IConnectionView^ view;
			LoginPresenter(IConnectionView^);
			void Login();
		};
	}
}