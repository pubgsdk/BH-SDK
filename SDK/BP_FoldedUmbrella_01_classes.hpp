#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FoldedUmbrella_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FoldedUmbrella_01.BP_FoldedUmbrella_01_C
// 0x0028 (0x0250 - 0x0228)
class ABP_FoldedUmbrella_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_FoldedUmbrella_01;                                     // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Color;                                                    // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	TArray<struct FCoreUObject_FColor>                 Colors;                                                   // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FoldedUmbrella_01.BP_FoldedUmbrella_01_C"));
		return ptr;
	}


	void SetCustomPrimitiveData();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FoldedUmbrella_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
