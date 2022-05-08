// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Shotgun_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.Demo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 AimDirection                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NoiseMagnitudeInDegrees        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutDirection                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RangedWeapon_Shotgun_Master_C::Demo(const struct FVector& AimDirection, int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, float NoiseMagnitudeInDegrees, struct FTigerRangedRandomState* RandomState, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.Demo"));

	struct
	{
		struct FVector                 AimDirection;
		struct FTigerRangedRandomState RandomState;
		int                            BulletIndex;
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		float                          NoiseMagnitudeInDegrees;
		struct FVector                 OutDirection;
	} params = {};

	params.AimDirection = AimDirection;
	params.BulletIndex = BulletIndex;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.NoiseMagnitudeInDegrees = NoiseMagnitudeInDegrees;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;
	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.CalculateBulletDirection
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InAimDirection                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState InOutRandomState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// int                            InBulletIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerRangedWeaponComponent* InRangedWeaponComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Shotgun_Master_C::CalculateBulletDirection(const struct FVector& InAimDirection, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent, struct FTigerRangedRandomState* InOutRandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.CalculateBulletDirection"));

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
