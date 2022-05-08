// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ArchetypePerk_Perk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.UpdateState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerArchetypePerkState       InState                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInUnlock                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ArchetypePerk_Perk_C::UpdateState(ETigerArchetypePerkState InState, bool bInUnlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.UpdateState"));

	struct
	{
		ETigerArchetypePerkState       InState;
		bool                           bInUnlock;
	} params = {};

	params.InState = InState;
	params.bInUnlock = bInUnlock;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.BndEvt__TBP_UI_ArchetypePerk_Perk_Button_187_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ArchetypePerk_Perk_C::BndEvt__TBP_UI_ArchetypePerk_Perk_Button_187_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.BndEvt__TBP_UI_ArchetypePerk_Perk_Button_187_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.BndEvt__TBP_UI_ArchetypePerk_Perk_Perk_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ArchetypePerk_Perk_C::BndEvt__TBP_UI_ArchetypePerk_Perk_Perk_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.BndEvt__TBP_UI_ArchetypePerk_Perk_Perk_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.BndEvt__TBP_UI_ArchetypePerk_Perk_Perk_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ArchetypePerk_Perk_C::BndEvt__TBP_UI_ArchetypePerk_Perk_Perk_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.BndEvt__TBP_UI_ArchetypePerk_Perk_Perk_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ArchetypePerk_Perk_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.SetItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPerkItem*          InPerk                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerArchetypePerkState       InState                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Perk_C::SetItem(class UTigerPerkItem* InPerk, ETigerArchetypePerkState InState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.SetItem"));

	struct
	{
		class UTigerPerkItem*          InPerk;
		ETigerArchetypePerkState       InState;
	} params = {};

	params.InPerk = InPerk;
	params.InState = InState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.ExecuteUbergraph_TBP_UI_ArchetypePerk_Perk
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Perk_C::ExecuteUbergraph_TBP_UI_ArchetypePerk_Perk(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.ExecuteUbergraph_TBP_UI_ArchetypePerk_Perk"));

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


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.Preview__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPassiveConfig*     Passive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_UI_ArchetypePerkSelectState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Perk_C::Preview__DelegateSignature(class UTigerPassiveConfig* Passive, TEnumAsByte<E_UI_ArchetypePerkSelectState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.Preview__DelegateSignature"));

	struct
	{
		class UTigerPassiveConfig*     Passive;
		TEnumAsByte<E_UI_ArchetypePerkSelectState> State;
	} params = {};

	params.Passive = Passive;
	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.Select__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPassiveConfig*     Passive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Perk_C::Select__DelegateSignature(class UTigerPassiveConfig* Passive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Perk.TBP_UI_ArchetypePerk_Perk_C.Select__DelegateSignature"));

	struct
	{
		class UTigerPassiveConfig*     Passive;
	} params = {};

	params.Passive = Passive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
