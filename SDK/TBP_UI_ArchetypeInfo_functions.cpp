// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ArchetypeInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.SetCharacterArchetype
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPowerKit*          DesiredArchetype               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypeInfo_C::SetCharacterArchetype(class UTigerPowerKit* DesiredArchetype)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.SetCharacterArchetype"));

	struct
	{
		class UTigerPowerKit*          DesiredArchetype;
	} params = {};

	params.DesiredArchetype = DesiredArchetype;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.UpdateClanInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypeInfo_C::UpdateClanInfo(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.UpdateClanInfo"));

	struct
	{
		class UTigerPowerKit*          InArchetypeData;
	} params = {};

	params.InArchetypeData = InArchetypeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ChangeClan
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPlayerClanData*    ClanData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bAnimateChange                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTigerPowerKit*          ArchetypeData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypeInfo_C::ChangeClan(class UTigerPlayerClanData* ClanData, bool bAnimateChange, class UTigerPowerKit* ArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ChangeClan"));

	struct
	{
		class UTigerPlayerClanData*    ClanData;
		bool                           bAnimateChange;
		class UTigerPowerKit*          ArchetypeData;
	} params = {};

	params.ClanData = ClanData;
	params.bAnimateChange = bAnimateChange;
	params.ArchetypeData = ArchetypeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ArchetypeInfo_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.PreConstruct"));

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


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.Toggle UI Visibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeInfo_C::Toggle_UI_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.Toggle UI Visibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeInfo_C::WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeInfo_C::BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeInfo_C::BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.StopVideo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeInfo_C::StopVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.StopVideo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ExecuteUbergraph_TBP_UI_ArchetypeInfo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypeInfo_C::ExecuteUbergraph_TBP_UI_ArchetypeInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ExecuteUbergraph_TBP_UI_ArchetypeInfo"));

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


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoEnded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeInfo_C::OnVideoEnded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoEnded__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeInfo_C::OnVideoStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoStarted__DelegateSignature"));

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
