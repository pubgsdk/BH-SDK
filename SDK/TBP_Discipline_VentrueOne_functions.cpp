// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Discipline_VentrueOne_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Discipline_VentrueOne.TBP_Discipline_VentrueOne_C.OnHitCharacter
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Discipline_VentrueOne_C::OnHitCharacter(class ATigerCharacter* InCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Discipline_VentrueOne.TBP_Discipline_VentrueOne_C.OnHitCharacter"));

	struct
	{
		class ATigerCharacter*         InCharacter;
	} params = {};

	params.InCharacter = InCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Discipline_VentrueOne.TBP_Discipline_VentrueOne_C.ExecuteUbergraph_TBP_Discipline_VentrueOne
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Discipline_VentrueOne_C::ExecuteUbergraph_TBP_Discipline_VentrueOne(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Discipline_VentrueOne.TBP_Discipline_VentrueOne_C.ExecuteUbergraph_TBP_Discipline_VentrueOne"));

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
