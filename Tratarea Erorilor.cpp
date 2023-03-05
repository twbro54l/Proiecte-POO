#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{

	int x, i = 0;
	try {
		for (i = 0; i < 5; i++) {
			Console::WriteLine("Nr {0}", i);
			double y = i / x;
			Console::WriteLine(y);
		}
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error in try-catch {0}", ex);
	}
	return 0;
}
