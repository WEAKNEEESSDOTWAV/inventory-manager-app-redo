#pragma once

using namespace System;
using namespace System::Security;

namespace InventoryManagerApp {
	namespace Interfaces {

		public interface class IConnectionView
		{
			property String^ Email
			{
				String^ get();
			};

			property SecureString^ Password
			{
				SecureString^ get();
			}
		};

	}
}