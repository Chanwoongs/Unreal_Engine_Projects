#pragma once

#include "UObject/ConstructorHelpers.h"

class CPP_PROJECT_API CHelpers
{
public:
	template<typename T>
	static void GetAsset(T** OutObject, FString InPath)
	{
		ConstructorHelpers::FObjectFinder<T> asset(*InPath); //문자열을 Text로 바꾸기 위해 *를 붙혀줌
		verifyf(asset.Succeeded(), L"asset.Succeeded()");

		*OutObject = asset.Object;
	}
private:

};

