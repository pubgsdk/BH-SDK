#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Bark_Masquerade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_Bark_Masquerade.TBP_Ping_Bark_Masquerade_C
// 0x0027 (0x0148 - 0x0121)
class UTBP_Ping_Bark_Masquerade_C : public UTBP_PingBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FText                                       DescriptionNotBloodhunted;                                // 0x0128(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               MasqueradeIntactVO;                                       // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_Bark_Masquerade.TBP_Ping_Bark_Masquerade_C"));
		return ptr;
	}


	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	struct FTigerPingIconData GetIconData(const struct FTigerPingContext& InContext);
	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
