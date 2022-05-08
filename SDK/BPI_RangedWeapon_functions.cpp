// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_RangedWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_RangedWeapon.BPI_RangedWeapon_C.GetRangedWeaponCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_RangedWeaponCategories> RangedWeaponCategory           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPI_RangedWeapon_C::GetRangedWeaponCategory(TEnumAsByte<ENUM_RangedWeaponCategories>* RangedWeaponCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_RangedWeapon.BPI_RangedWeapon_C.GetRangedWeaponCategory"));

	struct
	{
		TEnumAsByte<ENUM_RangedWeaponCategories> RangedWeaponCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RangedWeaponCategory != nullptr)
		*RangedWeaponCategory = params.RangedWeaponCategory;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
