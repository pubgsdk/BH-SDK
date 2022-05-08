// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PsoCachingDX12_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.OnProgressUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          InPercentageCompleted          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PsoCachingDX12_C::OnProgressUpdated(float InPercentageCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.OnProgressUpdated"));

	struct
	{
		float                          InPercentageCompleted;
	} params = {};

	params.InPercentageCompleted = InPercentageCompleted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PsoCachingDX12_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.ExecuteUbergraph_TBP_UI_PsoCachingDX12
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PsoCachingDX12_C::ExecuteUbergraph_TBP_UI_PsoCachingDX12(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.ExecuteUbergraph_TBP_UI_PsoCachingDX12"));

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
