#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PlayerController.TBP_PlayerController_C
// 0x0058 (0x0CF8 - 0x0CA0)
class ATBP_PlayerController_C : public ATigerPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_RespawnFeature_C*                       TBP_RespawnFeature;                                       // 0x0CA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTBP_ChatComponent_C*                        TBP_ChatComponent;                                        // 0x0CB0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTBP_ContextualHelpComponent_C*              TBP_ContextualHelpComponent;                              // 0x0CB8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTBP_PingControllerComponent_C*              TBP_PingControllerComponent;                              // 0x0CC0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTBP_EmoteControllerComponent_C*             TBP_EmoteControllerComponent;                             // 0x0CC8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTigerMenuWidget*                            ArchetypeHelpUI;                                          // 0x0CD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*UObject*/                          ArchtypeHelpClass;                                        // 0x0CD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Axis_X;                                                   // 0x0CE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Axis_Y;                                                   // 0x0CE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Axis_Triggers;                                            // 0x0CE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	class UTBP_UI_ControllerDisconnected_C*            ControllerDisconnectedPopup;                              // 0x0CF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PlayerController.TBP_PlayerController_C"));
		return ptr;
	}


	void ControllerConnectionChanged(bool InConnected, int InControllerId);
	void StopGasSounds();
	void DebugCrosshairLineHitTest(const struct FVector& Start, const struct FVector& End);
	void OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C();
	void OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C();
	void InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReturnToElysium();
	void ShowPostMatchScreen();
	void OnGhostModeSet_Event(bool bIsGhostModeEnabled);
	void BindOnGhostModeSet();
	void ExitMatch();
	void OnToggleMainMenu();
	void Debug_ShowCharacterCard();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_Ghost_FlyUp_K2Node_InputAxisEvent_3(float AxisValue);
	void ExecuteUbergraph_TBP_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
