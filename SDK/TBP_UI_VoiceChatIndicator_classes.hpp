#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VoiceChatIndicator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C
// 0x0045 (0x02D5 - 0x0290)
class UTBP_UI_VoiceChatIndicator_C : public UTigerVoipChatIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            VoiceChatJoined;                                          // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      JoiningIndicatorImage;                                    // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      StateIndicatorImage;                                      // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              IconSize;                                                 // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	class UTexture2D*                                  CurrentTexture;                                           // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentOpacity;                                           // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ETalkingVisiblityState                             CurrentTalkingState;                                      // 0x02D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C"));
		return ptr;
	}


	void VisualizeChatState(ETalkingVisiblityState InChatState);
	void UpdateVoiceChatStatePopup(const struct FTigerPersistentVoipID& InTigerPersistentVoipID);
	void JoinVoiceChat();
	void UpdateVoiceChatState(class ATigerPlayerState* Target);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Set_Voip_ID_FromTiger_Player_State(class ATigerPlayerState* inTigerPlayerState);
	void Set_Voip_ID(const struct FTigerPersistentVoipID& InVoipID);
	void TalkingVisibilityStateChanged(ETalkingVisiblityState InTalkingVisibilityState);
	void ExecuteUbergraph_TBP_UI_VoiceChatIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
