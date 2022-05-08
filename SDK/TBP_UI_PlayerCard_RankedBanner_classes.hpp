#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerCard_RankedBanner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C
// 0x002C (0x028C - 0x0260)
class UTBP_UI_PlayerCard_RankedBanner_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UImage*                                      Backplate;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Backplate_Color;                                          // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      RankIcon;                                                 // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URetainerBox*                                RetainerBox_49;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                RepresentedPlayerID;                                      // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PlayerCard_RankedBanner.TBP_UI_PlayerCard_RankedBanner_C"));
		return ptr;
	}


	void UpdatePlayerDataSubscription(int PreviousID, int CurrentID);
	void GetDataFromID(bool* IsValid, struct FTigerPlayerStateGameData* OutData);
	void UpdateRepresentedPlayer(int InPlayerId);
	void UpdateRank();
	void PlayerDataUpdated();
	void ExecuteUbergraph_TBP_UI_PlayerCard_RankedBanner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
