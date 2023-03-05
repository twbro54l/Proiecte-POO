#include "pch.h"

using namespace System;

public value class Piese {
public:
	String^ product_name;
	String^ provider_name;
	String^ description;
	int newton_meters;
	int degrees;
	double price;
	void Initializer(String^ pName, String^ prName,
		String^ descr, int Nm, int dG, double pric);
};

void Piese::Initializer(String^ pN, String^ prN,
	String^ desc, int nM, int Dg, double pri) {
	product_name = pN;
	provider_name = prN;
	description = desc;
	newton_meters = nM;
	degrees = Dg;
	price = pri;
}

int main(array<System::String^>^ args)
{
	Piese^ car_parts = gcnew Piese;
	//car_parts->Initializer("Brat Spate", "Meyle", "Alegerea perfecta pentru confortul tau!", 80, 90, 499.99);
	car_parts->Initializer("Bucsa Teflon", "Japan Parts", "Stabilitate superioara a masinii tale!", 0, 0, 64.99);
	//car_parts->Initializer("Arc Sport", "Japan Parts", "Rigiditate sporita!", 0, 0, 64.99);

	Console::WriteLine("Tip Piesa:  {0}", car_parts->product_name);
	Console::WriteLine("Producator: {0}", car_parts->provider_name);
	Console::WriteLine("Descriere:  {0}", car_parts->description);
	if (car_parts->newton_meters >= 1)
		Console::WriteLine("Cuplu Nm:   {0}", car_parts->newton_meters);
	if (car_parts->degrees >= 1)
		Console::WriteLine("Strangere:  {0}", car_parts->degrees);
	Console::WriteLine("Pret:       {0}", car_parts->price);

	return 0;
}
