// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Tutorial_IntroText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplayLoreText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ParagraphText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   SubheaderText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   TitleText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           FadeInText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Tutorial_IntroText_C::DisplayLoreText(const struct FText& ParagraphText, const struct FText& SubheaderText, const struct FText& TitleText, bool FadeInText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplayLoreText"));

	struct
	{
		struct FText                   ParagraphText;
		struct FText                   SubheaderText;
		struct FText                   TitleText;
		bool                           FadeInText;
	} params = {};

	params.ParagraphText = ParagraphText;
	params.SubheaderText = SubheaderText;
	params.TitleText = TitleText;
	params.FadeInText = FadeInText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplaySimpleText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           FadeInText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Tutorial_IntroText_C::DisplaySimpleText(const struct FText& Text, bool FadeInText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplaySimpleText"));

	struct
	{
		struct FText                   Text;
		bool                           FadeInText;
	} params = {};

	params.Text = Text;
	params.FadeInText = FadeInText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_FCE6245B4381C41C23D6B9AC1B912BF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_IntroText_C::Finished_FCE6245B4381C41C23D6B9AC1B912BF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_FCE6245B4381C41C23D6B9AC1B912BF8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_EFDB33FC447883CF45686E82D5843F75
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_IntroText_C::Finished_EFDB33FC447883CF45686E82D5843F75()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_EFDB33FC447883CF45686E82D5843F75"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_7806B81B4F37B50F3F03899A74B6E88E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_IntroText_C::Finished_7806B81B4F37B50F3F03899A74B6E88E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_7806B81B4F37B50F3F03899A74B6E88E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.PlayIntro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_IntroText_C::PlayIntro()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.PlayIntro"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.ExecuteUbergraph_TBP_UI_Tutorial_IntroText
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_IntroText_C::ExecuteUbergraph_TBP_UI_Tutorial_IntroText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.ExecuteUbergraph_TBP_UI_Tutorial_IntroText"));

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


// Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.OnIntroComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_IntroText_C::OnIntroComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.OnIntroComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
