#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RewardPreview_Emote_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C
// 0x0018 (0x02C8 - 0x02B0)
class ATBP_RewardPreview_Emote_C : public ATBP_RewardPreview_Outfit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UClass* /*UTBP_EmoteControllerComponent_C*/  EmoteControllerClass;                                     // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimInstance*                               PaperdollAnimationInstance;                               // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C"));
		return ptr;
	}


	void OnPreviewItemUpdated();
	void OnAppearanceChanged();
	void OnPreviewItemOpened();
	void ExecuteUbergraph_TBP_RewardPreview_Emote(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
