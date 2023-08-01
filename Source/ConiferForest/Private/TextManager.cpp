// The original copyright of MAWI United GmbH remains unchanged.


#include "TextManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UTextFileManager::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting = false)
{
    // set complete file path
    SaveDirectory += "\\";
    SaveDirectory += FileName;

    if (!AllowOverWriting)
    {
        if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
        {
            return false;
        }
    }

    FString FinalString = "";
    for (FString& Each : SaveText)
    {
        FinalString += Each;
        FinalString += LINE_TERMINATOR;
    }

    return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory);
}
