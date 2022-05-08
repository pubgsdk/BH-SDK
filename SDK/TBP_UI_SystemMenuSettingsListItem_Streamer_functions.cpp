// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuSettingsListItem_Streamer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.OnHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuSettingsListItem_Streamer_C::OnHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.OnHover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.OnUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SystemMenuSettingsListItem_Streamer_C::OnUnhover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.OnUnhover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_SystemMenuSettingsListItem_Streamer_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItem_Streamer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SystemMenuSettingsListItem_Streamer_C::ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItem_Streamer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C.ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItem_Streamer"));

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
