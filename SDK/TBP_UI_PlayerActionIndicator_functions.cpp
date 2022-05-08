// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerActionIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SwitchPersistentState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETBE_StatusBackground> InState                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::SwitchPersistentState(TEnumAsByte<ETBE_StatusBackground> InState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SwitchPersistentState"));

	struct
	{
		TEnumAsByte<ETBE_StatusBackground> InState;
	} params = {};

	params.InState = InState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.TriggerOneShotState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InTexture                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        InAnimation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::TriggerOneShotState(class UTexture2D* InTexture, class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.TriggerOneShotState"));

	struct
	{
		class UTexture2D*              InTexture;
		class UWidgetAnimation*        InAnimation;
	} params = {};

	params.InTexture = InTexture;
	params.InAnimation = InAnimation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.UpdateActiveStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerActionIndicator_C::UpdateActiveStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.UpdateActiveStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnBuffChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              InBuff                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InID                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InDuration                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::OnBuffChanged(class UTigerBuff* InBuff, int InID, float InDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnBuffChanged"));

	struct
	{
		class UTigerBuff*              InBuff;
		int                            InID;
		float                          InDuration;
	} params = {};

	params.InBuff = InBuff;
	params.InID = InID;
	params.InDuration = InDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStoppedFeeding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InWasAttacked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATigerCharacter*         InNPCFedOn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::OnStoppedFeeding(bool InWasAttacked, class ATigerCharacter* InNPCFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStoppedFeeding"));

	struct
	{
		bool                           InWasAttacked;
		class ATigerCharacter*         InNPCFedOn;
	} params = {};

	params.InWasAttacked = InWasAttacked;
	params.InNPCFedOn = InNPCFedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStartedFeeding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InTravelTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::OnStartedFeeding(float InTravelTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStartedFeeding"));

	struct
	{
		float                          InTravelTime;
	} params = {};

	params.InTravelTime = InTravelTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnPlayerAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerCharacterAction          InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::OnPlayerAction(ETigerCharacterAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnPlayerAction"));

	struct
	{
		ETigerCharacterAction          InPlayerAction;
	} params = {};

	params.InPlayerAction = InPlayerAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnHealthChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InOldHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InNewHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnHealthChanged"));

	struct
	{
		class ATigerPlayer*            InPlayer;
		float                          InOldHealth;
		float                          InNewHealth;
	} params = {};

	params.InPlayer = InPlayer;
	params.InOldHealth = InOldHealth;
	params.InNewHealth = InNewHealth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SetPawn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   InPawn                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::SetPawn(class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SetPawn"));

	struct
	{
		class APawn*                   InPawn;
	} params = {};

	params.InPawn = InPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PlayerActionIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PlayerActionIndicator_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.ExecuteUbergraph_TBP_UI_PlayerActionIndicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerActionIndicator_C::ExecuteUbergraph_TBP_UI_PlayerActionIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.ExecuteUbergraph_TBP_UI_PlayerActionIndicator"));

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
