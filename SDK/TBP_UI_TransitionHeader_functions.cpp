// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InSubText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TransitionHeader_C::SetText(const struct FText& InText, const struct FText& InSubText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetText"));

	struct
	{
		struct FText                   InText;
		struct FText                   InSubText;
	} params = {};

	params.InText = InText;
	params.InSubText = InSubText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHeader_C::TriggerAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetTextWithHeaderType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InSubText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<ETigerHeaderType>  InHeaderType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionHeader_C::SetTextWithHeaderType(const struct FText& InText, const struct FText& InSubText, TEnumAsByte<ETigerHeaderType> InHeaderType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetTextWithHeaderType"));

	struct
	{
		struct FText                   InText;
		struct FText                   InSubText;
		TEnumAsByte<ETigerHeaderType>  InHeaderType;
	} params = {};

	params.InText = InText;
	params.InSubText = InSubText;
	params.InHeaderType = InHeaderType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.InitializeEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHeader_C::InitializeEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.InitializeEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionHeader_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Tick"));

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


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHeader_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimationWithDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHeader_C::TriggerAnimationWithDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimationWithDelay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TransitionHeader_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.PreConstruct"));

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


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_TransitionHeader_C::WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Play Header Animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsReversed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TransitionHeader_C::Play_Header_Animation(bool IsReversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Play Header Animation"));

	struct
	{
		bool                           IsReversed;
	} params = {};

	params.IsReversed = IsReversed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.ExecuteUbergraph_TBP_UI_TransitionHeader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionHeader_C::ExecuteUbergraph_TBP_UI_TransitionHeader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.ExecuteUbergraph_TBP_UI_TransitionHeader"));

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


// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.OnInAnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionHeader_C::OnInAnimationFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.OnInAnimationFinished__DelegateSignature"));

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
