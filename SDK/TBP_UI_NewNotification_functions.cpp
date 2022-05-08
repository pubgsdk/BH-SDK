// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_NewNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.SetVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_NewNotification_C::SetVisible(bool InVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.SetVisible"));

	struct
	{
		bool                           InVisible;
	} params = {};

	params.InVisible = InVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_NewNotification_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_NewNotification_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_NewNotification_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.CheckShouldBeActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_NewNotification_C::CheckShouldBeActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.CheckShouldBeActive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.BindNewsUpdateEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_NewNotification_C::BindNewsUpdateEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.BindNewsUpdateEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.OnHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DelayTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_NewNotification_C::OnHide(float DelayTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.OnHide"));

	struct
	{
		float                          DelayTime;
	} params = {};

	params.DelayTime = DelayTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.ExecuteUbergraph_TBP_UI_NewNotification
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_NewNotification_C::ExecuteUbergraph_TBP_UI_NewNotification(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.ExecuteUbergraph_TBP_UI_NewNotification"));

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
