// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Inbox_Subscreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.UpdateFriendAvailability
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Inbox_Subscreen_C::UpdateFriendAvailability()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.UpdateFriendAvailability"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Social_Inbox_Subscreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Social_Inbox_Subscreen_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnFriendServiceStatusChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerOnlineServiceStatus      InServiceStatus                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Inbox_Subscreen_C::OnFriendServiceStatusChanged(ETigerOnlineServiceStatus InServiceStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnFriendServiceStatusChanged"));

	struct
	{
		ETigerOnlineServiceStatus      InServiceStatus;
	} params = {};

	params.InServiceStatus = InServiceStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Inbox_Subscreen_C::ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
