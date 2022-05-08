// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Explosion_Test_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Explosion_Test.Explosion_Test_C.OnTriggerClient
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AExplosion_Test_C::OnTriggerClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Explosion_Test.Explosion_Test_C.OnTriggerClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Explosion_Test.Explosion_Test_C.ExecuteUbergraph_Explosion_Test
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExplosion_Test_C::ExecuteUbergraph_Explosion_Test(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Explosion_Test.Explosion_Test_C.ExecuteUbergraph_Explosion_Test"));

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
