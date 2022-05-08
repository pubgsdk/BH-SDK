// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Awareness_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Awareness.TBP_UI_Awareness_C.OnNPCGainedAwareness
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerBaseNPC*           InNpc                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Awareness_C::OnNPCGainedAwareness(class ATigerBaseNPC* InNpc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Awareness.TBP_UI_Awareness_C.OnNPCGainedAwareness"));

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


// Function TBP_UI_Awareness.TBP_UI_Awareness_C.OnNPCLostAwareness
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerBaseNPC*           InNpc                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Awareness_C::OnNPCLostAwareness(class ATigerBaseNPC* InNpc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Awareness.TBP_UI_Awareness_C.OnNPCLostAwareness"));

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


// Function TBP_UI_Awareness.TBP_UI_Awareness_C.ExecuteUbergraph_TBP_UI_Awareness
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Awareness_C::ExecuteUbergraph_TBP_UI_Awareness(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Awareness.TBP_UI_Awareness_C.ExecuteUbergraph_TBP_UI_Awareness"));

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
