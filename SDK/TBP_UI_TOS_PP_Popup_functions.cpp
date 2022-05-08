// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TOS_PP_Popup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetDeclinePopupTexts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InTitleText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InParagraphText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TOS_PP_Popup_C::SetDeclinePopupTexts(const struct FText& InTitleText, const struct FText& InParagraphText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetDeclinePopupTexts"));

	struct
	{
		struct FText                   InTitleText;
		struct FText                   InParagraphText;
	} params = {};

	params.InTitleText = InTitleText;
	params.InParagraphText = InParagraphText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShouldForceAccept            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InCheckboxRef                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::Init(bool InShouldForceAccept, class UTBP_UI_CheckboxWithClickabelText_C* InCheckboxRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Init"));

	struct
	{
		bool                           InShouldForceAccept;
		class UTBP_UI_CheckboxWithClickabelText_C* InCheckboxRef;
	} params = {};

	params.InShouldForceAccept = InShouldForceAccept;
	params.InCheckboxRef = InCheckboxRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.CloseLicense
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::CloseLicense()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.CloseLicense"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetTermsOfServiceText
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TitleTextTOS                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   LicenceTextTOS                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_TOS_PP_Popup_C::SetTermsOfServiceText(const struct FText& TitleTextTOS, const struct FText& LicenceTextTOS)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetTermsOfServiceText"));

	struct
	{
		struct FText                   TitleTextTOS;
		struct FText                   LicenceTextTOS;
	} params = {};

	params.TitleTextTOS = TitleTextTOS;
	params.LicenceTextTOS = LicenceTextTOS;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ClosePopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::ClosePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ClosePopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowPrivacyPolicy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldCheckCheckbox         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ShowPrivacyPolicy(bool bInShouldCheckCheckbox, class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowPrivacyPolicy"));

	struct
	{
		bool                           bInShouldCheckCheckbox;
		class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef;
	} params = {};

	params.bInShouldCheckCheckbox = bInShouldCheckCheckbox;
	params.InClickableCheckboxCallerRef = InClickableCheckboxCallerRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowTermsOfService
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldCheckCheckbox         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ShowTermsOfService(bool bInShouldCheckCheckbox, class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowTermsOfService"));

	struct
	{
		bool                           bInShouldCheckCheckbox;
		class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef;
	} params = {};

	params.bInShouldCheckCheckbox = bInShouldCheckCheckbox;
	params.InClickableCheckboxCallerRef = InClickableCheckboxCallerRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetPrivacyPolicyText
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TitleTextPP                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   LicenceTextPP                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_TOS_PP_Popup_C::SetPrivacyPolicyText(const struct FText& TitleTextPP, const struct FText& LicenceTextPP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetPrivacyPolicyText"));

	struct
	{
		struct FText                   TitleTextPP;
		struct FText                   LicenceTextPP;
	} params = {};

	params.TitleTextPP = TitleTextPP;
	params.LicenceTextPP = LicenceTextPP;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowNewsletterText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldCheckCheckbox         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ShowNewsletterText(bool bInShouldCheckCheckbox, class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowNewsletterText"));

	struct
	{
		bool                           bInShouldCheckCheckbox;
		class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef;
	} params = {};

	params.bInShouldCheckCheckbox = bInShouldCheckCheckbox;
	params.InClickableCheckboxCallerRef = InClickableCheckboxCallerRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldCheckCheckbox         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ShowKoreaPopup1(bool bInShouldCheckCheckbox, class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup1"));

	struct
	{
		bool                           bInShouldCheckCheckbox;
		class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef;
	} params = {};

	params.bInShouldCheckCheckbox = bInShouldCheckCheckbox;
	params.InClickableCheckboxCallerRef = InClickableCheckboxCallerRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldCheckCheckbox         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ShowKoreaPopup2(bool bInShouldCheckCheckbox, class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup2"));

	struct
	{
		bool                           bInShouldCheckCheckbox;
		class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef;
	} params = {};

	params.bInShouldCheckCheckbox = bInShouldCheckCheckbox;
	params.InClickableCheckboxCallerRef = InClickableCheckboxCallerRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldCheckCheckbox         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ShowKoreaPopup3(bool bInShouldCheckCheckbox, class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup3"));

	struct
	{
		bool                           bInShouldCheckCheckbox;
		class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef;
	} params = {};

	params.bInShouldCheckCheckbox = bInShouldCheckCheckbox;
	params.InClickableCheckboxCallerRef = InClickableCheckboxCallerRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldCheckCheckbox         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ShowKoreaPopup4(bool bInShouldCheckCheckbox, class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup4"));

	struct
	{
		bool                           bInShouldCheckCheckbox;
		class UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef;
	} params = {};

	params.bInShouldCheckCheckbox = bInShouldCheckCheckbox;
	params.InClickableCheckboxCallerRef = InClickableCheckboxCallerRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetNewsletterText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InNewsletterTitle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InNewsletterText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TOS_PP_Popup_C::SetNewsletterText(const struct FText& InNewsletterTitle, const struct FText& InNewsletterText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetNewsletterText"));

	struct
	{
		struct FText                   InNewsletterTitle;
		struct FText                   InNewsletterText;
	} params = {};

	params.InNewsletterTitle = InNewsletterTitle;
	params.InNewsletterText = InNewsletterText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial1Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InSpecial1Title                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InSpecial1Text                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TOS_PP_Popup_C::SetSpecial1Text(const struct FText& InSpecial1Title, const struct FText& InSpecial1Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial1Text"));

	struct
	{
		struct FText                   InSpecial1Title;
		struct FText                   InSpecial1Text;
	} params = {};

	params.InSpecial1Title = InSpecial1Title;
	params.InSpecial1Text = InSpecial1Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial2Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InSpecial2Title                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InSpecial2Text                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TOS_PP_Popup_C::SetSpecial2Text(const struct FText& InSpecial2Title, const struct FText& InSpecial2Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial2Text"));

	struct
	{
		struct FText                   InSpecial2Title;
		struct FText                   InSpecial2Text;
	} params = {};

	params.InSpecial2Title = InSpecial2Title;
	params.InSpecial2Text = InSpecial2Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial3Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InSpecial3Title                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InSpecial3Text                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TOS_PP_Popup_C::SetSpecial3Text(const struct FText& InSpecial3Title, const struct FText& InSpecial3Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial3Text"));

	struct
	{
		struct FText                   InSpecial3Title;
		struct FText                   InSpecial3Text;
	} params = {};

	params.InSpecial3Title = InSpecial3Title;
	params.InSpecial3Text = InSpecial3Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial4Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InSpecial4Title                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InSpecial4Text                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TOS_PP_Popup_C::SetSpecial4Text(const struct FText& InSpecial4Title, const struct FText& InSpecial4Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial4Text"));

	struct
	{
		struct FText                   InSpecial4Title;
		struct FText                   InSpecial4Text;
	} params = {};

	params.InSpecial4Title = InSpecial4Title;
	params.InSpecial4Text = InSpecial4Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.CheckIfScollFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::CheckIfScollFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.CheckIfScollFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature"));

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


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Reset Agree Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::Reset_Agree_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Reset Agree Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_DisagreeButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::BndEvt__TBP_UI_TOS_PP_Popup_DisagreeButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_DisagreeButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowDisagreePopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::ShowDisagreePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowDisagreePopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_CloseButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::BndEvt__TBP_UI_TOS_PP_Popup_CloseButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_CloseButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.AutoClickClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::AutoClickClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.AutoClickClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_TBP_UI_Scrollbox_K2Node_ComponentBoundEvent_4_UserScrolledWithAnalogStick__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TOS_PP_Popup_C::BndEvt__TBP_UI_TOS_PP_Popup_TBP_UI_Scrollbox_K2Node_ComponentBoundEvent_4_UserScrolledWithAnalogStick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_TBP_UI_Scrollbox_K2Node_ComponentBoundEvent_4_UserScrolledWithAnalogStick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ExecuteUbergraph_TBP_UI_TOS_PP_Popup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TOS_PP_Popup_C::ExecuteUbergraph_TBP_UI_TOS_PP_Popup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ExecuteUbergraph_TBP_UI_TOS_PP_Popup"));

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


// Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.OnDecisionMade__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Agreed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TOS_PP_Popup_C::OnDecisionMade__DelegateSignature(bool Agreed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.OnDecisionMade__DelegateSignature"));

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
