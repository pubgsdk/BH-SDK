// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HeadConfiguration_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GetPiercingSlots
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UTigerCharacterMeshManager* InMeshManager                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<struct FString>           InFilter                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FName, struct FTigerCharacterHeadPiercingSocket> OutSlots                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_HeadConfiguration_Master_C::GetPiercingSlots(class UTigerCharacterMeshManager* InMeshManager, TSet<struct FString> InFilter, TMap<struct FName, struct FTigerCharacterHeadPiercingSocket>* OutSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GetPiercingSlots"));

	struct
	{
		class UTigerCharacterMeshManager* InMeshManager;
		TSet<struct FString>           InFilter;
		TMap<struct FName, struct FTigerCharacterHeadPiercingSocket> OutSlots;
	} params = {};

	params.InMeshManager = InMeshManager;
	params.InFilter = InFilter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutSlots != nullptr)
		*OutSlots = params.OutSlots;
}


// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GatherPoseableMeshSetupData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UClass* /*UTBP_PoseableMesh_Master_C*/ Mesh                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<struct FString>           Filter                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FTigerCharacterPoseableMeshBoneSetupData> Data                           (CPF_Parm, CPF_OutParm)

void UTBP_HeadConfiguration_Master_C::GatherPoseableMeshSetupData(class UClass* /*UTBP_PoseableMesh_Master_C*/ Mesh, TSet<struct FString> Filter, TArray<struct FTigerCharacterPoseableMeshBoneSetupData>* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GatherPoseableMeshSetupData"));

	struct
	{
		class UClass* /*UTBP_PoseableMesh_Master_C*/ Mesh;
		TSet<struct FString>           Filter;
		TArray<struct FTigerCharacterPoseableMeshBoneSetupData> Data;
	} params = {};

	params.Mesh = Mesh;
	params.Filter = Filter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPoseableBeard
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UTigerCharacterBeardCustomization* InBeard                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerCharacterMeshManager* InMeshManager                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<struct FString>           InFilter                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_HeadConfiguration_Master_C::SetPoseableBeard(class UTigerCharacterBeardCustomization* InBeard, class UTigerCharacterMeshManager* InMeshManager, TSet<struct FString> InFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPoseableBeard"));

	struct
	{
		class UTigerCharacterBeardCustomization* InBeard;
		class UTigerCharacterMeshManager* InMeshManager;
		TSet<struct FString>           InFilter;
	} params = {};

	params.InBeard = InBeard;
	params.InMeshManager = InMeshManager;
	params.InFilter = InFilter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetEyewearOffset
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UTigerCharacterMeshManager* MeshManager                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_HeadConfiguration_Master_C::SetEyewearOffset(class UTigerCharacterMeshManager* MeshManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetEyewearOffset"));

	struct
	{
		class UTigerCharacterMeshManager* MeshManager;
	} params = {};

	params.MeshManager = MeshManager;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercings
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UTigerCharacterPiercingSetCustomization* InPiercingSet                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerCharacterMeshManager* InMeshManager                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<struct FString>           InFilter                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_HeadConfiguration_Master_C::SetPiercings(class UTigerCharacterPiercingSetCustomization* InPiercingSet, class UTigerCharacterMeshManager* InMeshManager, TSet<struct FString> InFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercings"));

	struct
	{
		class UTigerCharacterPiercingSetCustomization* InPiercingSet;
		class UTigerCharacterMeshManager* InMeshManager;
		TSet<struct FString>           InFilter;
	} params = {};

	params.InPiercingSet = InPiercingSet;
	params.InMeshManager = InMeshManager;
	params.InFilter = InFilter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercingSlotLocationAndRotation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerCharacterMeshManager* InMeshManager                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   InName                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InLocation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                InRotation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_HeadConfiguration_Master_C::SetPiercingSlotLocationAndRotation(class UTigerCharacterMeshManager* InMeshManager, const struct FName& InName, const struct FVector& InLocation, const struct FRotator& InRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercingSlotLocationAndRotation"));

	struct
	{
		class UTigerCharacterMeshManager* InMeshManager;
		struct FName                   InName;
		struct FVector                 InLocation;
		struct FRotator                InRotation;
	} params = {};

	params.InMeshManager = InMeshManager;
	params.InName = InName;
	params.InLocation = InLocation;
	params.InRotation = InRotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.ExecuteUbergraph_TBP_HeadConfiguration_Master
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_HeadConfiguration_Master_C::ExecuteUbergraph_TBP_HeadConfiguration_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.ExecuteUbergraph_TBP_HeadConfiguration_Master"));

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
