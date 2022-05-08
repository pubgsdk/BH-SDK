// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputBinding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetAxisMapping
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ActionMappingIndex             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInputAxisKeyMapping    UserAxisMapping                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_InputBinding_C::SetAxisMapping(int ActionMappingIndex, const struct FInputAxisKeyMapping& UserAxisMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetAxisMapping"));

	struct
	{
		int                            ActionMappingIndex;
		struct FInputAxisKeyMapping    UserAxisMapping;
	} params = {};

	params.ActionMappingIndex = ActionMappingIndex;
	params.UserAxisMapping = UserAxisMapping;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetActionMapping
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ActionMappingIndex             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInputActionKeyMapping  UserActionMapping              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_InputBinding_C::SetActionMapping(int ActionMappingIndex, const struct FInputActionKeyMapping& UserActionMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetActionMapping"));

	struct
	{
		int                            ActionMappingIndex;
		struct FInputActionKeyMapping  UserActionMapping;
	} params = {};

	params.ActionMappingIndex = ActionMappingIndex;
	params.UserActionMapping = UserActionMapping;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputBinding_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UTBP_UI_InputBinding_C::BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature"));

	struct
	{
		struct FInputChord             SelectedKey;
	} params = {};

	params.SelectedKey = SelectedKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InputBinding_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_InputBinding_C::BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InputBinding_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InputBinding_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseLeave"));

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


// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.ExecuteUbergraph_TBP_UI_InputBinding
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputBinding_C::ExecuteUbergraph_TBP_UI_InputBinding(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.ExecuteUbergraph_TBP_UI_InputBinding"));

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
