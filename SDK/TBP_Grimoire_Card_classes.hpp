#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Grimoire_Card_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Grimoire_Card.TBP_Grimoire_Card_C
// 0x0100 (0x0348 - 0x0248)
class ATBP_Grimoire_Card_C : public ATigerGrimoireCard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     FloatingCardAnimation_TranslationCurve_F0AD789C4045538D46B43F856C07A722;// 0x0250(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    FloatingCardAnimation__Direction_F0AD789C4045538D46B43F856C07A722;// 0x025C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FloatingCardAnimation;                                    // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    CardMaterialInstance;                                     // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UGrimoireCardMaterialPreset*                 CardMaterialPreset;                                       // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxDamage;                                                // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxExtraDamage;                                           // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxDamageOnEdges;                                         // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UTigerGrimoireEntry*                         CurrentEntry;                                             // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULevelSequence*                              TransitionSequence;                                       // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     MaxFloatHeight;                                           // 0x02A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxVertical;                                              // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxHorizontal;                                            // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LeftVec;                                                  // 0x02B4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Begin_Float_Animation_Dispatcher;                         // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FVector                                     MaxRotation;                                              // 0x02D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     MinRotation;                                              // 0x02DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TransitionPlayRate;                                       // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FloatingPlayRate;                                         // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRandomStream                               CardStream;                                               // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	ETigerGrimoireEntryMediaDisplayMode                LastEntryType;                                            // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UStaticMesh>                  MeshSoftPtr;                                              // 0x0300(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FDebugFloatHistory                          FloatHistory;                                             // 0x0328(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Grimoire_Card.TBP_Grimoire_Card_C"));
		return ptr;
	}


	void On_Texture_Loaded();
	void Randomise_Damage_Placement();
	void OnClose();
	void OnOpen();
	void Play_Card_Transition_Animation();
	void Set_Is_Back_Using_DNMR(bool InBool);
	void Set_Is_Front_Using_DNMR(bool InBool);
	void Change_Card_To_New_Card(class UTigerGrimoireEntry* InEntry);
	void Change_Quality_Level(const struct FDataTableRowHandle& InRow);
	void Change_Border_Colour(const struct FDataTableRowHandle& InRow);
	void Send_Card_Mat_Properties_to_Material();
	void Send_Backface_Texture_to_Material();
	void Send_Frontface_Texture_to_Material();
	void Overwrite_Card_Material_Preset(class UGrimoireCardMaterialPreset* InPreset);
	void Set_Frontface(class UTexture* InTexture);
	void Set_Backface(class UTexture* InTexture);
	void Create_Material_Instance();
	void Show(class UTigerGrimoireEntry* InEntry, ETigerGrimoireEntryMediaDisplayMode InLastEntryNode);
	void UserConstructionScript();
	void FloatingCardAnimation__FinishedFunc();
	void FloatingCardAnimation__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayFloatingAnimation();
	void ExecuteUbergraph_TBP_Grimoire_Card(int EntryPoint);
	void Begin_Float_Animation_Dispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
