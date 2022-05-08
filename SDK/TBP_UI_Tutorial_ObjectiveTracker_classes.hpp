#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Tutorial_ObjectiveTracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C
// 0x00B4 (0x0334 - 0x0280)
class UTBP_UI_Tutorial_ObjectiveTracker_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                ObjectivesContainer;                                      // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGridPanel*                                  ObjectiveStacker;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Tutorial_ObjectiveAnim_C*            TBP_UI_Tutorial_ObjectiveAnim;                            // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Tutorial_Objective_ProgressBar_C*    TutorialProgressBar;                                      // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnCheckStateChanged;                                      // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<struct FName, class UTBP_UI_Tutorial_Objective_C*> TrackedObjectives;                                        // 0x02C0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               BGisHidden;                                               // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class UTBP_UI_Tutorial_ObjectiveAnim_C*            TBP_UI_Tutorial_ObjectiveAnim02;                          // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeSinceNoObjectives;                                    // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerVariable;                                            // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumberOfObjectives;                                       // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C"));
		return ptr;
	}


	void MoveCompletedObjectiveToBottom(class UTBP_UI_Tutorial_Objective_C* CompletedObjective);
	void RemoveFinishedObjective(class UTBP_UI_Tutorial_Objective_C* CompletedObjective, const struct FName& ObjectiveIdentifier);
	void SetObjectiveAsComplete(const struct FName& ObjectiveIdentifier);
	void AddNewObjective(const struct FName& ObjectiveIdentifier, const struct FText& ObjectiveText, const struct FName& Action_to_Embed, const struct FName& GamepadOverride_Action_to_Embed, bool Has_Additional_Keyboard_Input, const struct FKey& Additional_Keyboard_Input, bool Has_Additional_Gamepad_Input, const struct FKey& Additional_Gamepad_Input, bool Override_Image, const struct FName& ImageToOverride, bool Persistant_Objective, const struct FName& GamepadImageToOverride);
	void AnimateInBG();
	void AnimateOutBG();
	void Construct();
	void ExecuteUbergraph_TBP_UI_Tutorial_ObjectiveTracker(int EntryPoint);
	void OnCheckStateChanged__DelegateSignature(bool bIsChecked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
