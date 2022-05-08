#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C
// 0x0031 (0x0301 - 0x02D0)
class UTBP_UI_PlayerMarker_C : public UTigerPlayerMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            CrossToRed;                                               // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                PlayerCross;                                              // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      PlayerMarkerImage;                                        // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	unsigned char                                      GroupPlayerIndex;                                         // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	class UTigerPlayerMasqueradeComponent*             PlayerMasqueradeComponent;                                // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               MasqueradeBreached;                                       // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C"));
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnIsOnMinimapIsSet(bool bInIsOnMinimap);
	void On_Masquerade_Changed(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction);
	void SetGroupPlayerIndex(unsigned char InPlayerIndex);
	void ExecuteUbergraph_TBP_UI_PlayerMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
