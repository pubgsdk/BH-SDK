// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AshPile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_AshPile_C::Timeline_AshPileScaleIn__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_AshPile_C::Timeline_AshPileScaleIn__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AshPile.TBP_AshPile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_AshPile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AshPile.TBP_AshPile_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AshPile.TBP_AshPile_C.ExecuteUbergraph_TBP_AshPile
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AshPile_C::ExecuteUbergraph_TBP_AshPile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AshPile.TBP_AshPile_C.ExecuteUbergraph_TBP_AshPile"));

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
