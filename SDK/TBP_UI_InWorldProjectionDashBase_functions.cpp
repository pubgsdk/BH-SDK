// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InWorldProjectionDashBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldProjectionDashBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Tick"));

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


// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.UpdateOffScreenState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          InRotationDegrees              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldProjectionDashBase_C::UpdateOffScreenState(float InRotationDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.UpdateOffScreenState"));

	struct
	{
		float                          InRotationDegrees;
	} params = {};

	params.InRotationDegrees = InRotationDegrees;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.OnScreenStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnScreen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InWorldProjectionDashBase_C::OnScreenStateChanged(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.OnScreenStateChanged"));

	struct
	{
		bool                           bInIsOnScreen;
	} params = {};

	params.bInIsOnScreen = bInIsOnScreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InWorldProjectionDashBase_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldProjectionDashBase_C::ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase"));

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
