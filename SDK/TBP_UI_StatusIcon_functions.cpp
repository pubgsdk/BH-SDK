// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StatusIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InMasqueradeBroken             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerAIPlayerAction           InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusIcon_C::OnMasqueradeStateUpdated(bool InMasqueradeBroken, ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateUpdated"));

	struct
	{
		bool                           InMasqueradeBroken;
		ETigerAIPlayerAction           InPlayerAction;
	} params = {};

	params.InMasqueradeBroken = InMasqueradeBroken;
	params.InPlayerAction = InPlayerAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetStatusIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETBE_StatusIcon>   InStatusIcon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusIcon_C::SetStatusIcon(TEnumAsByte<ETBE_StatusIcon> InStatusIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetStatusIcon"));

	struct
	{
		TEnumAsByte<ETBE_StatusIcon>   InStatusIcon;
	} params = {};

	params.InStatusIcon = InStatusIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.UpdateActiveStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_StatusIcon_C::UpdateActiveStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.UpdateActiveStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnReviveStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InReviveActive                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InIsTarget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StatusIcon_C::OnReviveStateChanged(bool InReviveActive, bool InIsTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnReviveStateChanged"));

	struct
	{
		bool                           InReviveActive;
		bool                           InIsTarget;
	} params = {};

	params.InReviveActive = InReviveActive;
	params.InIsTarget = InIsTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnDiablerizeStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InDiablerizeActive             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InIsTarget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StatusIcon_C::OnDiablerizeStateChanged(bool InDiablerizeActive, bool InIsTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnDiablerizeStateChanged"));

	struct
	{
		bool                           InDiablerizeActive;
		bool                           InIsTarget;
	} params = {};

	params.InDiablerizeActive = InDiablerizeActive;
	params.InIsTarget = InIsTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InMasqueradeBroken             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerAIPlayerAction           InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusIcon_C::OnMasqueradeStateChanged(bool InMasqueradeBroken, ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateChanged"));

	struct
	{
		bool                           InMasqueradeBroken;
		ETigerAIPlayerAction           InPlayerAction;
	} params = {};

	params.InMasqueradeBroken = InMasqueradeBroken;
	params.InPlayerAction = InPlayerAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetPawn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   InPawn                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusIcon_C::SetPawn(class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetPawn"));

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


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StatusIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.PreConstruct"));

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


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.ExecuteUbergraph_TBP_UI_StatusIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusIcon_C::ExecuteUbergraph_TBP_UI_StatusIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.ExecuteUbergraph_TBP_UI_StatusIcon"));

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


// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnStatusIconChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETBE_StatusIcon>   InNewStatusIcon                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusIcon_C::OnStatusIconChanged__DelegateSignature(TEnumAsByte<ETBE_StatusIcon> InNewStatusIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnStatusIconChanged__DelegateSignature"));

	struct
	{
		TEnumAsByte<ETBE_StatusIcon>   InNewStatusIcon;
	} params = {};

	params.InNewStatusIcon = InNewStatusIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
