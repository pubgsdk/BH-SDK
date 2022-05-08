// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TigerCore.TigerAnimationFilter.UpdateFilter
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UTigerAnimationFilter::UpdateFilter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerCore.TigerAnimationFilter.UpdateFilter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TigerCore.TigerAnimMetaDataAsset.GetMetaData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   InName                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMetaData*           ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimMetaData* UTigerAnimMetaDataAsset::GetMetaData(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerCore.TigerAnimMetaDataAsset.GetMetaData"));

	struct
	{
		struct FName                   InName;
		class UAnimMetaData*           ReturnValue;
	} params = {};

	params.InName = InName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
