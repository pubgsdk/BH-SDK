#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CullingPlane_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CullingPlane.TBP_CullingPlane_C
// 0x0010 (0x0238 - 0x0228)
class ATBP_CullingPlane_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_CullingPlane;                                          // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CullingPlane.TBP_CullingPlane_C"));
		return ptr;
	}


	void EnableCullingPlanes();
	void DisableCullingPlanes();
	void ExecuteUbergraph_TBP_CullingPlane(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
