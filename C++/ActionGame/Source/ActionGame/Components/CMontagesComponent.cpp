#include "CMontagesComponent.h"
#include "Global.h"

UCMontagesComponent::UCMontagesComponent()
{
}


void UCMontagesComponent::BeginPlay()
{
	Super::BeginPlay();

	CheckNull(DataTable);
	
	TArray<FMontageData*> datas;
	DataTable->GetAllRows<FMontageData>("", datas);

	for (const FMontageData* data : datas)
	{
		if (!!data)
		{
			CLog::Log(data->AnimMontage->GetPathName());
		}
	}
}

