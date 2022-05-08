// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_LicenseAgreement_Popup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.CloseLicense
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LicenseAgreement_Popup_C::CloseLicense()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.CloseLicense"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ShowPopup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   LicenceText                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_LicenseAgreement_Popup_C::ShowPopup(const struct FText& TitleText, const struct FText& LicenceText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ShowPopup"));

	struct
	{
		struct FText                   TitleText;
		struct FText                   LicenceText;
	} params = {};

	params.TitleText = TitleText;
	params.LicenceText = LicenceText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LicenseAgreement_Popup_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LicenseAgreement_Popup_C::BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ClosePopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LicenseAgreement_Popup_C::ClosePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ClosePopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LicenseAgreement_Popup_C::BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature"));

	struct
	{
		float                          CurrentOffset;
	} params = {};

	params.CurrentOffset = CurrentOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.Reset Agree Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LicenseAgreement_Popup_C::Reset_Agree_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.Reset Agree Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.CheckIfScollFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LicenseAgreement_Popup_C::CheckIfScollFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.CheckIfScollFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__TBP_UI_LicenseAgreement_Popup_TBP_UI_Scrollbox_K2Node_ComponentBoundEvent_3_UserScrolledWithAnalogStick__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_LicenseAgreement_Popup_C::BndEvt__TBP_UI_LicenseAgreement_Popup_TBP_UI_Scrollbox_K2Node_ComponentBoundEvent_3_UserScrolledWithAnalogStick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__TBP_UI_LicenseAgreement_Popup_TBP_UI_Scrollbox_K2Node_ComponentBoundEvent_3_UserScrolledWithAnalogStick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ExecuteUbergraph_TBP_UI_LicenseAgreement_Popup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LicenseAgreement_Popup_C::ExecuteUbergraph_TBP_UI_LicenseAgreement_Popup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ExecuteUbergraph_TBP_UI_LicenseAgreement_Popup"));

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


// Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.OnDecisionMade__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Agreed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LicenseAgreement_Popup_C::OnDecisionMade__DelegateSignature(bool Agreed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.OnDecisionMade__DelegateSignature"));

	struct
	{
		bool                           Agreed;
	} params = {};

	params.Agreed = Agreed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
