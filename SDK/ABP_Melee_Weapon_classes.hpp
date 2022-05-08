#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Melee_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Melee_Weapon.ABP_Melee_Weapon_C
// 0x0D10 (0x0FD0 - 0x02C0)
class UABP_Melee_Weapon_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x02F8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0400(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0420(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x0528(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0550(0x0020)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0570(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x0620(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0778(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x07C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x07E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x0810(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x0838(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x0990(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x09B8(0x0158)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4;                        // 0x0B10(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3;                        // 0x0B60(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x0BB0(0x0158)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                        // 0x0D08(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x0D58(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x0DA8(0x0158)
	ETigerGender                                       BodyType;                                                 // 0x0F00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsSecondaryWeapon;                                        // 0x0F01(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsPlayingAsFemaleBool;                                    // 0x0F02(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0F03(0x0001) MISSED OFFSET
	float                                              IsPlayingAsFemaleFloat;                                   // 0x0F04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     RootJointOffset;                                          // 0x0F08(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LeftHandIKOffset;                                         // 0x0F14(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ENUM_MeleeWeaponCategories>            CurrentMeleeWeapon;                                       // 0x0F20(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F21(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ENUM_MeleeWeaponCategories>, struct FVector> RootJointOffsetMap;                                       // 0x0F28(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<TEnumAsByte<ENUM_MeleeWeaponCategories>, struct FVector> LeftHandOffsetMap;                                        // 0x0F78(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UABP_Player_C*                               Anim_Instance;                                            // 0x0FC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Melee_Weapon.ABP_Melee_Weapon_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnMelee(int AttackCount);
	void ExecuteUbergraph_ABP_Melee_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
