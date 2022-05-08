#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TutorialPlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TutorialPlayer.TBP_TutorialPlayer_C
// 0x03A0 (0x17A1 - 0x1401)
class ATBP_TutorialPlayer_C : public ATBP_Player_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1401(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1408(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               bIsInHeavyAttack;                                         // 0x1410(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1411(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    ReportSuccessfullyShot;                                   // 0x1418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    ReportSuccessfulMeleeAttack;                              // 0x1428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bIsInventoryOpen;                                         // 0x1438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1439(0x0007) MISSED OFFSET
	struct FTigerPreviewerData                         TutorialAppearance;                                       // 0x1440(0x02B0) (CPF_Edit, CPF_BlueprintVisible)
	struct FMulticastScriptDelegate                    OnWallJumpDispatcher;                                     // 0x16F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnAirDashDispatcher;                                      // 0x1700(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnCrouchDispatcher;                                       // 0x1710(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnClimbStartDispatcher;                                   // 0x1720(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnClimbEndedDispatcher;                                   // 0x1730(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnDisciplineUseDispatcher;                                // 0x1740(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnJumpDispatcher;                                         // 0x1750(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnSlideStartDispatcher;                                   // 0x1760(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnWeaponFiredDispatcher;                                  // 0x1770(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnSlideEndedDispatcher;                                   // 0x1780(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                GasApplyDamageTimer;                                      // 0x1790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerContextualHelp*                        PreGasContextualHelp;                                     // 0x1798(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bShowingGasContexteualHelp;                               // 0x17A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TutorialPlayer.TBP_TutorialPlayer_C"));
		return ptr;
	}


	void HideContextualGas();
	void ShowContextualGas();
	bool IsInInvulnerableState();
	void Example_OnHeightenedSensesToggled(bool bIsActive);
	void Example_OnInventoryToggled();
	void Example_OnItemPickedUp(class UTigerItemAsset* Item, int Count);
	void Example_OnTargetSuccessfullyHitWithMelee(class AActor* Target);
	void Example_OnTargetSuccessfullyShot(class AActor* Target);
	void Example_OnSuccessfulBlock();
	void Example_OnAttack(bool bIsHeavyAttack);
	void Example_OnTargetShot(class ATigerCharacter* Shot_Target);
	void Example_OnFeedingCompleted(bool bTargetIsDrained);
	void Example_OnStartedFeeding();
	void Example_OnStoppedFeeding(bool bWasAttacked);
	void Example_OnTutorialPlayerDodged(const struct FVector& Direction);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveUnpossessed(class AController* OldController);
	void ReceivePossessed(class AController* NewController);
	void OnWallJump(const struct FVector& InVelocity);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void OnClimbStarted(const struct FVector& InVelocity);
	void OnClimbEnded(const struct FVector& InVelocity);
	void OnDisciplineUseSucceeded(const struct FDisciplineUse& DisciplineUse);
	void OnJumped();
	void OnWeaponFired(bool bSecondaryWeaponFired);
	void OnSlidingStarted(const struct FVector& InVelocity);
	void OnSlidingEnded(const struct FVector& InVelocity);
	void OnDoubleJump(const struct FVector& Direction);
	void ApplyDamage();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_TBP_TutorialPlayer(int EntryPoint);
	void OnSlideEndedDispatcher__DelegateSignature();
	void OnWeaponFiredDispatcher__DelegateSignature();
	void OnSlideStartDispatcher__DelegateSignature();
	void OnJumpDispatcher__DelegateSignature();
	void OnDisciplineUseDispatcher__DelegateSignature(const struct FDisciplineUse& DisciplineUse);
	void OnClimbEndedDispatcher__DelegateSignature();
	void OnClimbStartDispatcher__DelegateSignature();
	void OnCrouchDispatcher__DelegateSignature();
	void OnAirDashDispatcher__DelegateSignature();
	void OnWallJumpDispatcher__DelegateSignature();
	void ReportSuccessfulMeleeAttack__DelegateSignature(class AActor* Target);
	void ReportSuccessfullyShot__DelegateSignature(class AActor* Target);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
