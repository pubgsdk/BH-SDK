// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_UI_ChatWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnBanStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMuteInfo          InMuteInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBPI_UI_ChatWindow_C::OnBanStatusChanged(const struct FTigerMuteInfo& InMuteInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnBanStatusChanged"));

	struct
	{
		struct FTigerMuteInfo          InMuteInfo;
	} params = {};

	params.InMuteInfo = InMuteInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.WelcomePlayersInElysium
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_ChatWindow_C::WelcomePlayersInElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.WelcomePlayersInElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_ChatWindow_C::OnMessageNameUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameUnhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameHovered
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InChatData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBPI_UI_ChatWindow_C::OnMessageNameHovered(const struct FTigerChatMessage& InChatData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameHovered"));

	struct
	{
		struct FTigerChatMessage       InChatData;
	} params = {};

	params.InChatData = InChatData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.Focus on Input Box
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_UI_ChatWindow_C::Focus_on_Input_Box()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.Focus on Input Box"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.AddMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InChatMessage                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBPI_UI_ChatWindow_C::AddMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.AddMessage"));

	struct
	{
		struct FTigerChatMessage       InChatMessage;
	} params = {};

	params.InChatMessage = InChatMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
