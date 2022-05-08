// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RooftopVents_01_DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RooftopVents_01_DataInterface.BP_RooftopVents_01_DataInterface_C.GetConfiguration
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Configuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UStaticMesh*>     Meshes                         (CPF_Parm, CPF_OutParm)
// TArray<struct FTransform>      Transforms                     (CPF_Parm, CPF_OutParm)

void UBP_RooftopVents_01_DataInterface_C::GetConfiguration(int Configuration, TArray<class UStaticMesh*>* Meshes, TArray<struct FTransform>* Transforms)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RooftopVents_01_DataInterface.BP_RooftopVents_01_DataInterface_C.GetConfiguration"));

	struct
	{
		int                            Configuration;
		TArray<class UStaticMesh*>     Meshes;
		TArray<struct FTransform>      Transforms;
	} params = {};

	params.Configuration = Configuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
	if (Transforms != nullptr)
		*Transforms = params.Transforms;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
