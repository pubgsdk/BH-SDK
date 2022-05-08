#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ChallengeGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C
// 0x0050 (0x02B0 - 0x0260)
class UTBP_UI_ChallengeGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeRight;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeLeft;                                                 // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUniformGridPanel*                           Grid;                                                     // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerClientRewardTrackChallenges*           ChallengeTrack;                                           // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    AnimationFinished;                                        // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FVector2D                                   ChallengeWidgetSize;                                      // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsMasteryGrid;                                            // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class UTBP_UI_ChallengesMenu_C*                    ChallengesMenu;                                           // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_2();
	void SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_1();
	void CreateChallengeWidget(bool InIsMastery, class UTigerChallenge* InChallenge, class UTigerWidget** OutWidget);
	void SetChallengeWidgetSize(float Width, float Height);
	void UpdateChallengeProgress();
	void FillGrid();
	void Construct();
	void CallAnimationFinished();
	void ExecuteUbergraph_TBP_UI_ChallengeGrid(int EntryPoint);
	void AnimationFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
