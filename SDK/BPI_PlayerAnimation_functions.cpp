// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_PlayerAnimation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_PlayerAnimation.BPI_PlayerAnimation_C.GetWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  OutWeapon                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USkeletalMeshComponent*  OutSecondWeapon                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPI_PlayerAnimation_C::GetWeapon(class USkeletalMeshComponent** OutWeapon, class USkeletalMeshComponent** OutSecondWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_PlayerAnimation.BPI_PlayerAnimation_C.GetWeapon"));

	struct
	{
		class USkeletalMeshComponent*  OutWeapon;
		class USkeletalMeshComponent*  OutSecondWeapon;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutWeapon != nullptr)
		*OutWeapon = params.OutWeapon;
	if (OutSecondWeapon != nullptr)
		*OutSecondWeapon = params.OutSecondWeapon;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
