#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PingBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PingBase.TBP_PingBase_C
// 0x0031 (0x0121 - 0x00F0)
class UTBP_PingBase_C : public UTigerPingBase
{
public:
	struct FText                                       PingCancelText;                                           // 0x00F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               PingVoiceInterested;                                      // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               PingVoiceNotInterested;                                   // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               PingVoiceCancel;                                          // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bShouldDisplayCancelNotification;                         // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PingBase.TBP_PingBase_C"));
		return ptr;
	}


	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	void GetCancelPingText(const struct FTigerPingContext& InPingContext, struct FText* Return_Value_Ping_Cancel_Text, struct FTigerPingIconData* Return_Value_Ping_Icon);
	void GetStandardResponseText(bool bInIsInterested, const struct FText& InPingName, struct FText* Result);
	struct FTigerPingNotificationUIData GetResponseText(const struct FTigerPingContext& InContext, bool bInIsInterested);
	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
