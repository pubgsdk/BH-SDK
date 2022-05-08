// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_AwarenessIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateMinMaxCurve
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AwarenessIndicator_C::UpdateMinMaxCurve(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateMinMaxCurve"));

	struct
	{
		float                          InDeltaTime;
	} params = {};

	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateMaterialParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_AwarenessIndicator_C::UpdateMaterialParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateMaterialParameters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateOpacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AwarenessIndicator_C::UpdateOpacity(class ATigerPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateOpacity"));

	struct
	{
		class ATigerPlayer*            Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateUIAngle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            Player                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AwarenessIndicator_C::UpdateUIAngle(class ATigerPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.UpdateUIAngle"));

	struct
	{
		class ATigerPlayer*            Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AwarenessIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.Tick"));

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


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.OnNPCGainedAwareness
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerBaseNPC*           InNpc                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AwarenessIndicator_C::OnNPCGainedAwareness(class ATigerBaseNPC* InNpc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.OnNPCGainedAwareness"));

	struct
	{
		class ATigerBaseNPC*           InNpc;
	} params = {};

	params.InNpc = InNpc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.OnNPCLostAwareness
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerBaseNPC*           InNpc                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AwarenessIndicator_C::OnNPCLostAwareness(class ATigerBaseNPC* InNpc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.OnNPCLostAwareness"));

	struct
	{
		class ATigerBaseNPC*           InNpc;
	} params = {};

	params.InNpc = InNpc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_AwarenessIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.ExecuteUbergraph_TBP_UI_AwarenessIndicator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AwarenessIndicator_C::ExecuteUbergraph_TBP_UI_AwarenessIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AwarenessIndicator.TBP_UI_AwarenessIndicator_C.ExecuteUbergraph_TBP_UI_AwarenessIndicator"));

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
