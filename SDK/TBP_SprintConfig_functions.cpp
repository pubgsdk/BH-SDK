// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SprintConfig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_SprintConfig.TBP_SprintConfig_C.OnSprintDelayCompleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_SprintConfig_C::OnSprintDelayCompleted(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_SprintConfig.TBP_SprintConfig_C.OnSprintDelayCompleted"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_SprintConfig.TBP_SprintConfig_C.ExecuteUbergraph_TBP_SprintConfig
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_SprintConfig_C::ExecuteUbergraph_TBP_SprintConfig(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_SprintConfig.TBP_SprintConfig_C.ExecuteUbergraph_TBP_SprintConfig"));

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
