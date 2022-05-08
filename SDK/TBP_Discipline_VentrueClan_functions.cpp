// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Discipline_VentrueClan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Discipline_VentrueClan.TBP_Discipline_VentrueClan_C.OnDamageMitigatedCosmetic
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_Discipline_VentrueClan_C::OnDamageMitigatedCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Discipline_VentrueClan.TBP_Discipline_VentrueClan_C.OnDamageMitigatedCosmetic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Discipline_VentrueClan.TBP_Discipline_VentrueClan_C.ExecuteUbergraph_TBP_Discipline_VentrueClan
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Discipline_VentrueClan_C::ExecuteUbergraph_TBP_Discipline_VentrueClan(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Discipline_VentrueClan.TBP_Discipline_VentrueClan_C.ExecuteUbergraph_TBP_Discipline_VentrueClan"));

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
