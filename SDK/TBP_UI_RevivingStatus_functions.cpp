// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RevivingStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.SetBlockedImageActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Inactive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RevivingStatus_C::SetBlockedImageActive(bool Inactive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.SetBlockedImageActive"));

	struct
	{
		bool                           Inactive;
	} params = {};

	params.Inactive = Inactive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.UpdateLabels
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RevivingStatus_C::UpdateLabels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.UpdateLabels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.UpdateStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RevivingStatus_C::UpdateStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.UpdateStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.GetTextAndColorFromState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   StatusText                     (CPF_Parm, CPF_OutParm)
// struct FLinearColor            ProgressBarColor               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RevivingStatus_C::GetTextAndColorFromState(struct FText* StatusText, struct FLinearColor* ProgressBarColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.GetTextAndColorFromState"));

	struct
	{
		struct FText                   StatusText;
		struct FLinearColor            ProgressBarColor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (StatusText != nullptr)
		*StatusText = params.StatusText;
	if (ProgressBarColor != nullptr)
		*ProgressBarColor = params.ProgressBarColor;
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_RevivingStatus_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RevivingStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.OnLifeStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         NewLifeStatus                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RevivingStatus_C::OnLifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.OnLifeStatusChanged"));

	struct
	{
		ETigerPlayerLifeStatus         NewLifeStatus;
	} params = {};

	params.NewLifeStatus = NewLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.StatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_RevivingStatus_C::StatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.StatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.FadeOutCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RevivingStatus_C::FadeOutCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.FadeOutCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.ExecuteUbergraph_TBP_UI_RevivingStatus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RevivingStatus_C::ExecuteUbergraph_TBP_UI_RevivingStatus(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RevivingStatus.TBP_UI_RevivingStatus_C.ExecuteUbergraph_TBP_UI_RevivingStatus"));

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
