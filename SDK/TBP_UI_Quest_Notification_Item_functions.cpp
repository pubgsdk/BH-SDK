// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Quest_Notification_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Quest_Notification_Item.TBP_UI_Quest_Notification_Item_C.SetupDataFromQuest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuest*             InQuest                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InIsCompleting                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Quest_Notification_Item_C::SetupDataFromQuest(class UTigerQuest* InQuest, bool InIsCompleting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Quest_Notification_Item.TBP_UI_Quest_Notification_Item_C.SetupDataFromQuest"));

	struct
	{
		class UTigerQuest*             InQuest;
		bool                           InIsCompleting;
	} params = {};

	params.InQuest = InQuest;
	params.InIsCompleting = InIsCompleting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
