// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Awning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Awning.BP_Awning_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Awning_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Awning.BP_Awning_C.SetCustomPrimitiveData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Awning.BP_Awning_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Awning_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Awning.BP_Awning_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
