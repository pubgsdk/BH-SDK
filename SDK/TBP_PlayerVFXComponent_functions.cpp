// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PlayerVFXComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnCharacterCustomizationChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_PlayerVFXComponent_C::OnCharacterCustomizationChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnCharacterCustomizationChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeEnd
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_PlayerVFXComponent_C::OnHeavyAttackChargeEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeBegin
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_PlayerVFXComponent_C::OnHeavyAttackChargeBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeBegin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnAppearance Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerApperanceChangeReason InReason                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerVFXComponent_C::OnAppearance_Changed(ETigerPlayerApperanceChangeReason InReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnAppearance Changed"));

	struct
	{
		ETigerPlayerApperanceChangeReason InReason;
	} params = {};

	params.InReason = InReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_PlayerVFXComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ExecuteUbergraph_TBP_PlayerVFXComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PlayerVFXComponent_C::ExecuteUbergraph_TBP_PlayerVFXComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ExecuteUbergraph_TBP_PlayerVFXComponent"));

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
