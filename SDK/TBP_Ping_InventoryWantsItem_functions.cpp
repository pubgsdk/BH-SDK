// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_InventoryWantsItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetNotificationVoiceAudioEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UAkAudioEvent*           OutAudioEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Ping_InventoryWantsItem_C::GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetNotificationVoiceAudioEvent"));

	struct
	{
		struct FTigerPingContext       InContext;
		class UAkAudioEvent*           OutAudioEvent;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAudioEvent != nullptr)
		*OutAudioEvent = params.OutAudioEvent;
}


// Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetInventoryTooltipText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTigerItemAsset*         InModAsset                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutText                        (CPF_Parm, CPF_OutParm)

void UTBP_Ping_InventoryWantsItem_C::GetInventoryTooltipText(class UTigerItemAsset* InModAsset, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetInventoryTooltipText"));

	struct
	{
		class UTigerItemAsset*         InModAsset;
		struct FText                   OutText;
	} params = {};

	params.InModAsset = InModAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutText != nullptr)
		*OutText = params.OutText;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
