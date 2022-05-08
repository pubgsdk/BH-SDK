// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_500Magnum_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RangedWeapon_500Magnum.TBP_RangedWeapon_500Magnum_C.OnHitAuthority
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATigerCharacter*         Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RangedWeapon_500Magnum_C::OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_500Magnum.TBP_RangedWeapon_500Magnum_C.OnHitAuthority"));

	struct
	{
		class ATigerCharacter*         Instigator;
		class ATigerCharacter*         Target;
	} params = {};

	params.Instigator = Instigator;
	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
