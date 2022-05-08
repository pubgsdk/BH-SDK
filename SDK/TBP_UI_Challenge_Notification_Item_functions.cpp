// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Challenge_Notification_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.SetupDataFromChallengeCompleted
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         TigerChallenge                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Challenge_Notification_Item_C::SetupDataFromChallengeCompleted(class UTigerChallenge* TigerChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Challenge_Notification_Item.TBP_UI_Challenge_Notification_Item_C.SetupDataFromChallengeCompleted"));

	struct
	{
		class UTigerChallenge*         TigerChallenge;
	} params = {};

	params.TigerChallenge = TigerChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
