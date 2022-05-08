#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_JewelleryStorefront_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_JewelleryStorefront_02.BP_JewelleryStorefront_02_C
// 0x015C (0x0384 - 0x0228)
class ABP_JewelleryStorefront_02_C : public AActor
{
public:
	class USpotLightComponent*                         SpotLight5;                                               // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight4;                                               // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight3;                                               // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight2;                                               // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_JewelleryDisplay_06;                                   // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_JewelleryDisplay_01;                                   // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight;                                                // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_JewelleryDisplay_08;                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_JewelleryDisplay_02;                                   // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_DisplayBox_01;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_DisplayBox_02;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_DisplayBackdrop_02;                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FCoreUObject_FColor                         Display_box_color;                                        // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FCoreUObject_FColor                         Backdrop_color;                                           // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         Display_01;                                               // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                RIght_Display_Selector;                                   // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Display01_scale;                                          // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UStaticMesh*>                         Display_02;                                               // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                Left_Display_Selector;                                    // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Display02_scale;                                          // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FVector>                             Display_2_offset;                                         // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FVector>                             Display_1_offset;                                         // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UStaticMesh*>                         LowWallDisplay;                                           // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                LowWallDisplaySelector;                                   // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HIghWallDisplaySelector;                                  // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FVector>                             Display01_scale2;                                         // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FVector>                             Display02_scale2;                                         // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              Left_Display_move;                                        // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Right_display_move;                                       // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Light_Intensity;                                          // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                light_color;                                              // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FCoreUObject_FColor>                 LightColors;                                              // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                Light_Setup;                                              // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         Backdrop_mesh;                                            // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                Backdrop_selector;                                        // 0x0380(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_JewelleryStorefront_02.BP_JewelleryStorefront_02_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
