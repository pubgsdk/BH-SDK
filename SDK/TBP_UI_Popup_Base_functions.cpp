// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Popup_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.OpenPopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Popup_Base_C::OpenPopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.OpenPopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.ClosePopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Popup_Base_C::ClosePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.ClosePopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
