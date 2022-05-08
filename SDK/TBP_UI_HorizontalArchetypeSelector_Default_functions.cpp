// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_HorizontalArchetypeSelector_Default_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.HideArchetypeLevels
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_HorizontalArchetypeSelector_Default_C::HideArchetypeLevels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.HideArchetypeLevels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.UpdateArchetypeLevels
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_HorizontalArchetypeSelector_Default_C::UpdateArchetypeLevels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.UpdateArchetypeLevels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.CreateWidgetForArchetype
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UUserWidget* UTBP_UI_HorizontalArchetypeSelector_Default_C::CreateWidgetForArchetype(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C.CreateWidgetForArchetype"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
		class UUserWidget*             ReturnValue;
	} params = {};

	params.InArchetypeType = InArchetypeType;

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
