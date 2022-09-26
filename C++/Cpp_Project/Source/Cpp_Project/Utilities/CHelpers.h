#pragma once

#include "CoreMinimal.h"
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

	template<typename T>
	static void GetAssetDynamic(T** OutObject, FString InPath)
	{
		T* obj = Cast<T>(StaticLoadObject(T::StaticClass(), NULL, *InPath));
		verifyf(!!obj, L"!!asset");
		//!! NULL �ƴϸ� True, NULL �̸� False

		*OutObject = obj;
	}
private:

};

