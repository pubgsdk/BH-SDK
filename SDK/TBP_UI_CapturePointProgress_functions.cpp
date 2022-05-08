// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CapturePointProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.SetTextAndColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CapturePointProgress_C::SetTextAndColor(const struct FText& Text, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.SetTextAndColor"));

	struct
	{
		struct FText                   Text;
		struct FLinearColor            Color;
	} params = {};

	params.Text = Text;
	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.StatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_CapturePointProgress_C::StatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.StatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CapturePointProgress_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CapturePointProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.Tick"));

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


// Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.OnCapturePointEnabled
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CapturePointProgress_C::OnCapturePointEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.OnCapturePointEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.ExecuteUbergraph_TBP_UI_CapturePointProgress
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CapturePointProgress_C::ExecuteUbergraph_TBP_UI_CapturePointProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CapturePointProgress.TBP_UI_CapturePointProgress_C.ExecuteUbergraph_TBP_UI_CapturePointProgress"));

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
