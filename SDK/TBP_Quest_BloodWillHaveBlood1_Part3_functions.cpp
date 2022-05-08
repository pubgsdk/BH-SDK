// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Quest_BloodWillHaveBlood1_Part3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Quest_BloodWillHaveBlood1_Part3.TBP_Quest_BloodWillHaveBlood1_Part3_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Quest_BloodWillHaveBlood1_Part3_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Quest_BloodWillHaveBlood1_Part3.TBP_Quest_BloodWillHaveBlood1_Part3_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Quest_BloodWillHaveBlood1_Part3.TBP_Quest_BloodWillHaveBlood1_Part3_C.ExecuteUbergraph_TBP_Quest_BloodWillHaveBlood1_Part3
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Quest_BloodWillHaveBlood1_Part3_C::ExecuteUbergraph_TBP_Quest_BloodWillHaveBlood1_Part3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Quest_BloodWillHaveBlood1_Part3.TBP_Quest_BloodWillHaveBlood1_Part3_C.ExecuteUbergraph_TBP_Quest_BloodWillHaveBlood1_Part3"));

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
