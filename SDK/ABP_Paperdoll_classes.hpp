#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Paperdoll_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Paperdoll.ABP_Paperdoll_C
// 0x0BE1 (0x0FA1 - 0x03C0)
class UABP_Paperdoll_C : public UTigerPaperDollAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer;                          // 0x03C8(0x0098) (CPF_ContainsInstancedReference)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                              // 0x0460(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                              // 0x0528(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                              // 0x05F0(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x06B8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x0780(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x0800(0x0080)
	struct FTigerFilteredLayeredBlend                  TigerAnimGraphNode_FilteredLayeredBlending;               // 0x0880(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x0948(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x09C8(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0A68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0AB0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0B30(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0BB0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0C30(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0CB0(0x00B0)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                              // 0x0D60(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0E00(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0E80(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0EB0(0x00C8)
	bool                                               bIsDefaultSequenceList;                                   // 0x0F78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F79(0x0003) MISSED OFFSET
	struct FName                                       FaceAnimSlotName00;                                       // 0x0F7C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName01;                                       // 0x0F84(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName02;                                       // 0x0F8C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName03;                                       // 0x0F94(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Start_Position;                                           // 0x0F9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ENUM_UIAnimationMode>                  UIAnimationSelect;                                        // 0x0FA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Paperdoll.ABP_Paperdoll_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void FacialAnimations();
	void SelectAnimationSets(class UTigerAnimationSetCollection* Set_Collection);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_0C84F26241DF23504C8DBF9B4E6ED9D6();
	void AddSets(class UTigerAnimationSetCollection* SetCollection);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ClearProps(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_ABP_Paperdoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
