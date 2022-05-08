// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LightMaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LightMaster.BP_LightMaster_C.SetMaterialAndPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector4                InColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_LightMaster_C::SetMaterialAndPrimitiveData(const struct FVector4& InColor, class UPrimitiveComponent* InMesh, int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.SetMaterialAndPrimitiveData"));

	struct
	{
		struct FVector4                InColor;
		class UPrimitiveComponent*     InMesh;
		int                            InIndex;
	} params = {};

	params.InColor = InColor;
	params.InMesh = InMesh;
	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.SetCDO
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_LightMaster_C::SetCDO(TSoftClassPtr<class UClass> InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.SetCDO"));

	struct
	{
		TSoftClassPtr<class UClass>    InData;
	} params = {};

	params.InData = InData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.LineTraceLogic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_LightMaster_C::LineTraceLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.LineTraceLogic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.SetRainParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RainOn                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_LightMaster_C::SetRainParticles(bool RainOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.SetRainParticles"));

	struct
	{
		bool                           RainOn;
	} params = {};

	params.RainOn = RainOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.LightColorSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULightComponent*         Light                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            NewLightColor                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector4                NewEmissiveColor               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            LightColorInt                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_LightMaster_C::LightColorSelection(class ULightComponent* Light, struct FLinearColor* NewLightColor, struct FVector4* NewEmissiveColor, int* LightColorInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.LightColorSelection"));

	struct
	{
		class ULightComponent*         Light;
		struct FLinearColor            NewLightColor;
		struct FVector4                NewEmissiveColor;
		int                            LightColorInt;
	} params = {};

	params.Light = Light;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewLightColor != nullptr)
		*NewLightColor = params.NewLightColor;
	if (NewEmissiveColor != nullptr)
		*NewEmissiveColor = params.NewEmissiveColor;
	if (LightColorInt != nullptr)
		*LightColorInt = params.LightColorInt;
}


// Function BP_LightMaster.BP_LightMaster_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_LightMaster_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.UpdateWeatherComponents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_LightMaster_C::UpdateWeatherComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.UpdateWeatherComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_LightMaster_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_LightMaster_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LightMaster.BP_LightMaster_C.ExecuteUbergraph_BP_LightMaster
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_LightMaster_C::ExecuteUbergraph_BP_LightMaster(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMaster.BP_LightMaster_C.ExecuteUbergraph_BP_LightMaster"));

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
