// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumNpcNameplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetQuestMarkerVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_ElysiumNpcNameplate_C::GetQuestMarkerVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetQuestMarkerVisibility"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ShouldShowNameplate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ElysiumNpcNameplate_C::ShouldShowNameplate(bool* Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ShouldShowNameplate"));

	struct
	{
		bool                           Visible;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.HideIfMenuIsOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_ElysiumNpcNameplate_C::HideIfMenuIsOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.HideIfMenuIsOpen"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTBP_UI_ElysiumNpcNameplate_C::GetNpcIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcIcon"));

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_UI_ElysiumNpcNameplate_C::GetNpcTitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcTitle"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_UI_ElysiumNpcNameplate_C::GetNpcName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcName"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNpcNameplate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Tick"));

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


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ElysiumNpcNameplate_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.PreConstruct"));

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


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumNpcNameplate_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNpcNameplate_C::ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate"));

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
