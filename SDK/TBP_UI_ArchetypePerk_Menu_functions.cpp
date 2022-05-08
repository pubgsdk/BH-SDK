// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ArchetypePerk_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.SetPreviewPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPerkItem*          InPerk                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerArchetypePerkState       InState                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Menu_C::SetPreviewPerk(class UTigerPerkItem* InPerk, ETigerArchetypePerkState InState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.SetPreviewPerk"));

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


// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Menu_C::Open(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.Open"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
	} params = {};

	params.InArchetypeType = InArchetypeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.BndEvt__TBP_UI_ArchetypePerk_Menu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ArchetypePerk_Menu_C::BndEvt__TBP_UI_ArchetypePerk_Menu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.BndEvt__TBP_UI_ArchetypePerk_Menu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.SelectPerkWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_ArchetypePerk_Perk_C* InSelectedPerkWidget           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerPerkItem*          InSelectedPerkItem             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Menu_C::SelectPerkWidget(class UTBP_UI_ArchetypePerk_Perk_C* InSelectedPerkWidget, class UTigerPerkItem* InSelectedPerkItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.SelectPerkWidget"));

	struct
	{
		class UTBP_UI_ArchetypePerk_Perk_C* InSelectedPerkWidget;
		class UTigerPerkItem*          InSelectedPerkItem;
	} params = {};

	params.InSelectedPerkWidget = InSelectedPerkWidget;
	params.InSelectedPerkItem = InSelectedPerkItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ArchetypePerk_Menu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.PreConstruct"));

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


// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypePerk_Menu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.ExecuteUbergraph_TBP_UI_ArchetypePerk_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypePerk_Menu_C::ExecuteUbergraph_TBP_UI_ArchetypePerk_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.ExecuteUbergraph_TBP_UI_ArchetypePerk_Menu"));

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


// Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.Back__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypePerk_Menu_C::Back__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypePerk_Menu.TBP_UI_ArchetypePerk_Menu_C.Back__DelegateSignature"));

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
