// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_MeleeWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_MeleeWeapon.BPI_MeleeWeapon_C.GetMeleeWeaponCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MeleeWeaponCategories> MeleeWeaponCategory            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPI_MeleeWeapon_C::GetMeleeWeaponCategory(TEnumAsByte<ENUM_MeleeWeaponCategories>* MeleeWeaponCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_MeleeWeapon.BPI_MeleeWeapon_C.GetMeleeWeaponCategory"));

	struct
	{
		TEnumAsByte<ENUM_MeleeWeaponCategories> MeleeWeaponCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MeleeWeaponCategory != nullptr)
		*MeleeWeaponCategory = params.MeleeWeaponCategory;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
