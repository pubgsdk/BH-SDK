// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Shotgun_DoubleBarreled_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C.OnHitAuthority
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATigerCharacter*         Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RangedWeapon_Shotgun_DoubleBarreled_C::OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C.OnHitAuthority"));

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


// Function TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C.CalculateBulletDirection
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InAimDirection                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState InOutRandomState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// int                            InBulletIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerRangedWeaponComponent* InRangedWeaponComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Shotgun_DoubleBarreled_C::CalculateBulletDirection(const struct FVector& InAimDirection, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent, struct FTigerRangedRandomState* InOutRandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C.CalculateBulletDirection"));

	struct
	{
		struct FVector                 InAimDirection;
		struct FTigerRangedRandomState InOutRandomState;
		int                            InBulletIndex;
		class UTigerRangedWeaponComponent* InRangedWeaponComponent;
		struct FVector                 ReturnValue;
	} params = {};

	params.InAimDirection = InAimDirection;
	params.InBulletIndex = InBulletIndex;
	params.InRangedWeaponComponent = InRangedWeaponComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InOutRandomState != nullptr)
		*InOutRandomState = params.InOutRandomState;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
