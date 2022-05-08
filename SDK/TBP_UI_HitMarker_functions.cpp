// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_HitMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.IsShown
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bOutIsShown                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_HitMarker_C::IsShown(bool* bOutIsShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.IsShown"));

	struct
	{
		bool                           bOutIsShown;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bOutIsShown != nullptr)
		*bOutIsShown = params.bOutIsShown;
}


// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ShowHitMarker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            In_Hit_Marker_Color            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bPlayerWasDownedOrKilled       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_HitMarker_C::ShowHitMarker(const struct FLinearColor& In_Hit_Marker_Color, bool bPlayerWasDownedOrKilled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ShowHitMarker"));

	struct
	{
		struct FLinearColor            In_Hit_Marker_Color;
		bool                           bPlayerWasDownedOrKilled;
	} params = {};

	params.In_Hit_Marker_Color = In_Hit_Marker_Color;
	params.bPlayerWasDownedOrKilled = bPlayerWasDownedOrKilled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HitMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Tick"));

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


// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_HitMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ExecuteUbergraph_TBP_UI_HitMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HitMarker_C::ExecuteUbergraph_TBP_UI_HitMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ExecuteUbergraph_TBP_UI_HitMarker"));

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
