// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VoiceChatPopupUser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.Set Player Name
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InPlayerName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_VoiceChatPopupUser_C::Set_Player_Name(const struct FText& InPlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.Set Player Name"));

	struct
	{
		struct FText                   InPlayerName;
	} params = {};

	params.InPlayerName = InPlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopupUser_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopupUser_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.ExecuteUbergraph_TBP_UI_VoiceChatPopupUser
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatPopupUser_C::ExecuteUbergraph_TBP_UI_VoiceChatPopupUser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopupUser.TBP_UI_VoiceChatPopupUser_C.ExecuteUbergraph_TBP_UI_VoiceChatPopupUser"));

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
