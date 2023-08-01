#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "readdata.generated.h"

/**
 *
 */
UCLASS()
class CONIFERFOREST_API Ureaddata : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString LoadFileToString(FString Filename); //Giving a string back if LoadFileToString is called

	//UFUNCTION(BlueprintintCallable, Category = "File I/O")
	//static TArray<FString> LoadFiletoStringArray(FString Filename);

};
