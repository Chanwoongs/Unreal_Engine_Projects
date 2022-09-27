#include "CLog.h"
#include "Engine.h"

void CLog::Print(int32 InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage(InKey, Duration, InColor, FString::FromInt(InValue));
}

void CLog::Print(float InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage(InKey, Duration, InColor, FString::SanitizeFloat(InValue));
}

void CLog::Print(const FString& InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage(InKey, Duration, InColor, InValue);
}

void CLog::Print(const FVector& InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage(InKey, Duration, InColor, InValue.ToString());
}

void CLog::Print(const FRotator& InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage(InKey, Duration, InColor, InValue.ToString());
}
