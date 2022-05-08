#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HeightenedSensesDecal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HeightenedSensesDecal.BP_HeightenedSensesDecal_C
// 0x001C (0x024C - 0x0230)
class ABP_HeightenedSensesDecal_C : public ATigerHeightenedSensesActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            HeightenedSensesCollider;                                 // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_WallStain_01;                                          // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                Decal;                                                    // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HeightenedSensesDecal.BP_HeightenedSensesDecal_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideWhenFadeFinished();
	void OnEnterHeightenedSenseAreaInitial();
	void OnEnterHeightenedSenseArea();
	void OnLeaveHeightenedSenseArea();
	void ExecuteUbergraph_BP_HeightenedSensesDecal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
