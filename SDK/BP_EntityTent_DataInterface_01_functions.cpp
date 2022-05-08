// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EntityTent_DataInterface_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EntityTent_DataInterface_01.BP_EntityTent_DataInterface_01_C.GetTentMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TentNr                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             Static_Mesh                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_EntityTent_DataInterface_01_C::GetTentMesh(int TentNr, class UStaticMesh** Static_Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_EntityTent_DataInterface_01.BP_EntityTent_DataInterface_01_C.GetTentMesh"));

	struct
	{
		int                            TentNr;
		class UStaticMesh*             Static_Mesh;
	} params = {};

	params.TentNr = TentNr;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Static_Mesh != nullptr)
		*Static_Mesh = params.Static_Mesh;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
