#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ReplayController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ReplayController.TBP_ReplayController_C
// 0x0029 (0x0831 - 0x0808)
class ATBP_ReplayController_C : public ATigerReplaySpectatorController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0808(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                Current_Player_Index;                                     // 0x0810(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0814(0x0004) MISSED OFFSET
	class UTBP_UI_ReplayScrubber_C*                    Scrub_Widget;                                             // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SpecMode;                                                 // 0x0820(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsArmCreated;                                             // 0x0821(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0822(0x0006) MISSED OFFSET
	class UCameraComponent*                            Current_Camera;                                           // 0x0828(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UIFocused;                                                // 0x0830(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ReplayController.TBP_ReplayController_C"));
		return ptr;
	}


	void Skip_Seconds(float InSeconds);
	void ReceiveBeginPlay();
	void ExitMenu();
	void UpdateDisplayedInputMode(ETigerReplayInputMode InInputModeToDisplay);
	void ToggleThroughPlayers();
	void ToggleKeyFramFocus();
	void ExecuteUbergraph_TBP_ReplayController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
