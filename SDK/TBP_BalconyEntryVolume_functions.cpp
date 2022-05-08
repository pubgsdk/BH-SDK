// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BalconyEntryVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BalconyEntryVolume.TBP_BalconyEntryVolume_C.UninheritScaleOnArrow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BalconyEntryVolume_C::UninheritScaleOnArrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BalconyEntryVolume.TBP_BalconyEntryVolume_C.UninheritScaleOnArrow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BalconyEntryVolume.TBP_BalconyEntryVolume_C.ConstructVolume
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   ComponentTag                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BalconyEntryVolume_C::ConstructVolume(const struct FRotator& Rotation, const struct FName& ComponentTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BalconyEntryVolume.TBP_BalconyEntryVolume_C.ConstructVolume"));

	struct
	{
		struct FRotator                Rotation;
		struct FName                   ComponentTag;
	} params = {};

	params.Rotation = Rotation;
	params.ComponentTag = ComponentTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BalconyEntryVolume.TBP_BalconyEntryVolume_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BalconyEntryVolume_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BalconyEntryVolume.TBP_BalconyEntryVolume_C.UserConstructionScript"));

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
