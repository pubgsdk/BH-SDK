// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Prompt_ArtifactPickedup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Prompt_ArtifactPickedup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.Tick"));

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


// Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Prompt_ArtifactPickedup_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.PreConstruct"));

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


// Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Prompt_ArtifactPickedup_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_Prompt_ArtifactPickedup_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.OnHidePrompt
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Prompt_ArtifactPickedup_C::OnHidePrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.OnHidePrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.OnArtifactAssetSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerArtifactAsset*     InArtifactAsset                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Prompt_ArtifactPickedup_C::OnArtifactAssetSet(class UTigerArtifactAsset* InArtifactAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.OnArtifactAssetSet"));

	struct
	{
		class UTigerArtifactAsset*     InArtifactAsset;
	} params = {};

	params.InArtifactAsset = InArtifactAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.ExecuteUbergraph_TBP_UI_Prompt_ArtifactPickedup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Prompt_ArtifactPickedup_C::ExecuteUbergraph_TBP_UI_Prompt_ArtifactPickedup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_ArtifactPickedup.TBP_UI_Prompt_ArtifactPickedup_C.ExecuteUbergraph_TBP_UI_Prompt_ArtifactPickedup"));

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
