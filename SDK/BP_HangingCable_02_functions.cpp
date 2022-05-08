// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HangingCable_02_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HangingCable_02.BP_HangingCable_02_C.SetOverrideMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HangingCable_02_C::SetOverrideMaterial(class UPrimitiveComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HangingCable_02.BP_HangingCable_02_C.SetOverrideMaterial"));

	struct
	{
		class UPrimitiveComponent*     Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HangingCable_02.BP_HangingCable_02_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_HangingCable_02_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HangingCable_02.BP_HangingCable_02_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HangingCable_02.BP_HangingCable_02_C.ExecuteUbergraph_BP_HangingCable_02
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HangingCable_02_C::ExecuteUbergraph_BP_HangingCable_02(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HangingCable_02.BP_HangingCable_02_C.ExecuteUbergraph_BP_HangingCable_02"));

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
