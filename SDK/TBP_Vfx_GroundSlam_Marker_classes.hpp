#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Vfx_GroundSlam_Marker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C
// 0x0018 (0x0240 - 0x0228)
class ATBP_Vfx_GroundSlam_Marker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        Marker;                                                   // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C"));
		return ptr;
	}


	void ToggleUIVisibility();
	void ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
