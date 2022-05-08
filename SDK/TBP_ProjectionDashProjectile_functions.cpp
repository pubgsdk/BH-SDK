// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ProjectionDashProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.CreateWorldIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  InPlayerController             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ProjectionDashProjectile_C::CreateWorldIcon(class ATigerPlayerController* InPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.CreateWorldIcon"));

	struct
	{
		class ATigerPlayerController*  InPlayerController;
	} params = {};

	params.InPlayerController = InPlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileStopped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ProjectionDashProjectile_C::OnProjectileStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileStopped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileDeath
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ProjectionDashProjectile_C::OnProjectileDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ProjectionDashProjectile_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ProjectionDashProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ExecuteUbergraph_TBP_ProjectionDashProjectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ProjectionDashProjectile_C::ExecuteUbergraph_TBP_ProjectionDashProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ExecuteUbergraph_TBP_ProjectionDashProjectile"));

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
