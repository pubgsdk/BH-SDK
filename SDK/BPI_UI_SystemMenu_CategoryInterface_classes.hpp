#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_UI_SystemMenu_CategoryInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_UI_SystemMenu_CategoryInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_UI_SystemMenu_CategoryInterface.BPI_UI_SystemMenu_CategoryInterface_C"));
		return ptr;
	}


	void ResetSettings();
	void RevertChanges();
	void DiscardChanges();
	void ConfirmApply();
	void ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart);
	void HasUnappliedChanges(bool* OutHasUnappliedChanges);
	void CloseCategory();
	void OpenCategory();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
