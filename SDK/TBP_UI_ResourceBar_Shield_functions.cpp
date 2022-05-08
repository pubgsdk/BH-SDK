// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ResourceBar_Shield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ResourceBar_Shield_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnShieldChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InNewHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InNewHealthPercentage          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ResourceBar_Shield_C::OnShieldChanged(float InNewHealth, float InNewHealthPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnShieldChanged"));

	struct
	{
		float                          InNewHealth;
		float                          InNewHealthPercentage;
	} params = {};

	params.InNewHealth = InNewHealth;
	params.InNewHealthPercentage = InNewHealthPercentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.ExecuteUbergraph_TBP_UI_ResourceBar_Shield
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ResourceBar_Shield_C::ExecuteUbergraph_TBP_UI_ResourceBar_Shield(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.ExecuteUbergraph_TBP_UI_ResourceBar_Shield"));

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
