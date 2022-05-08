// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HealEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_HealEffect.TBP_HealEffect_C.Apply
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATigerCharacter*         Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_HealEffect_C::Apply(class ATigerCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HealEffect.TBP_HealEffect_C.Apply"));

	struct
	{
		class ATigerCharacter*         Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
