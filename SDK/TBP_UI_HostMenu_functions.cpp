// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_HostMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_HostMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_HostMenu_C::BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_HostMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_HostMenu_C::BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.ExecuteUbergraph_TBP_UI_HostMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HostMenu_C::ExecuteUbergraph_TBP_UI_HostMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.ExecuteUbergraph_TBP_UI_HostMenu"));

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
