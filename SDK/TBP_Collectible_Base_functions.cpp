// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Collectible_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Collectible_Base.TBP_Collectible_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Collectible_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Collectible_Base.TBP_Collectible_Base_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Collectible_Base.TBP_Collectible_Base_C.ExecuteUbergraph_TBP_Collectible_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Collectible_Base_C::ExecuteUbergraph_TBP_Collectible_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Collectible_Base.TBP_Collectible_Base_C.ExecuteUbergraph_TBP_Collectible_Base"));

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
