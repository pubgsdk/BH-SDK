// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Quest_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Quest_Base.TBP_Quest_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Quest_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Quest_Base.TBP_Quest_Base_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Quest_Base.TBP_Quest_Base_C.ExecuteUbergraph_TBP_Quest_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Quest_Base_C::ExecuteUbergraph_TBP_Quest_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Quest_Base.TBP_Quest_Base_C.ExecuteUbergraph_TBP_Quest_Base"));

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
