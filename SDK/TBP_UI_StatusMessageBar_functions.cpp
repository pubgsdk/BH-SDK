// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StatusMessageBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.UpdateStatusMessageUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_StatusMessageBar_C::UpdateStatusMessageUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.UpdateStatusMessageUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.UpdateWidgetAndVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusMessageBar_C::UpdateWidgetAndVisibility(class UWidget* Widget, ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.UpdateWidgetAndVisibility"));

	struct
	{
		class UWidget*                 Widget;
		ESlateVisibility               InVisibility;
	} params = {};

	params.Widget = Widget;
	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_StatusMessageBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.OnBuffAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusMessageBar_C::OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.OnBuffAdded"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.OnBuffRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusMessageBar_C::OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.OnBuffRemoved"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.OnBloodhuntedChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsMasqueradeBreached         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerAIPlayerAction           InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusMessageBar_C::OnBloodhuntedChanged(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.OnBloodhuntedChanged"));

	struct
	{
		bool                           InIsMasqueradeBreached;
		ETigerAIPlayerAction           InPlayerAction;
	} params = {};

	params.InIsMasqueradeBreached = InIsMasqueradeBreached;
	params.InPlayerAction = InPlayerAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.ExecuteUbergraph_TBP_UI_StatusMessageBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusMessageBar_C::ExecuteUbergraph_TBP_UI_StatusMessageBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessageBar.TBP_UI_StatusMessageBar_C.ExecuteUbergraph_TBP_UI_StatusMessageBar"));

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
