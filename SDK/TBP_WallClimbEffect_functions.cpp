// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_WallClimbEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.HandleVFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         ParticleSystem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInterface*      Decal                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 VFXLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                ParticleRotation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                DecalRotation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_WallClimbEffect_C::HandleVFX(class UObject* WorldContextObject, class UParticleSystem* ParticleSystem, class UMaterialInterface* Decal, const struct FVector& VFXLocation, const struct FRotator& ParticleRotation, const struct FRotator& DecalRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.HandleVFX"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UParticleSystem*         ParticleSystem;
		class UMaterialInterface*      Decal;
		struct FVector                 VFXLocation;
		struct FRotator                ParticleRotation;
		struct FRotator                DecalRotation;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ParticleSystem = ParticleSystem;
	params.Decal = Decal;
	params.VFXLocation = VFXLocation;
	params.ParticleRotation = ParticleRotation;
	params.DecalRotation = DecalRotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.ApplyWithSocket
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   SocketName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_WallClimbEffect_C::ApplyWithSocket(class ATigerCharacter* Character, const struct FName& SocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.ApplyWithSocket"));

	struct
	{
		class ATigerCharacter*         Character;
		struct FName                   SocketName;
	} params = {};

	params.Character = Character;
	params.SocketName = SocketName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.ExecuteUbergraph_TBP_WallClimbEffect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_WallClimbEffect_C::ExecuteUbergraph_TBP_WallClimbEffect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WallClimbEffect.TBP_WallClimbEffect_C.ExecuteUbergraph_TBP_WallClimbEffect"));

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
