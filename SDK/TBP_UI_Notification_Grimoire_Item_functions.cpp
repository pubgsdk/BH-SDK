// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Notification_Grimoire_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Notification_Grimoire_Item.TBP_UI_Notification_Grimoire_Item_C.SetText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Line1                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Notification_Grimoire_Item_C::SetText(const struct FText& Line1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notification_Grimoire_Item.TBP_UI_Notification_Grimoire_Item_C.SetText"));

	struct
	{
		struct FText                   Line1;
	} params = {};

	params.Line1 = Line1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
