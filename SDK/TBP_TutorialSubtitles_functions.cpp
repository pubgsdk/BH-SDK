// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TutorialSubtitles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.SetSubText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SubText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_TutorialSubtitles_C::SetSubText(const struct FText& SubText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.SetSubText"));

	struct
	{
		struct FText                   SubText;
	} params = {};

	params.SubText = SubText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.GetText_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_TutorialSubtitles_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.GetText_2"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_TutorialSubtitles_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.GetText_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.Get_WorldMarker_ColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UTBP_TutorialSubtitles_C::Get_WorldMarker_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.Get_WorldMarker_ColorAndOpacity_1"));

	struct
	{
		struct FLinearColor            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TutorialSubtitles_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.ExecuteUbergraph_TBP_TutorialSubtitles
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TutorialSubtitles_C::ExecuteUbergraph_TBP_TutorialSubtitles(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialSubtitles.TBP_TutorialSubtitles_C.ExecuteUbergraph_TBP_TutorialSubtitles"));

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
