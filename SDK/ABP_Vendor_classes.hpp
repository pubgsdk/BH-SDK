#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Vendor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Vendor.ABP_Vendor_C
// 0x3D51 (0x4181 - 0x0430)
class UABP_Vendor_C : public UTigerNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0438(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x0468(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x05C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x05E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x0610(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x0638(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x0660(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x0688(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x06B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x06D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x0700(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x0728(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                             // 0x07A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x07D8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                             // 0x0858(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x0888(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                             // 0x0908(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x0938(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_7;                             // 0x0960(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                             // 0x09D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x0A08(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                             // 0x0A88(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12;                            // 0x0AB8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                            // 0x0B68(0x00C8)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer_5;                        // 0x0C30(0x0098) (CPF_ContainsInstancedReference)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                             // 0x0CC8(0x0030)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer_4;                        // 0x0CF8(0x0098) (CPF_ContainsInstancedReference)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x0D90(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x0E30(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                             // 0x0EB0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11;                            // 0x0EE0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x0F90(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x1050(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1078(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5;                              // 0x10A0(0x00C8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x1168(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1188(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x11A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x12B0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x13B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x14C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x15C8(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x16D0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                             // 0x16F8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                            // 0x1728(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x17D8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                            // 0x1878(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x1940(0x0080)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                              // 0x19C0(0x00A0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                // 0x1A60(0x01E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x1C40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x1C68(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x1C90(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                             // 0x1D10(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                              // 0x1D40(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                              // 0x1E08(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                              // 0x1ED0(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x1F98(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x2060(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x20E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x2160(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x21E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x2260(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x22E0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                             // 0x2310(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x23C0(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x2460(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x2488(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x2508(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x2538(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_6;                             // 0x2560(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x25D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x2608(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x2688(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                             // 0x26B8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x2768(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_5;                             // 0x2790(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x2808(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x2838(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x28B8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                             // 0x28E8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x2998(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_4;                             // 0x29C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x2A38(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x2A68(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x2AE8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                             // 0x2B18(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x2BC8(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_3;                             // 0x2BF0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x2C68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x2C98(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x2D18(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                             // 0x2D48(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x2DF8(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_2;                             // 0x2E20(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x2E98(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x2EC8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x2F48(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                             // 0x2F78(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x3028(0x0028)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                               // 0x3050(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x30C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x30F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x3178(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x31A8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x3258(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x3308(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x33D0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x3450(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x3500(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x3580(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x3600(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x3680(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x3700(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x3780(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x37B0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x3860(0x0158)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer_3;                        // 0x39B8(0x0098) (CPF_ContainsInstancedReference)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer_2;                        // 0x3A50(0x0098) (CPF_ContainsInstancedReference)
	struct FTigerAnimNode_RandomPlayer                 TigerAnimGraphNode_RandomPlayer;                          // 0x3AE8(0x0098) (CPF_ContainsInstancedReference)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x3B80(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x3BA8(0x00C0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x3C68(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x3D30(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x3D60(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x3E10(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x3EB0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3ED8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x3EE0(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x40C0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x40E0(0x0020)
	class UTigerAnimationSetAsset*                     AnimationSet;                                             // 0x4100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasRandomisedIdle;                                        // 0x4108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x4109(0x0003) MISSED OFFSET
	float                                              LookAtVertical;                                           // 0x410C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LookAtHorizontal;                                         // 0x4110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LookAtHorizontalSlow;                                     // 0x4114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaX;                                                   // 0x4118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    LookAtHeadRotator;                                        // 0x411C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FRotator                                    LookAtSpineRotator;                                       // 0x4128(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AnimLookAtAllowed;                                        // 0x4134(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasGreeted;                                               // 0x4135(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x4136(0x0002) MISSED OFFSET
	float                                              LookAtTransSpeed;                                         // 0x4138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_00;                                      // 0x413C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_01;                                      // 0x4144(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_02;                                      // 0x414C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       FaceAnimSlotName_03;                                      // 0x4154(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ETigerDialogueIdleAnimation                        IdleType;                                                 // 0x415C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasIdleToLookAtAnim;                                      // 0x415D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasLookAtToIdleAnim;                                      // 0x415E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsInInteraction;                                          // 0x415F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CooldownOver;                                             // 0x4160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x4161(0x0003) MISSED OFFSET
	float                                              DeltaTimer;                                               // 0x4164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CooldownLenght;                                           // 0x4168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               TalkFaceAnim;                                             // 0x416C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               InIdleToLookAtTrasition;                                  // 0x416D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x2];                                       // 0x416E(0x0002) MISSED OFFSET
	float                                              DeltaTimerFace;                                           // 0x4170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FaceGestureIntensity;                                     // 0x4174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FaceGestureIntensityPrevious;                             // 0x4178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               GestureFull;                                              // 0x417C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               VendorModBody;                                            // 0x417D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               VendorModArms;                                            // 0x417E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IK_R;                                                     // 0x417F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IK_L;                                                     // 0x4180(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_Vendor.ABP_Vendor_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void FacialAnimations();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoBoneIK_71085090441A50933E9234B24B942565();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoBoneIK_5DEAC04043E0A712CF872EB7ECCA082F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_0735F5284256031A9325319234ED41B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_4CB4533341993467A26ECB81A668411E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_DA6172AA400493BA03F8F8A4BEA66930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_LayeredBoneBlend_475D2D9649699EDE9CB0A0A2553FEB7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_ApplyAdditive_67BB282B48AEEFFD73CE24A3162004BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_ApplyAdditive_60E0B4E84BC3918E1417F78962966813();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_15B89E9D4B596BFF80A5CD8E2C64F874();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_42E5FECC46CAFE589D1F309D2453B31F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_CBFB54254D5370C8A3454E845EE6965D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_ABA9B10B4C10790D20F7B8AA6B1F547D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_822EF4B44DB6469C9B060D8762F40094();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_E3C5ED6A437462343E19EFBACF19F0EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_AE81A19F488093BADD936D99CAD5C60C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_2075C92C4889D267E32CE8A2EF82538A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_43195F654F5DF3412E3264955F5DDE9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_77FB4FDC4B7BFC1C767208911DB84CE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TwoWayBlend_39B34BC1465FAB64DAADDAAD885FA7DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_28D12F8345380FB0732DBC9C1E2E8BE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5271B87441507526CFB2E9892754F757();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_TigerAnimGraphNode_RandomPlayer_EFD9F8A946EAD367B0540095CEDBA86B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_A3C21E884C001902E53490BC23A95157();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5C24AFBF4658F112EBFA26A22AE806BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_SequencePlayer_5977FEFA403CF8C4FC0A7294EDDB7118();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_B717153E47BDC6FC167243960724E6DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_2F2EFE144AF47243C2F55DACAC9E8E3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_255766AC4FDCA0D27703D68212A3CD6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_4C5ACD6A4A1D38BF36F7579BDD8A61D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_C0FE37E64A029590CD0A7A907637A376();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_E1A4B50942C0F3E577231ABAD421A7E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_E50BEBAE4307FDF12DB6B7953FC94C5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Vendor_AnimGraphNode_TransitionResult_D5268DB64A8AA064CE21409B6025248F();
	void AddSets(class UTigerAnimationSetCollection* SetCollection);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_HasGreeted();
	void OnInitiateAnimationBlueprint();
	void AnimNotify_FullGesture();
	void AnimNotify_IK_L();
	void AnimNotify_IK_R();
	void ExecuteUbergraph_ABP_Vendor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
