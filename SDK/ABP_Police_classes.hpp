#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Police_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Police.ABP_Police_C
// 0x26FC (0x2B2C - 0x0430)
class UABP_Police_C : public UTigerNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0438(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x0468(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x05C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x05E8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                     // 0x0610(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x0658(0x00C0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x0718(0x00D0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4;                 // 0x07E8(0x0190)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x0978(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                        // 0x09F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x0A20(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x0A48(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                             // 0x0AC8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x0AF8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                             // 0x0B78(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                             // 0x0BA8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x0C58(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x0CF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x0D20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x0D48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x0D70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x0D98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x0DC0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x0DE8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                             // 0x0E68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x0E98(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                             // 0x0F18(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x0F48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x0F70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x0F98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x0FC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x0FE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x1010(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x1038(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x1060(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x1088(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x10B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x10D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x1100(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x1128(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x1150(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x1178(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3;                 // 0x11A0(0x0190)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x1330(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x13B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x13E0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x1460(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x1490(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x1510(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x1540(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x15C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x15F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x1670(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                 // 0x16A0(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1830(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x18D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1950(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x19D0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x1A00(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x1A28(0x0030)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone;                             // 0x1A58(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x1AF8(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x1BE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1C10(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1C90(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1D30(0x0080)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x1DB0(0x0190)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x1F40(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x1F70(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x2020(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x2050(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x2078(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x20A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x20C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x20F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x2118(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x2140(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x2170(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x21F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x2220(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x22A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x22D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x2350(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x2380(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x2400(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x2430(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x24E0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x2510(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x25C0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x2608(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                // 0x2610(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x27F0(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x29D0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x29F0(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x2A10(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x2A58(0x0048)
	bool                                               IsAimingWeapon;                                           // 0x2AA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2AA1(0x0007) MISSED OFFSET
	class ATigerNPC*                                   TigerNPC;                                                 // 0x2AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrafeDirectionFrontBack;                                 // 0x2AB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrafeDirectionLeftRight;                                 // 0x2AB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrafeDirectionFrontBackRotated;                          // 0x2AB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StrafeDirectionLeftRightRotated;                          // 0x2ABC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_Entity_C*                               TBPNPC;                                                   // 0x2AC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaTimeX;                                               // 0x2AC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              YawRotationSpeedSmooth;                                   // 0x2ACC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TurnInPlaceSpeed;                                         // 0x2AD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TurnInPlaceAlpha;                                         // 0x2AD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimHorizontal;                                            // 0x2AD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AimVertical;                                              // 0x2ADC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsDowned;                                                 // 0x2AE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsBlendingFireLean;                                       // 0x2AE1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x2AE2(0x0006) MISSED OFFSET
	class UAnimMontage*                                WeaponRecoil;                                             // 0x2AE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              VelocityFrontBack;                                        // 0x2AF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              VelocityLeftRight;                                        // 0x2AF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerPlayer*                                Player;                                                   // 0x2AF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LeftFootstepPosition;                                     // 0x2B00(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RightFootstepPosition;                                    // 0x2B0C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RightFootstepTime;                                        // 0x2B18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LeftFootstepTime;                                         // 0x2B1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Aim_Smooth;                                               // 0x2B20(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Police.ABP_Police_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void HandleFootstepAudio(float FootstepDuration, bool IsLeftFoot);
	void Map_Circle_to_Square(const struct FVector& InVec, struct FVector* Output);
	void HandleStateChangeReaction(ETigerAIMasqueradeState OldState, ETigerAIMasqueradeState NewState);
	bool CanReact(const struct FTigerNpcReactionEvent& ReactionEvent);
	void HandleReaction(const struct FTigerNpcReactionEvent& ReactionData);
	void Can_Jump(bool Should_Jump, bool* bJumping);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EC5EF6D14BF776AA1259E28DD5F7A44B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EA62445D46638DCD18559EA8B623D728();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B44A0BE446B2CACC4F13BE9E255CB164();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B36FC9EA4F24F32AE32E918EBF128D95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1D55766C44E28FFB28F77A8929446934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FF27E0A046B50C91191E7B9E521D2CA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_D28D7C2D444FCB4100FCE1832C50E560();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_841A7CEC4F260CC60EB1DE81030C024F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_AEA66D0E4D466A75F6C139B6B0F95A91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_A18C32184245A71D862594BE288B2F46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F4893EEA48157BB1635FC89445ECB7F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F83374FE458C0BB71F28C4B599AB6484();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_RotateRootBone_8503099343A57E5A25BB97BBC81587B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FED0D5E543E4A1C9F65122873FD89A66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_CDB451B348152D9B320D629BA6D11039();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_6114EB14452AB8D31077C992A2451E21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_E864D3EF4DB977D3C6FEA69171CEBC95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F5F1B2F84B837D046781D8956621052E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1DB26E1A4136BF76554013B48D484633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_75FD4E7849D60407D1D616AA1E4BAF11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_74B6CF154A550FA170784EB96D20A093();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_2EC250834B357B106692DAA9AC7C8A5C();
	void OnNpcReactionEvent(const struct FTigerNpcReactionEvent& ReactionEvent);
	void OnAnimationModeChanged(ETigerAIAnimationMode LastAnimationMode);
	void OnNpcThreatStateChangedEvent(ETigerAIMasqueradeState OldThreatState, ETigerAIMasqueradeState NewThreatState);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_8503F7B641F81AD57A8E029C089ED956();
	void OnEntityEvent(ETigerEntityEvent EntityEvent);
	void OnFootstep(bool bIsLeftFoot, float FootstepDuration);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_DA5442FE42F4C564170B91AD76CB82AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_C1276B2E42B8AB14B62C9CA500949AD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F7A8CC2F42168D0B09EAFDA70CED7282();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1EAD016248FFBD7F5EE82491EEA532DB();
	void AnimNotify_HideMagazine1();
	void AnimNotify_HideMagazine2();
	void AnimNotify_UnHideMagazine1();
	void AnimNotify_UnHideMagazine2();
	void OnFiredWeapon(bool bInSecondaryWeaponFired);
	void ExecuteUbergraph_ABP_Police(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
