// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RooftopWindow_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.SetWindowColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            WindowColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_RooftopWindow_Master_C::SetWindowColor(const struct FLinearColor& WindowColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.SetWindowColor"));

	struct
	{
		struct FLinearColor            WindowColor;
	} params = {};

	params.WindowColor = WindowColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RooftopWindow_Master_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.SetCustomPrimitiveData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.SetLights
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            LightColor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_RooftopWindow_Master_C::SetLights(int Index, const struct FLinearColor& LightColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.SetLights"));

	struct
	{
		int                            Index;
		struct FLinearColor            LightColor;
	} params = {};

	params.Index = Index;
	params.LightColor = LightColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.Set Materials
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RooftopWindow_Master_C::Set_Materials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.Set Materials"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RooftopWindow_Master_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_RooftopWindow_Master_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.ExecuteUbergraph_BP_RooftopWindow_Master
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_RooftopWindow_Master_C::ExecuteUbergraph_BP_RooftopWindow_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopWindow_Master.BP_RooftopWindow_Master_C.ExecuteUbergraph_BP_RooftopWindow_Master"));

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
