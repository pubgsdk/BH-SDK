// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ElectricityBox_04_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ElectricityBox_04_C::SetCustomPrimitiveData(class UPrimitiveComponent* PrimitiveComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.SetCustomPrimitiveData"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ElectricityBox_04_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ElectricityBox_04_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.ExecuteUbergraph_BP_ElectricityBox_04
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ElectricityBox_04_C::ExecuteUbergraph_BP_ElectricityBox_04(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricityBox_04.BP_ElectricityBox_04_C.ExecuteUbergraph_BP_ElectricityBox_04"));

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
