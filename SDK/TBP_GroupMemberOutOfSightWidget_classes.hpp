#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GroupMemberOutOfSightWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C
// 0x0040 (0x0308 - 0x02C8)
class UTBP_GroupMemberOutOfSightWidget_C : public UTigerInWorldWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBorder*                                     BorderWidget;                                             // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URichTextBlock*                              GroupMemberNameWidget;                                    // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ATigerPlayerState*                           GroupMemberState;                                         // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerPlayer*                                TigerPlayer;                                              // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnLifeStatusChanged;                                      // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C"));
		return ptr;
	}


	void HandleLifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus);
	void HandlePlayerChanged(class ATigerPlayer* InTigerPlayer);
	struct FLinearColor GetColorAndOpacity();
	void Initialize(class ATigerPlayerState* Player_State);
	void OnPawnChanged(class APawn* NewPawn);
	void OnScreenStateChanged(bool bInIsOnScreen);
	void Destruct();
	void OnNameChanged();
	void ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget(int EntryPoint);
	void OnLifeStatusChanged__DelegateSignature(ETigerPlayerLifeStatus InLifeStatus);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
