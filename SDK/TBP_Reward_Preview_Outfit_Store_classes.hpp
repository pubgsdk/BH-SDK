#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Reward_Preview_Outfit_Store_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C
// 0x0030 (0x02B0 - 0x0280)
class ATBP_Reward_Preview_Outfit_Store_C : public ATigerBattlepassRewardPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTigerSpotLightComponent*                    TigerSpotLight;                                           // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        PaperdollComponentEditorPreview;                          // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTigerItemPreviewInputComponent*             TigerItemPreviewInput;                                    // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        PaperdollComponent;                                       // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C"));
		return ptr;
	}


	void ApplyItemToPaperdoll(const struct FTigerPreviewerData& InPreviewAppearance, ETigerClan InClanType);
	void LoadCharacterPresetFromPrimaryOwner();
	void TryWithPlayerAppearance(bool* bWasSuccessful);
	void OnCharacterPresetsLoaded(TArray<class UObject*> LoadedPresets);
	void OnPreviewItemUpdated();
	void ReceiveBeginPlay();
	void OnAppearanceChanged();
	void PlayerApperanceFinishedLoading();
	void ExecuteUbergraph_TBP_Reward_Preview_Outfit_Store(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
