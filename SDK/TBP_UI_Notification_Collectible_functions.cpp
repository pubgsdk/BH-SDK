// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Notification_Collectible_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Notification_Collectible.TBP_UI_Notification_Collectible_C.Set Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Notification_Collectible_C::Set_Text(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notification_Collectible.TBP_UI_Notification_Collectible_C.Set Text"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
