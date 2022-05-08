// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TrafficSigns_DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TrafficSigns_DataInterface.BP_TrafficSigns_DataInterface_C.GetMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrafficSigns_DataInterface_C::GetMesh(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrafficSigns_DataInterface.BP_TrafficSigns_DataInterface_C.GetMesh"));

	struct
	{
		int                            InIndex;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
