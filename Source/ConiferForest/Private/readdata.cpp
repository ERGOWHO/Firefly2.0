#include "readdata.h"
#include "Runtime\Core\Public\Misc\Paths.h"
#include "Runtime\Core\Public\HAL\PlatformFilemanager.h"

FString Ureaddata::LoadFileToString(FString Filename)
{
	//FString directory = FPaths::GameContentDir();
	FString directory = FPaths::ProjectContentDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}
