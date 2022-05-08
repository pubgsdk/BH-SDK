// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MapOverlayUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.ShouldShowBloodVeinTrack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_MapOverlayUI_C::ShouldShowBloodVeinTrack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.ShouldShowBloodVeinTrack"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.UpdateMapIncenseLineOld
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapOverlayUI_C::UpdateMapIncenseLineOld()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.UpdateMapIncenseLineOld"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.ToMapTextureSpace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               ZeroToOneSpace                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector2D UTBP_UI_MapOverlayUI_C::ToMapTextureSpace(const struct FVector2D& ZeroToOneSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.ToMapTextureSpace"));

	struct
	{
		struct FVector2D               ZeroToOneSpace;
		struct FVector2D               ReturnValue;
	} params = {};

	params.ZeroToOneSpace = ZeroToOneSpace;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.InitializeMapMarkers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerMapMarkerWidget*/ InRestrictToClass              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInFadeIn                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MapOverlayUI_C::InitializeMapMarkers(class UClass* /*UTigerMapMarkerWidget*/ InRestrictToClass, bool bInFadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.InitializeMapMarkers"));

	struct
	{
		class UClass* /*UTigerMapMarkerWidget*/ InRestrictToClass;
		bool                           bInFadeIn;
	} params = {};

	params.InRestrictToClass = InRestrictToClass;
	params.bInFadeIn = bInFadeIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapOverlayUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.Tick"));

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


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MapOverlayUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MapOverlayUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.PreConstruct"));

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


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.OnMasqueradeStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsMasqueradeBreached         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerAIPlayerAction           InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapOverlayUI_C::OnMasqueradeStateChanged(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.OnMasqueradeStateChanged"));

	struct
	{
		bool                           InIsMasqueradeBreached;
		ETigerAIPlayerAction           InPlayerAction;
	} params = {};

	params.InIsMasqueradeBreached = InIsMasqueradeBreached;
	params.InPlayerAction = InPlayerAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.ExecuteUbergraph_TBP_UI_MapOverlayUI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapOverlayUI_C::ExecuteUbergraph_TBP_UI_MapOverlayUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C.ExecuteUbergraph_TBP_UI_MapOverlayUI"));

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
