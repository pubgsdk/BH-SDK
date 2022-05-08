// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PingBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PingBase.TBP_PingBase_C.GetNotificationVoiceAudioEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UAkAudioEvent*           OutAudioEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_PingBase_C::GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingBase.TBP_PingBase_C.GetNotificationVoiceAudioEvent"));

	struct
	{
		struct FTigerPingContext       InContext;
		class UAkAudioEvent*           OutAudioEvent;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAudioEvent != nullptr)
		*OutAudioEvent = params.OutAudioEvent;
}


// Function TBP_PingBase.TBP_PingBase_C.GetCancelPingText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InPingContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FText                   Return_Value_Ping_Cancel_Text  (CPF_Parm, CPF_OutParm)
// struct FTigerPingIconData      Return_Value_Ping_Icon         (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UTBP_PingBase_C::GetCancelPingText(const struct FTigerPingContext& InPingContext, struct FText* Return_Value_Ping_Cancel_Text, struct FTigerPingIconData* Return_Value_Ping_Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingBase.TBP_PingBase_C.GetCancelPingText"));

	struct
	{
		struct FTigerPingContext       InPingContext;
		struct FText                   Return_Value_Ping_Cancel_Text;
		struct FTigerPingIconData      Return_Value_Ping_Icon;
	} params = {};

	params.InPingContext = InPingContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value_Ping_Cancel_Text != nullptr)
		*Return_Value_Ping_Cancel_Text = params.Return_Value_Ping_Cancel_Text;
	if (Return_Value_Ping_Icon != nullptr)
		*Return_Value_Ping_Icon = params.Return_Value_Ping_Icon;
}


// Function TBP_PingBase.TBP_PingBase_C.GetStandardResponseText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bInIsInterested                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InPingName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UTBP_PingBase_C::GetStandardResponseText(bool bInIsInterested, const struct FText& InPingName, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingBase.TBP_PingBase_C.GetStandardResponseText"));

	struct
	{
		bool                           bInIsInterested;
		struct FText                   InPingName;
		struct FText                   Result;
	} params = {};

	params.bInIsInterested = bInIsInterested;
	params.InPingName = InPingName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TBP_PingBase.TBP_PingBase_C.GetResponseText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// bool                           bInIsInterested                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPingNotificationUIData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTigerPingNotificationUIData UTBP_PingBase_C::GetResponseText(const struct FTigerPingContext& InContext, bool bInIsInterested)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingBase.TBP_PingBase_C.GetResponseText"));

	struct
	{
		struct FTigerPingContext       InContext;
		bool                           bInIsInterested;
		struct FTigerPingNotificationUIData ReturnValue;
	} params = {};

	params.InContext = InContext;
	params.bInIsInterested = bInIsInterested;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_PingBase.TBP_PingBase_C.GetNotificationUIData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerPingNotificationUIData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTigerPingNotificationUIData UTBP_PingBase_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingBase.TBP_PingBase_C.GetNotificationUIData"));

	struct
	{
		struct FTigerPingContext       InContext;
		struct FTigerPingNotificationUIData ReturnValue;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
