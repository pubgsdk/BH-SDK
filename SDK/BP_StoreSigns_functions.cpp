// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StoreSigns_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StoreSigns.BP_StoreSigns_C.AddLight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstance*       InMaterialInstance             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              InTransform                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_StoreSigns_C::AddLight(class UMaterialInstance* InMaterialInstance, const struct FTransform& InTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StoreSigns.BP_StoreSigns_C.AddLight"));

	struct
	{
		class UMaterialInstance*       InMaterialInstance;
		struct FTransform              InTransform;
	} params = {};

	params.InMaterialInstance = InMaterialInstance;
	params.InTransform = InTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StoreSigns.BP_StoreSigns_C.AddStickers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_StoreSigns_C::AddStickers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StoreSigns.BP_StoreSigns_C.AddStickers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StoreSigns.BP_StoreSigns_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_StoreSigns_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StoreSigns.BP_StoreSigns_C.SetCustomPrimitiveData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StoreSigns.BP_StoreSigns_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_StoreSigns_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StoreSigns.BP_StoreSigns_C.UserConstructionScript"));

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
