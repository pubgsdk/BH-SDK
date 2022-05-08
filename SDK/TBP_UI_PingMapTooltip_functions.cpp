// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingMapTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.Update Postfix Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInputPrompt*       InInputPrompt                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   NewPostfixText                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_PingMapTooltip_C::Update_Postfix_Text(class UTigerInputPrompt* InInputPrompt, const struct FText& NewPostfixText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.Update Postfix Text"));

	struct
	{
		class UTigerInputPrompt*       InInputPrompt;
		struct FText                   NewPostfixText;
	} params = {};

	params.InInputPrompt = InInputPrompt;
	params.NewPostfixText = NewPostfixText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.AnimateIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingMapTooltip_C::AnimateIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.AnimateIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.UpdatePlayerDistanceText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InDistanceText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_PingMapTooltip_C::UpdatePlayerDistanceText(const struct FText& InDistanceText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.UpdatePlayerDistanceText"));

	struct
	{
		struct FText                   InDistanceText;
	} params = {};

	params.InDistanceText = InDistanceText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.SetPingData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPingClientData*    InPingData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsPingOwner                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PingMapTooltip_C::SetPingData(class UTigerPingClientData* InPingData, bool bInIsPingOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.SetPingData"));

	struct
	{
		class UTigerPingClientData*    InPingData;
		bool                           bInIsPingOwner;
	} params = {};

	params.InPingData = InPingData;
	params.bInIsPingOwner = bInIsPingOwner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.ShowExtendedInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingMapTooltip_C::ShowExtendedInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.ShowExtendedInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.HideExtendedInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PingMapTooltip_C::HideExtendedInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.HideExtendedInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.ExecuteUbergraph_TBP_UI_PingMapTooltip
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingMapTooltip_C::ExecuteUbergraph_TBP_UI_PingMapTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingMapTooltip.TBP_UI_PingMapTooltip_C.ExecuteUbergraph_TBP_UI_PingMapTooltip"));

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
