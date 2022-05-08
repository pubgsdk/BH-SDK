// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Crossbow_Explosion_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.OnTriggerClient
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACrossbow_Explosion_2_C::OnTriggerClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.OnTriggerClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.ExecuteUbergraph_Crossbow_Explosion_3
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACrossbow_Explosion_2_C::ExecuteUbergraph_Crossbow_Explosion_3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.ExecuteUbergraph_Crossbow_Explosion_3"));

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
