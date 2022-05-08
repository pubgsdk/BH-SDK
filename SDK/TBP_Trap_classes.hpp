#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Trap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Trap.TBP_Trap_C
// 0x0048 (0x0378 - 0x0330)
class ATBP_Trap_C : public ATigerTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USpotLightComponent*                         TrapLightBottom;                                          // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             IconLocation;                                             // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             IconRoot;                                                 // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         TrapLightTop;                                             // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Dyn_material;                                             // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 Curve;                                                    // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerTrapsConfig*                           TrapConfig;                                               // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerInWorldWidget*                         InWorldWidget;                                            // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Trap.TBP_Trap_C"));
		return ptr;
	}


	void CreateWorldIcon(class ATigerPlayerController* InPlayerController, class UTBP_UI_Discipline_Trap_WorldMarker_C** OutWidget);
	void IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* OtherCharacter, bool* Is_Friendly);
	void GetWorldMarkerWidget(class UTBP_UI_Discipline_Trap_WorldMarker_C** AsTBP_UI_Discipline_Trap_World_Marker, bool* bSuccess);
	void OnPlacedTrap();
	void OnActivatedTrap();
	void OnTriggeredTrap();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void TrapDestroy();
	void ExecuteUbergraph_TBP_Trap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
