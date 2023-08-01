// The original copyright of MAWI United GmbH remains unchanged.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Textmanager_2023.generated.h"

/**
 * 
 */
UCLASS()
class CONIFERFOREST_API UTextmanager_2023 : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		//UFUNCTION(CPF_BlueprintCallable, Category = "Custom", meta = (Ketwords = "Save"))
		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArrayText_2023(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting);

};
