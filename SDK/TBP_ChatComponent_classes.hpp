#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ChatComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ChatComponent.TBP_ChatComponent_C
// 0x0028 (0x00F8 - 0x00D0)
class UTBP_ChatComponent_C : public UTigerChatComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UUserWidget*                                 ChatWindow;                                               // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bPreventMessages;                                         // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsSoloMatch;                                             // 0x00E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	TArray<struct FTigerChatMessage>                   BufferedMessages;                                         // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ChatComponent.TBP_ChatComponent_C"));
		return ptr;
	}


	void CanOpenChat(bool* Result);
	void OnFailedToJoinParty(ETigerJoinedPartyFailedReason InJoinedPartyFailedReason);
	void OnBlockedPlayerWasRemovedFromParty(bool bInWasBlockedByMe);
	void OnLeftPartyDueToBlockedPlayerJoinBlueprint(bool bInWasKicked);
	void OnLoaded_5480FD144B182ADDBFA34EB41371AFF7(class UClass* /*UObject*/ Loaded);
	void Server_SendChatMessageToClients(const struct FText& MessageText, bool bWriteOnlyToGroupMembers);
	void OnMessageInput(const struct FText& MessageText, bool OnlyGroup);
	void OnChatMessageReceived(const struct FTigerChatMessage& InMessage);
	void OpenChatWindow();
	void PreventChatUntilInElysium();
	void Welcome_Players_In_Chat();
	void CreateChatWindow();
	void OnBanStatusUpdated(const struct FTigerMuteInfo& InMuteInfo);
	void AddChatMessage(const struct FTigerChatMessage& InMessage);
	void SendBufferedMessages();
	void OnGameModeSelectionClosed(class UTigerMenuWidget* InMenuWidget);
	void ExecuteUbergraph_TBP_ChatComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
