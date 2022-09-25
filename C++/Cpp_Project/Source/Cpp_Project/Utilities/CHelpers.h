#pragma once

#include "UObject/ConstructorHelpers.h"

class CPP_PROJECT_API CHelpers
{
public:
	template<typename T>
	static void GetAsset(T** OutObject, FString InPath)
	{
		ConstructorHelpers::FObjectFinder<T> asset(*InPath); //���ڿ��� Text�� �ٲٱ� ���� *�� ������
		verifyf(asset.Succeeded(), L"asset.Succeeded()");

		*OutObject = asset.Object;
	}
private:

};

