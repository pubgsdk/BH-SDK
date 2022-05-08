#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelpBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelpBase.TBP_ContextualHelpBase_C
// 0x0040 (0x00F0 - 0x00B0)
class UTBP_ContextualHelpBase_C : public UTigerContextualHelp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                ShowCountRemaining;                                       // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Additional_Input;                                         // 0x00BC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Additional_Icon;                                          // 0x00C8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelpBase.TBP_ContextualHelpBase_C"));
		return ptr;
	}


	void SetWantsToShowOff();
	void SetWantsToShow();
	void HasReachedMaxLimitInMatch(bool* bLimitReached);
	void OnHide(class ATigerPlayerController* InTigerPlayerController);
	void ExecuteUbergraph_TBP_ContextualHelpBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
