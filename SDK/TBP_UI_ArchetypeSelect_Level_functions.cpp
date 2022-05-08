// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ArchetypeSelect_Level_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ArchetypeSelect_Level.TBP_UI_ArchetypeSelect_Level_C.HideWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeSelect_Level_C::HideWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeSelect_Level.TBP_UI_ArchetypeSelect_Level_C.HideWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeSelect_Level.TBP_UI_ArchetypeSelect_Level_C.SetLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             Archetype                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypeSelect_Level_C::SetLevel(ETigerPowerKitType Archetype)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeSelect_Level.TBP_UI_ArchetypeSelect_Level_C.SetLevel"));

	struct
	{
		ETigerPowerKitType             Archetype;
	} params = {};

	params.Archetype = Archetype;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
