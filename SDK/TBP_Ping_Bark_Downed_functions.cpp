// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Bark_Downed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Ping_Bark_Downed.TBP_Ping_Bark_Downed_C.GetIconData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerPingIconData      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor)

struct FTigerPingIconData UTBP_Ping_Bark_Downed_C::GetIconData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Bark_Downed.TBP_Ping_Bark_Downed_C.GetIconData"));

	struct
	{
		struct FTigerPingContext       InContext;
		struct FTigerPingIconData      ReturnValue;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Ping_Bark_Downed.TBP_Ping_Bark_Downed_C.GetNotificationUIData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerPingNotificationUIData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTigerPingNotificationUIData UTBP_Ping_Bark_Downed_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Bark_Downed.TBP_Ping_Bark_Downed_C.GetNotificationUIData"));

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
