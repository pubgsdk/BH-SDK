// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MapUnderlayUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.ToMapTextureSpace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               ZeroToOneSpace                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector2D UTBP_UI_MapUnderlayUI_C::ToMapTextureSpace(const struct FVector2D& ZeroToOneSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.ToMapTextureSpace"));

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


// Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapUnderlayUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.Tick"));

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


// Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MapUnderlayUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.OnMasqueradeStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsMasqueradeBreached         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerAIPlayerAction           InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapUnderlayUI_C::OnMasqueradeStateChanged(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.OnMasqueradeStateChanged"));

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


// Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.ExecuteUbergraph_TBP_UI_MapUnderlayUI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapUnderlayUI_C::ExecuteUbergraph_TBP_UI_MapUnderlayUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapUnderlayUI.TBP_UI_MapUnderlayUI_C.ExecuteUbergraph_TBP_UI_MapUnderlayUI"));

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
