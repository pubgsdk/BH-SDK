// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Electronics_Storefront_03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Electronics_Storefront_03.BP_Electronics_Storefront_03_C.NewFunction_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ListLenght                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Seedoffset                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Int_Out                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Electronics_Storefront_03_C::NewFunction_1(int ListLenght, int Seedoffset, int* Int_Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Electronics_Storefront_03.BP_Electronics_Storefront_03_C.NewFunction_1"));

	struct
	{
		int                            ListLenght;
		int                            Seedoffset;
		int                            Int_Out;
	} params = {};

	params.ListLenght = ListLenght;
	params.Seedoffset = Seedoffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Int_Out != nullptr)
		*Int_Out = params.Int_Out;
}


// Function BP_Electronics_Storefront_03.BP_Electronics_Storefront_03_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Electronics_Storefront_03_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Electronics_Storefront_03.BP_Electronics_Storefront_03_C.UserConstructionScript"));

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
