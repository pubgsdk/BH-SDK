// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Cursor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Cursor.TBP_UI_Cursor_C.FixCursorHotspot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Cursor_C::FixCursorHotspot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Cursor.TBP_UI_Cursor_C.FixCursorHotspot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Cursor.TBP_UI_Cursor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Cursor_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Cursor.TBP_UI_Cursor_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Cursor.TBP_UI_Cursor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Cursor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Cursor.TBP_UI_Cursor_C.Tick"));

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


// Function TBP_UI_Cursor.TBP_UI_Cursor_C.SetRenderOpacityForDuration
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InTime                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InOpacity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Cursor_C::SetRenderOpacityForDuration(float InTime, float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Cursor.TBP_UI_Cursor_C.SetRenderOpacityForDuration"));

	struct
	{
		float                          InTime;
		float                          InOpacity;
	} params = {};

	params.InTime = InTime;
	params.InOpacity = InOpacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Cursor.TBP_UI_Cursor_C.On Use GamePad Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewIsProbablyUsingGamepad     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Cursor_C::On_Use_GamePad_Changed(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Cursor.TBP_UI_Cursor_C.On Use GamePad Changed"));

	struct
	{
		bool                           bNewIsProbablyUsingGamepad;
	} params = {};

	params.bNewIsProbablyUsingGamepad = bNewIsProbablyUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Cursor.TBP_UI_Cursor_C.ExecuteUbergraph_TBP_UI_Cursor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Cursor_C::ExecuteUbergraph_TBP_UI_Cursor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Cursor.TBP_UI_Cursor_C.ExecuteUbergraph_TBP_UI_Cursor"));

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
