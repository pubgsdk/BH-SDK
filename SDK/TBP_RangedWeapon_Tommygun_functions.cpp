// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Tommygun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RangedWeapon_Tommygun.TBP_RangedWeapon_Tommygun_C.PlayLoopingAkEvents
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InInstigator                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RangedWeapon_Tommygun_C::PlayLoopingAkEvents(class ATigerCharacter* InInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Tommygun.TBP_RangedWeapon_Tommygun_C.PlayLoopingAkEvents"));

	struct
	{
		class ATigerCharacter*         InInstigator;
	} params = {};

	params.InInstigator = InInstigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RangedWeapon_Tommygun.TBP_RangedWeapon_Tommygun_C.OnEndFireAudio
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InInstigator                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RangedWeapon_Tommygun_C::OnEndFireAudio(class ATigerCharacter* InInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Tommygun.TBP_RangedWeapon_Tommygun_C.OnEndFireAudio"));

	struct
	{
		class ATigerCharacter*         InInstigator;
	} params = {};

	params.InInstigator = InInstigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
