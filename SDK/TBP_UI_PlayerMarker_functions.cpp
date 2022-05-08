// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Tick"));

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


// Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.OnIsOnMinimapIsSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnMinimap                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PlayerMarker_C::OnIsOnMinimapIsSet(bool bInIsOnMinimap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.OnIsOnMinimapIsSet"));

	struct
	{
		bool                           bInIsOnMinimap;
	} params = {};

	params.bInIsOnMinimap = bInIsOnMinimap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.On Masquerade Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsMasqueradeBreached         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerAIPlayerAction           InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerMarker_C::On_Masquerade_Changed(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.On Masquerade Changed"));

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


// Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.SetGroupPlayerIndex
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  InPlayerIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerMarker_C::SetGroupPlayerIndex(unsigned char InPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.SetGroupPlayerIndex"));

	struct
	{
		unsigned char                  InPlayerIndex;
	} params = {};

	params.InPlayerIndex = InPlayerIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.ExecuteUbergraph_TBP_UI_PlayerMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerMarker_C::ExecuteUbergraph_TBP_UI_PlayerMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.ExecuteUbergraph_TBP_UI_PlayerMarker"));

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
